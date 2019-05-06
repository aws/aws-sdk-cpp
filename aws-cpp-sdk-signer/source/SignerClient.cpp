/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/signer/SignerClient.h>
#include <aws/signer/SignerEndpoint.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/signer/model/StartSigningJobRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::signer;
using namespace Aws::signer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "signer";
static const char* ALLOCATION_TAG = "SignerClient";


SignerClient::SignerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::~SignerClient()
{
}

void SignerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SignerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SignerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CancelSigningProfileOutcome SignerClient::CancelSigningProfile(const CancelSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSigningProfile", "Required field: ProfileName, is not set");
    return CancelSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelSigningProfileOutcome(NoResult());
  }
  else
  {
    return CancelSigningProfileOutcome(outcome.GetError());
  }
}

CancelSigningProfileOutcomeCallable SignerClient::CancelSigningProfileCallable(const CancelSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::CancelSigningProfileAsync(const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::CancelSigningProfileAsyncHelper(const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSigningProfile(request), context);
}

DescribeSigningJobOutcome SignerClient::DescribeSigningJob(const DescribeSigningJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSigningJob", "Required field: JobId, is not set");
    return DescribeSigningJobOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSigningJobOutcome(DescribeSigningJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSigningJobOutcome(outcome.GetError());
  }
}

DescribeSigningJobOutcomeCallable SignerClient::DescribeSigningJobCallable(const DescribeSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::DescribeSigningJobAsync(const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSigningJobAsyncHelper( request, handler, context ); } );
}

void SignerClient::DescribeSigningJobAsyncHelper(const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSigningJob(request), context);
}

GetSigningPlatformOutcome SignerClient::GetSigningPlatform(const GetSigningPlatformRequest& request) const
{
  if (!request.PlatformIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningPlatform", "Required field: PlatformId, is not set");
    return GetSigningPlatformOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlatformId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-platforms/";
  ss << request.GetPlatformId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSigningPlatformOutcome(GetSigningPlatformResult(outcome.GetResult()));
  }
  else
  {
    return GetSigningPlatformOutcome(outcome.GetError());
  }
}

GetSigningPlatformOutcomeCallable SignerClient::GetSigningPlatformCallable(const GetSigningPlatformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningPlatformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningPlatform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::GetSigningPlatformAsync(const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSigningPlatformAsyncHelper( request, handler, context ); } );
}

void SignerClient::GetSigningPlatformAsyncHelper(const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSigningPlatform(request), context);
}

GetSigningProfileOutcome SignerClient::GetSigningProfile(const GetSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningProfile", "Required field: ProfileName, is not set");
    return GetSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSigningProfileOutcome(GetSigningProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetSigningProfileOutcome(outcome.GetError());
  }
}

GetSigningProfileOutcomeCallable SignerClient::GetSigningProfileCallable(const GetSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::GetSigningProfileAsync(const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::GetSigningProfileAsyncHelper(const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSigningProfile(request), context);
}

ListSigningJobsOutcome SignerClient::ListSigningJobs(const ListSigningJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSigningJobsOutcome(ListSigningJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListSigningJobsOutcome(outcome.GetError());
  }
}

ListSigningJobsOutcomeCallable SignerClient::ListSigningJobsCallable(const ListSigningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningJobsAsync(const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningJobsAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningJobsAsyncHelper(const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningJobs(request), context);
}

ListSigningPlatformsOutcome SignerClient::ListSigningPlatforms(const ListSigningPlatformsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-platforms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSigningPlatformsOutcome(ListSigningPlatformsResult(outcome.GetResult()));
  }
  else
  {
    return ListSigningPlatformsOutcome(outcome.GetError());
  }
}

ListSigningPlatformsOutcomeCallable SignerClient::ListSigningPlatformsCallable(const ListSigningPlatformsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningPlatformsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningPlatforms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningPlatformsAsync(const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningPlatformsAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningPlatformsAsyncHelper(const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningPlatforms(request), context);
}

ListSigningProfilesOutcome SignerClient::ListSigningProfiles(const ListSigningProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSigningProfilesOutcome(ListSigningProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListSigningProfilesOutcome(outcome.GetError());
  }
}

ListSigningProfilesOutcomeCallable SignerClient::ListSigningProfilesCallable(const ListSigningProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningProfilesAsync(const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningProfilesAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningProfilesAsyncHelper(const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningProfiles(request), context);
}

PutSigningProfileOutcome SignerClient::PutSigningProfile(const PutSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSigningProfile", "Required field: ProfileName, is not set");
    return PutSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutSigningProfileOutcome(PutSigningProfileResult(outcome.GetResult()));
  }
  else
  {
    return PutSigningProfileOutcome(outcome.GetError());
  }
}

PutSigningProfileOutcomeCallable SignerClient::PutSigningProfileCallable(const PutSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::PutSigningProfileAsync(const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::PutSigningProfileAsyncHelper(const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSigningProfile(request), context);
}

StartSigningJobOutcome SignerClient::StartSigningJob(const StartSigningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSigningJobOutcome(StartSigningJobResult(outcome.GetResult()));
  }
  else
  {
    return StartSigningJobOutcome(outcome.GetError());
  }
}

StartSigningJobOutcomeCallable SignerClient::StartSigningJobCallable(const StartSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::StartSigningJobAsync(const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSigningJobAsyncHelper( request, handler, context ); } );
}

void SignerClient::StartSigningJobAsyncHelper(const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSigningJob(request), context);
}

