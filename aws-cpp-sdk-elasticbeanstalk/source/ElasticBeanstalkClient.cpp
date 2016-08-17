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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpoint.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrorMarshaller.h>
#include <aws/elasticbeanstalk/model/AbortEnvironmentUpdateRequest.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionRequest.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/DeleteConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/DeleteEnvironmentConfigurationRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthRequest.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksRequest.h>
#include <aws/elasticbeanstalk/model/RebuildEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/RequestEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/RestartAppServerRequest.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/SwapEnvironmentCNAMEsRequest.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticBeanstalk;
using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticbeanstalk";
static const char* ALLOCATION_TAG = "ElasticBeanstalkClient";


ElasticBeanstalkClient::ElasticBeanstalkClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::~ElasticBeanstalkClient()
{
}

void ElasticBeanstalkClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ElasticBeanstalkEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AbortEnvironmentUpdateOutcome ElasticBeanstalkClient::AbortEnvironmentUpdate(const AbortEnvironmentUpdateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AbortEnvironmentUpdateOutcome(NoResult());
  }
  else
  {
    return AbortEnvironmentUpdateOutcome(outcome.GetError());
  }
}

AbortEnvironmentUpdateOutcomeCallable ElasticBeanstalkClient::AbortEnvironmentUpdateCallable(const AbortEnvironmentUpdateRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->AbortEnvironmentUpdate( request ); } );
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsync(const AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AbortEnvironmentUpdateAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsyncHelper(const AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AbortEnvironmentUpdate(request), context);
}

ApplyEnvironmentManagedActionOutcome ElasticBeanstalkClient::ApplyEnvironmentManagedAction(const ApplyEnvironmentManagedActionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ApplyEnvironmentManagedActionOutcome(ApplyEnvironmentManagedActionResult(outcome.GetResult()));
  }
  else
  {
    return ApplyEnvironmentManagedActionOutcome(outcome.GetError());
  }
}

ApplyEnvironmentManagedActionOutcomeCallable ElasticBeanstalkClient::ApplyEnvironmentManagedActionCallable(const ApplyEnvironmentManagedActionRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ApplyEnvironmentManagedAction( request ); } );
}

void ElasticBeanstalkClient::ApplyEnvironmentManagedActionAsync(const ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplyEnvironmentManagedActionAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::ApplyEnvironmentManagedActionAsyncHelper(const ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyEnvironmentManagedAction(request), context);
}

CheckDNSAvailabilityOutcome ElasticBeanstalkClient::CheckDNSAvailability(const CheckDNSAvailabilityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CheckDNSAvailabilityOutcome(CheckDNSAvailabilityResult(outcome.GetResult()));
  }
  else
  {
    return CheckDNSAvailabilityOutcome(outcome.GetError());
  }
}

CheckDNSAvailabilityOutcomeCallable ElasticBeanstalkClient::CheckDNSAvailabilityCallable(const CheckDNSAvailabilityRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CheckDNSAvailability( request ); } );
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsync(const CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CheckDNSAvailabilityAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsyncHelper(const CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CheckDNSAvailability(request), context);
}

ComposeEnvironmentsOutcome ElasticBeanstalkClient::ComposeEnvironments(const ComposeEnvironmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ComposeEnvironmentsOutcome(ComposeEnvironmentsResult(outcome.GetResult()));
  }
  else
  {
    return ComposeEnvironmentsOutcome(outcome.GetError());
  }
}

ComposeEnvironmentsOutcomeCallable ElasticBeanstalkClient::ComposeEnvironmentsCallable(const ComposeEnvironmentsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ComposeEnvironments( request ); } );
}

void ElasticBeanstalkClient::ComposeEnvironmentsAsync(const ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ComposeEnvironmentsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::ComposeEnvironmentsAsyncHelper(const ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ComposeEnvironments(request), context);
}

CreateApplicationOutcome ElasticBeanstalkClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable ElasticBeanstalkClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateApplication( request ); } );
}

void ElasticBeanstalkClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateApplicationVersionOutcome ElasticBeanstalkClient::CreateApplicationVersion(const CreateApplicationVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateApplicationVersionOutcome(CreateApplicationVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationVersionOutcome(outcome.GetError());
  }
}

CreateApplicationVersionOutcomeCallable ElasticBeanstalkClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateApplicationVersion( request ); } );
}

void ElasticBeanstalkClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationVersionAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CreateApplicationVersionAsyncHelper(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplicationVersion(request), context);
}

CreateConfigurationTemplateOutcome ElasticBeanstalkClient::CreateConfigurationTemplate(const CreateConfigurationTemplateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateConfigurationTemplateOutcome(CreateConfigurationTemplateResult(outcome.GetResult()));
  }
  else
  {
    return CreateConfigurationTemplateOutcome(outcome.GetError());
  }
}

CreateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::CreateConfigurationTemplateCallable(const CreateConfigurationTemplateRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateConfigurationTemplate( request ); } );
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsync(const CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsyncHelper(const CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationTemplate(request), context);
}

CreateEnvironmentOutcome ElasticBeanstalkClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateEnvironmentOutcome(CreateEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return CreateEnvironmentOutcome(outcome.GetError());
  }
}

CreateEnvironmentOutcomeCallable ElasticBeanstalkClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateEnvironment( request ); } );
}

void ElasticBeanstalkClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEnvironmentAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CreateEnvironmentAsyncHelper(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEnvironment(request), context);
}

CreateStorageLocationOutcome ElasticBeanstalkClient::CreateStorageLocation(const CreateStorageLocationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStorageLocationOutcome(CreateStorageLocationResult(outcome.GetResult()));
  }
  else
  {
    return CreateStorageLocationOutcome(outcome.GetError());
  }
}

CreateStorageLocationOutcomeCallable ElasticBeanstalkClient::CreateStorageLocationCallable(const CreateStorageLocationRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateStorageLocation( request ); } );
}

void ElasticBeanstalkClient::CreateStorageLocationAsync(const CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStorageLocationAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::CreateStorageLocationAsyncHelper(const CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStorageLocation(request), context);
}

DeleteApplicationOutcome ElasticBeanstalkClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(NoResult());
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable ElasticBeanstalkClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteApplication( request ); } );
}

void ElasticBeanstalkClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteApplicationVersionOutcome ElasticBeanstalkClient::DeleteApplicationVersion(const DeleteApplicationVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationVersionOutcome(NoResult());
  }
  else
  {
    return DeleteApplicationVersionOutcome(outcome.GetError());
  }
}

DeleteApplicationVersionOutcomeCallable ElasticBeanstalkClient::DeleteApplicationVersionCallable(const DeleteApplicationVersionRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteApplicationVersion( request ); } );
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsync(const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationVersionAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsyncHelper(const DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplicationVersion(request), context);
}

DeleteConfigurationTemplateOutcome ElasticBeanstalkClient::DeleteConfigurationTemplate(const DeleteConfigurationTemplateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConfigurationTemplateOutcome(NoResult());
  }
  else
  {
    return DeleteConfigurationTemplateOutcome(outcome.GetError());
  }
}

DeleteConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::DeleteConfigurationTemplateCallable(const DeleteConfigurationTemplateRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteConfigurationTemplate( request ); } );
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsync(const DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsyncHelper(const DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationTemplate(request), context);
}

DeleteEnvironmentConfigurationOutcome ElasticBeanstalkClient::DeleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEnvironmentConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteEnvironmentConfigurationOutcome(outcome.GetError());
  }
}

DeleteEnvironmentConfigurationOutcomeCallable ElasticBeanstalkClient::DeleteEnvironmentConfigurationCallable(const DeleteEnvironmentConfigurationRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteEnvironmentConfiguration( request ); } );
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsync(const DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEnvironmentConfigurationAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsyncHelper(const DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEnvironmentConfiguration(request), context);
}

DescribeApplicationVersionsOutcome ElasticBeanstalkClient::DescribeApplicationVersions(const DescribeApplicationVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeApplicationVersionsOutcome(DescribeApplicationVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeApplicationVersionsOutcome(outcome.GetError());
  }
}

DescribeApplicationVersionsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationVersionsCallable(const DescribeApplicationVersionsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeApplicationVersions( request ); } );
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsync(const DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationVersionsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsyncHelper(const DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplicationVersions(request), context);
}

DescribeApplicationsOutcome ElasticBeanstalkClient::DescribeApplications(const DescribeApplicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeApplicationsOutcome(DescribeApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeApplicationsOutcome(outcome.GetError());
  }
}

DescribeApplicationsOutcomeCallable ElasticBeanstalkClient::DescribeApplicationsCallable(const DescribeApplicationsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeApplications( request ); } );
}

void ElasticBeanstalkClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeApplicationsAsyncHelper(const DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplications(request), context);
}

DescribeConfigurationOptionsOutcome ElasticBeanstalkClient::DescribeConfigurationOptions(const DescribeConfigurationOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationOptionsOutcome(DescribeConfigurationOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationOptionsOutcome(outcome.GetError());
  }
}

DescribeConfigurationOptionsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationOptionsCallable(const DescribeConfigurationOptionsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeConfigurationOptions( request ); } );
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsync(const DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationOptionsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsyncHelper(const DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationOptions(request), context);
}

DescribeConfigurationSettingsOutcome ElasticBeanstalkClient::DescribeConfigurationSettings(const DescribeConfigurationSettingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConfigurationSettingsOutcome(DescribeConfigurationSettingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConfigurationSettingsOutcome(outcome.GetError());
  }
}

DescribeConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::DescribeConfigurationSettingsCallable(const DescribeConfigurationSettingsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeConfigurationSettings( request ); } );
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsync(const DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationSettingsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsyncHelper(const DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationSettings(request), context);
}

DescribeEnvironmentHealthOutcome ElasticBeanstalkClient::DescribeEnvironmentHealth(const DescribeEnvironmentHealthRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEnvironmentHealthOutcome(DescribeEnvironmentHealthResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEnvironmentHealthOutcome(outcome.GetError());
  }
}

DescribeEnvironmentHealthOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentHealthCallable(const DescribeEnvironmentHealthRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEnvironmentHealth( request ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentHealthAsync(const DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentHealthAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentHealthAsyncHelper(const DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentHealth(request), context);
}

DescribeEnvironmentManagedActionHistoryOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEnvironmentManagedActionHistoryOutcome(DescribeEnvironmentManagedActionHistoryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEnvironmentManagedActionHistoryOutcome(outcome.GetError());
  }
}

DescribeEnvironmentManagedActionHistoryOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryCallable(const DescribeEnvironmentManagedActionHistoryRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEnvironmentManagedActionHistory( request ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryAsync(const DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentManagedActionHistoryAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistoryAsyncHelper(const DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentManagedActionHistory(request), context);
}

DescribeEnvironmentManagedActionsOutcome ElasticBeanstalkClient::DescribeEnvironmentManagedActions(const DescribeEnvironmentManagedActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEnvironmentManagedActionsOutcome(DescribeEnvironmentManagedActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEnvironmentManagedActionsOutcome(outcome.GetError());
  }
}

DescribeEnvironmentManagedActionsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentManagedActionsCallable(const DescribeEnvironmentManagedActionsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEnvironmentManagedActions( request ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionsAsync(const DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentManagedActionsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentManagedActionsAsyncHelper(const DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentManagedActions(request), context);
}

DescribeEnvironmentResourcesOutcome ElasticBeanstalkClient::DescribeEnvironmentResources(const DescribeEnvironmentResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEnvironmentResourcesOutcome(DescribeEnvironmentResourcesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEnvironmentResourcesOutcome(outcome.GetError());
  }
}

DescribeEnvironmentResourcesOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentResourcesCallable(const DescribeEnvironmentResourcesRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEnvironmentResources( request ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsync(const DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentResourcesAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsyncHelper(const DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironmentResources(request), context);
}

DescribeEnvironmentsOutcome ElasticBeanstalkClient::DescribeEnvironments(const DescribeEnvironmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEnvironmentsOutcome(DescribeEnvironmentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEnvironmentsOutcome(outcome.GetError());
  }
}

DescribeEnvironmentsOutcomeCallable ElasticBeanstalkClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEnvironments( request ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEnvironmentsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsyncHelper(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEnvironments(request), context);
}

DescribeEventsOutcome ElasticBeanstalkClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable ElasticBeanstalkClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeEvents( request ); } );
}

void ElasticBeanstalkClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

DescribeInstancesHealthOutcome ElasticBeanstalkClient::DescribeInstancesHealth(const DescribeInstancesHealthRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstancesHealthOutcome(DescribeInstancesHealthResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstancesHealthOutcome(outcome.GetError());
  }
}

DescribeInstancesHealthOutcomeCallable ElasticBeanstalkClient::DescribeInstancesHealthCallable(const DescribeInstancesHealthRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeInstancesHealth( request ); } );
}

void ElasticBeanstalkClient::DescribeInstancesHealthAsync(const DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstancesHealthAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::DescribeInstancesHealthAsyncHelper(const DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstancesHealth(request), context);
}

ListAvailableSolutionStacksOutcome ElasticBeanstalkClient::ListAvailableSolutionStacks(const ListAvailableSolutionStacksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAvailableSolutionStacksOutcome(ListAvailableSolutionStacksResult(outcome.GetResult()));
  }
  else
  {
    return ListAvailableSolutionStacksOutcome(outcome.GetError());
  }
}

ListAvailableSolutionStacksOutcomeCallable ElasticBeanstalkClient::ListAvailableSolutionStacksCallable(const ListAvailableSolutionStacksRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListAvailableSolutionStacks( request ); } );
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsync(const ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAvailableSolutionStacksAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsyncHelper(const ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAvailableSolutionStacks(request), context);
}

RebuildEnvironmentOutcome ElasticBeanstalkClient::RebuildEnvironment(const RebuildEnvironmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RebuildEnvironmentOutcome(NoResult());
  }
  else
  {
    return RebuildEnvironmentOutcome(outcome.GetError());
  }
}

RebuildEnvironmentOutcomeCallable ElasticBeanstalkClient::RebuildEnvironmentCallable(const RebuildEnvironmentRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->RebuildEnvironment( request ); } );
}

void ElasticBeanstalkClient::RebuildEnvironmentAsync(const RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebuildEnvironmentAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::RebuildEnvironmentAsyncHelper(const RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebuildEnvironment(request), context);
}

RequestEnvironmentInfoOutcome ElasticBeanstalkClient::RequestEnvironmentInfo(const RequestEnvironmentInfoRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RequestEnvironmentInfoOutcome(NoResult());
  }
  else
  {
    return RequestEnvironmentInfoOutcome(outcome.GetError());
  }
}

RequestEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RequestEnvironmentInfoCallable(const RequestEnvironmentInfoRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->RequestEnvironmentInfo( request ); } );
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsync(const RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestEnvironmentInfoAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsyncHelper(const RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestEnvironmentInfo(request), context);
}

RestartAppServerOutcome ElasticBeanstalkClient::RestartAppServer(const RestartAppServerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RestartAppServerOutcome(NoResult());
  }
  else
  {
    return RestartAppServerOutcome(outcome.GetError());
  }
}

RestartAppServerOutcomeCallable ElasticBeanstalkClient::RestartAppServerCallable(const RestartAppServerRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->RestartAppServer( request ); } );
}

void ElasticBeanstalkClient::RestartAppServerAsync(const RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestartAppServerAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::RestartAppServerAsyncHelper(const RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestartAppServer(request), context);
}

RetrieveEnvironmentInfoOutcome ElasticBeanstalkClient::RetrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RetrieveEnvironmentInfoOutcome(RetrieveEnvironmentInfoResult(outcome.GetResult()));
  }
  else
  {
    return RetrieveEnvironmentInfoOutcome(outcome.GetError());
  }
}

RetrieveEnvironmentInfoOutcomeCallable ElasticBeanstalkClient::RetrieveEnvironmentInfoCallable(const RetrieveEnvironmentInfoRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->RetrieveEnvironmentInfo( request ); } );
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsync(const RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RetrieveEnvironmentInfoAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsyncHelper(const RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveEnvironmentInfo(request), context);
}

SwapEnvironmentCNAMEsOutcome ElasticBeanstalkClient::SwapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SwapEnvironmentCNAMEsOutcome(NoResult());
  }
  else
  {
    return SwapEnvironmentCNAMEsOutcome(outcome.GetError());
  }
}

SwapEnvironmentCNAMEsOutcomeCallable ElasticBeanstalkClient::SwapEnvironmentCNAMEsCallable(const SwapEnvironmentCNAMEsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->SwapEnvironmentCNAMEs( request ); } );
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsync(const SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SwapEnvironmentCNAMEsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsyncHelper(const SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SwapEnvironmentCNAMEs(request), context);
}

TerminateEnvironmentOutcome ElasticBeanstalkClient::TerminateEnvironment(const TerminateEnvironmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateEnvironmentOutcome(TerminateEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return TerminateEnvironmentOutcome(outcome.GetError());
  }
}

TerminateEnvironmentOutcomeCallable ElasticBeanstalkClient::TerminateEnvironmentCallable(const TerminateEnvironmentRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->TerminateEnvironment( request ); } );
}

void ElasticBeanstalkClient::TerminateEnvironmentAsync(const TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateEnvironmentAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::TerminateEnvironmentAsyncHelper(const TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateEnvironment(request), context);
}

UpdateApplicationOutcome ElasticBeanstalkClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationOutcome(UpdateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationOutcome(outcome.GetError());
  }
}

UpdateApplicationOutcomeCallable ElasticBeanstalkClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateApplication( request ); } );
}

void ElasticBeanstalkClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

UpdateApplicationVersionOutcome ElasticBeanstalkClient::UpdateApplicationVersion(const UpdateApplicationVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationVersionOutcome(UpdateApplicationVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationVersionOutcome(outcome.GetError());
  }
}

UpdateApplicationVersionOutcomeCallable ElasticBeanstalkClient::UpdateApplicationVersionCallable(const UpdateApplicationVersionRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateApplicationVersion( request ); } );
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsync(const UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationVersionAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsyncHelper(const UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplicationVersion(request), context);
}

UpdateConfigurationTemplateOutcome ElasticBeanstalkClient::UpdateConfigurationTemplate(const UpdateConfigurationTemplateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateConfigurationTemplateOutcome(UpdateConfigurationTemplateResult(outcome.GetResult()));
  }
  else
  {
    return UpdateConfigurationTemplateOutcome(outcome.GetError());
  }
}

UpdateConfigurationTemplateOutcomeCallable ElasticBeanstalkClient::UpdateConfigurationTemplateCallable(const UpdateConfigurationTemplateRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateConfigurationTemplate( request ); } );
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsync(const UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConfigurationTemplateAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsyncHelper(const UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConfigurationTemplate(request), context);
}

UpdateEnvironmentOutcome ElasticBeanstalkClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateEnvironmentOutcome(UpdateEnvironmentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEnvironmentOutcome(outcome.GetError());
  }
}

UpdateEnvironmentOutcomeCallable ElasticBeanstalkClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateEnvironment( request ); } );
}

void ElasticBeanstalkClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEnvironmentAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::UpdateEnvironmentAsyncHelper(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEnvironment(request), context);
}

ValidateConfigurationSettingsOutcome ElasticBeanstalkClient::ValidateConfigurationSettings(const ValidateConfigurationSettingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ValidateConfigurationSettingsOutcome(ValidateConfigurationSettingsResult(outcome.GetResult()));
  }
  else
  {
    return ValidateConfigurationSettingsOutcome(outcome.GetError());
  }
}

ValidateConfigurationSettingsOutcomeCallable ElasticBeanstalkClient::ValidateConfigurationSettingsCallable(const ValidateConfigurationSettingsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ValidateConfigurationSettings( request ); } );
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsync(const ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ValidateConfigurationSettingsAsyncHelper( request, handler, context ); } );
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsyncHelper(const ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidateConfigurationSettings(request), context);
}

