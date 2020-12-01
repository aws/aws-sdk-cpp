/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

#include <aws/profile/ProfileClient.h>
#include <aws/profile/ProfileEndpoint.h>
#include <aws/profile/ProfileErrorMarshaller.h>
#include <aws/profile/model/AddProfileKeyRequest.h>
#include <aws/profile/model/CreateDomainRequest.h>
#include <aws/profile/model/CreateProfileRequest.h>
#include <aws/profile/model/DeleteDomainRequest.h>
#include <aws/profile/model/DeleteIntegrationRequest.h>
#include <aws/profile/model/DeleteProfileRequest.h>
#include <aws/profile/model/DeleteProfileKeyRequest.h>
#include <aws/profile/model/DeleteProfileObjectRequest.h>
#include <aws/profile/model/DeleteProfileObjectTypeRequest.h>
#include <aws/profile/model/GetDomainRequest.h>
#include <aws/profile/model/GetIntegrationRequest.h>
#include <aws/profile/model/GetProfileObjectTypeRequest.h>
#include <aws/profile/model/GetProfileObjectTypeTemplateRequest.h>
#include <aws/profile/model/ListAccountIntegrationsRequest.h>
#include <aws/profile/model/ListDomainsRequest.h>
#include <aws/profile/model/ListIntegrationsRequest.h>
#include <aws/profile/model/ListProfileObjectTypeTemplatesRequest.h>
#include <aws/profile/model/ListProfileObjectTypesRequest.h>
#include <aws/profile/model/ListProfileObjectsRequest.h>
#include <aws/profile/model/ListTagsForResourceRequest.h>
#include <aws/profile/model/PutIntegrationRequest.h>
#include <aws/profile/model/PutProfileObjectRequest.h>
#include <aws/profile/model/PutProfileObjectTypeRequest.h>
#include <aws/profile/model/SearchProfilesRequest.h>
#include <aws/profile/model/TagResourceRequest.h>
#include <aws/profile/model/UntagResourceRequest.h>
#include <aws/profile/model/UpdateDomainRequest.h>
#include <aws/profile/model/UpdateProfileRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Profile;
using namespace Aws::Profile::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "profile";
static const char* ALLOCATION_TAG = "ProfileClient";


ProfileClient::ProfileClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ProfileErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProfileClient::ProfileClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ProfileErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProfileClient::ProfileClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ProfileErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ProfileClient::~ProfileClient()
{
}

void ProfileClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Profile");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ProfileEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ProfileClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddProfileKeyOutcome ProfileClient::AddProfileKey(const AddProfileKeyRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddProfileKey", "Required field: DomainName, is not set");
    return AddProfileKeyOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/keys";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddProfileKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddProfileKeyOutcomeCallable ProfileClient::AddProfileKeyCallable(const AddProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::AddProfileKeyAsync(const AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddProfileKeyAsyncHelper( request, handler, context ); } );
}

void ProfileClient::AddProfileKeyAsyncHelper(const AddProfileKeyRequest& request, const AddProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddProfileKey(request), context);
}

CreateDomainOutcome ProfileClient::CreateDomain(const CreateDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomain", "Required field: DomainName, is not set");
    return CreateDomainOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable ProfileClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void ProfileClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

CreateProfileOutcome ProfileClient::CreateProfile(const CreateProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProfile", "Required field: DomainName, is not set");
    return CreateProfileOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable ProfileClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfileAsyncHelper( request, handler, context ); } );
}

void ProfileClient::CreateProfileAsyncHelper(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfile(request), context);
}

DeleteDomainOutcome ProfileClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainName, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable ProfileClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteIntegrationOutcome ProfileClient::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: DomainName, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/integrations/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationOutcomeCallable ProfileClient::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteIntegrationAsyncHelper(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegration(request), context);
}

DeleteProfileOutcome ProfileClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: DomainName, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable ProfileClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteProfileAsyncHelper(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfile(request), context);
}

DeleteProfileKeyOutcome ProfileClient::DeleteProfileKey(const DeleteProfileKeyRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileKey", "Required field: DomainName, is not set");
    return DeleteProfileKeyOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/keys/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProfileKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileKeyOutcomeCallable ProfileClient::DeleteProfileKeyCallable(const DeleteProfileKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteProfileKeyAsync(const DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileKeyAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteProfileKeyAsyncHelper(const DeleteProfileKeyRequest& request, const DeleteProfileKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfileKey(request), context);
}

DeleteProfileObjectOutcome ProfileClient::DeleteProfileObject(const DeleteProfileObjectRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObject", "Required field: DomainName, is not set");
    return DeleteProfileObjectOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/objects/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProfileObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectOutcomeCallable ProfileClient::DeleteProfileObjectCallable(const DeleteProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteProfileObjectAsync(const DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileObjectAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteProfileObjectAsyncHelper(const DeleteProfileObjectRequest& request, const DeleteProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfileObject(request), context);
}

DeleteProfileObjectTypeOutcome ProfileClient::DeleteProfileObjectType(const DeleteProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: DomainName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfileObjectType", "Required field: ObjectTypeName, is not set");
    return DeleteProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/object-types/";
  ss << request.GetObjectTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileObjectTypeOutcomeCallable ProfileClient::DeleteProfileObjectTypeCallable(const DeleteProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::DeleteProfileObjectTypeAsync(const DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileObjectTypeAsyncHelper( request, handler, context ); } );
}

void ProfileClient::DeleteProfileObjectTypeAsyncHelper(const DeleteProfileObjectTypeRequest& request, const DeleteProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfileObjectType(request), context);
}

GetDomainOutcome ProfileClient::GetDomain(const GetDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainName, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcomeCallable ProfileClient::GetDomainCallable(const GetDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainAsyncHelper( request, handler, context ); } );
}

void ProfileClient::GetDomainAsyncHelper(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomain(request), context);
}

GetIntegrationOutcome ProfileClient::GetIntegration(const GetIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: DomainName, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationOutcomeCallable ProfileClient::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationAsyncHelper( request, handler, context ); } );
}

void ProfileClient::GetIntegrationAsyncHelper(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegration(request), context);
}

GetProfileObjectTypeOutcome ProfileClient::GetProfileObjectType(const GetProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: DomainName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectType", "Required field: ObjectTypeName, is not set");
    return GetProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/object-types/";
  ss << request.GetObjectTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeOutcomeCallable ProfileClient::GetProfileObjectTypeCallable(const GetProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::GetProfileObjectTypeAsync(const GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileObjectTypeAsyncHelper( request, handler, context ); } );
}

void ProfileClient::GetProfileObjectTypeAsyncHelper(const GetProfileObjectTypeRequest& request, const GetProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfileObjectType(request), context);
}

GetProfileObjectTypeTemplateOutcome ProfileClient::GetProfileObjectTypeTemplate(const GetProfileObjectTypeTemplateRequest& request) const
{
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileObjectTypeTemplate", "Required field: TemplateId, is not set");
    return GetProfileObjectTypeTemplateOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/templates/";
  ss << request.GetTemplateId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetProfileObjectTypeTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileObjectTypeTemplateOutcomeCallable ProfileClient::GetProfileObjectTypeTemplateCallable(const GetProfileObjectTypeTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileObjectTypeTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfileObjectTypeTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::GetProfileObjectTypeTemplateAsync(const GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileObjectTypeTemplateAsyncHelper( request, handler, context ); } );
}

void ProfileClient::GetProfileObjectTypeTemplateAsyncHelper(const GetProfileObjectTypeTemplateRequest& request, const GetProfileObjectTypeTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfileObjectTypeTemplate(request), context);
}

ListAccountIntegrationsOutcome ProfileClient::ListAccountIntegrations(const ListAccountIntegrationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountIntegrationsOutcomeCallable ProfileClient::ListAccountIntegrationsCallable(const ListAccountIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListAccountIntegrationsAsync(const ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountIntegrationsAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListAccountIntegrationsAsyncHelper(const ListAccountIntegrationsRequest& request, const ListAccountIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountIntegrations(request), context);
}

ListDomainsOutcome ProfileClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable ProfileClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListIntegrationsOutcome ProfileClient::ListIntegrations(const ListIntegrationsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIntegrations", "Required field: DomainName, is not set");
    return ListIntegrationsOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIntegrationsOutcomeCallable ProfileClient::ListIntegrationsCallable(const ListIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListIntegrationsAsync(const ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIntegrationsAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListIntegrationsAsyncHelper(const ListIntegrationsRequest& request, const ListIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIntegrations(request), context);
}

ListProfileObjectTypeTemplatesOutcome ProfileClient::ListProfileObjectTypeTemplates(const ListProfileObjectTypeTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/templates";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProfileObjectTypeTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypeTemplatesOutcomeCallable ProfileClient::ListProfileObjectTypeTemplatesCallable(const ListProfileObjectTypeTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypeTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypeTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListProfileObjectTypeTemplatesAsync(const ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfileObjectTypeTemplatesAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListProfileObjectTypeTemplatesAsyncHelper(const ListProfileObjectTypeTemplatesRequest& request, const ListProfileObjectTypeTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfileObjectTypeTemplates(request), context);
}

ListProfileObjectTypesOutcome ProfileClient::ListProfileObjectTypes(const ListProfileObjectTypesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjectTypes", "Required field: DomainName, is not set");
    return ListProfileObjectTypesOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/object-types";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProfileObjectTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectTypesOutcomeCallable ProfileClient::ListProfileObjectTypesCallable(const ListProfileObjectTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjectTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListProfileObjectTypesAsync(const ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfileObjectTypesAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListProfileObjectTypesAsyncHelper(const ListProfileObjectTypesRequest& request, const ListProfileObjectTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfileObjectTypes(request), context);
}

ListProfileObjectsOutcome ProfileClient::ListProfileObjects(const ListProfileObjectsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileObjects", "Required field: DomainName, is not set");
    return ListProfileObjectsOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/objects";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProfileObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProfileObjectsOutcomeCallable ProfileClient::ListProfileObjectsCallable(const ListProfileObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListProfileObjectsAsync(const ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfileObjectsAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListProfileObjectsAsyncHelper(const ListProfileObjectsRequest& request, const ListProfileObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfileObjects(request), context);
}

ListTagsForResourceOutcome ProfileClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ProfileClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ProfileClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutIntegrationOutcome ProfileClient::PutIntegration(const PutIntegrationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: DomainName, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntegrationOutcomeCallable ProfileClient::PutIntegrationCallable(const PutIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::PutIntegrationAsync(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutIntegrationAsyncHelper( request, handler, context ); } );
}

void ProfileClient::PutIntegrationAsyncHelper(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutIntegration(request), context);
}

PutProfileObjectOutcome ProfileClient::PutProfileObject(const PutProfileObjectRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObject", "Required field: DomainName, is not set");
    return PutProfileObjectOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/objects";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutProfileObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectOutcomeCallable ProfileClient::PutProfileObjectCallable(const PutProfileObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::PutProfileObjectAsync(const PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutProfileObjectAsyncHelper( request, handler, context ); } );
}

void ProfileClient::PutProfileObjectAsyncHelper(const PutProfileObjectRequest& request, const PutProfileObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutProfileObject(request), context);
}

PutProfileObjectTypeOutcome ProfileClient::PutProfileObjectType(const PutProfileObjectTypeRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: DomainName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.ObjectTypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProfileObjectType", "Required field: ObjectTypeName, is not set");
    return PutProfileObjectTypeOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectTypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/object-types/";
  ss << request.GetObjectTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  return PutProfileObjectTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProfileObjectTypeOutcomeCallable ProfileClient::PutProfileObjectTypeCallable(const PutProfileObjectTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProfileObjectTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProfileObjectType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::PutProfileObjectTypeAsync(const PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutProfileObjectTypeAsyncHelper( request, handler, context ); } );
}

void ProfileClient::PutProfileObjectTypeAsyncHelper(const PutProfileObjectTypeRequest& request, const PutProfileObjectTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutProfileObjectType(request), context);
}

SearchProfilesOutcome ProfileClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchProfiles", "Required field: DomainName, is not set");
    return SearchProfilesOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles/search";
  uri.SetPath(uri.GetPath() + ss.str());
  return SearchProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchProfilesOutcomeCallable ProfileClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProfilesAsyncHelper( request, handler, context ); } );
}

void ProfileClient::SearchProfilesAsyncHelper(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProfiles(request), context);
}

TagResourceOutcome ProfileClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ProfileClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ProfileClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ProfileClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ProfileClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ProfileClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDomainOutcome ProfileClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: DomainName, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable ProfileClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainAsyncHelper( request, handler, context ); } );
}

void ProfileClient::UpdateDomainAsyncHelper(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomain(request), context);
}

UpdateProfileOutcome ProfileClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: DomainName, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<ProfileErrors>(ProfileErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domains/";
  ss << request.GetDomainName();
  ss << "/profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable ProfileClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ProfileClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfileAsyncHelper( request, handler, context ); } );
}

void ProfileClient::UpdateProfileAsyncHelper(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfile(request), context);
}

