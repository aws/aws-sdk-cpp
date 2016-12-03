/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/VitalServicesClient.h>
#include <aws/vitalservices/VitalServicesEndpoint.h>
#include <aws/vitalservices/VitalServicesErrorMarshaller.h>
#include <aws/vitalservices/model/getAppointmentsWithUserRequest.h>
#include <aws/vitalservices/model/getLoggedInUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VitalServices;
using namespace Aws::VitalServices::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "execute-api";
static const char* ALLOCATION_TAG = "VitalServicesClient";


VitalServicesClient::VitalServicesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::VitalServicesClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::VitalServicesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<VitalServicesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VitalServicesClient::~VitalServicesClient()
{
}

void VitalServicesClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << VitalServicesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

getAppointmentsWithUserOutcome VitalServicesClient::getAppointmentsWithUser(const getAppointmentsWithUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-appointments-with-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getAppointmentsWithUserOutcome(getAppointmentsWithUserResult(outcome.GetResult()));
  }
  else
  {
    return getAppointmentsWithUserOutcome(outcome.GetError());
  }
}

getAppointmentsWithUserOutcomeCallable VitalServicesClient::getAppointmentsWithUserCallable(const getAppointmentsWithUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getAppointmentsWithUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getAppointmentsWithUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getAppointmentsWithUserAsync(const getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getAppointmentsWithUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getAppointmentsWithUserAsyncHelper(const getAppointmentsWithUserRequest& request, const getAppointmentsWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getAppointmentsWithUser(request), context);
}

getLoggedInUserOutcome VitalServicesClient::getLoggedInUser(const getLoggedInUserRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/prod/get-logged-in-user";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return getLoggedInUserOutcome(getLoggedInUserResult(outcome.GetResult()));
  }
  else
  {
    return getLoggedInUserOutcome(outcome.GetError());
  }
}

getLoggedInUserOutcomeCallable VitalServicesClient::getLoggedInUserCallable(const getLoggedInUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< getLoggedInUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->getLoggedInUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VitalServicesClient::getLoggedInUserAsync(const getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->getLoggedInUserAsyncHelper( request, handler, context ); } );
}

void VitalServicesClient::getLoggedInUserAsyncHelper(const getLoggedInUserRequest& request, const getLoggedInUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, getLoggedInUser(request), context);
}

