/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
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
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticBeanstalkErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticBeanstalkClient::ElasticBeanstalkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
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
    ss << ElasticBeanstalkEndpoint::ForRegion(config.region);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::AbortEnvironmentUpdate, this, request);
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsync(const AbortEnvironmentUpdateRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::AbortEnvironmentUpdateAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::AbortEnvironmentUpdateAsyncHelper(const AbortEnvironmentUpdateRequest& request, const AsyncCallerContext* context) const
{
  m_onAbortEnvironmentUpdateOutcomeReceived(this, request, AbortEnvironmentUpdate(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CheckDNSAvailability, this, request);
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsync(const CheckDNSAvailabilityRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CheckDNSAvailabilityAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CheckDNSAvailabilityAsyncHelper(const CheckDNSAvailabilityRequest& request, const AsyncCallerContext* context) const
{
  m_onCheckDNSAvailabilityOutcomeReceived(this, request, CheckDNSAvailability(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CreateApplication, this, request);
}

void ElasticBeanstalkClient::CreateApplicationAsync(const CreateApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CreateApplicationAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateApplicationOutcomeReceived(this, request, CreateApplication(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CreateApplicationVersion, this, request);
}

void ElasticBeanstalkClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CreateApplicationVersionAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CreateApplicationVersionAsyncHelper(const CreateApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateApplicationVersionOutcomeReceived(this, request, CreateApplicationVersion(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CreateConfigurationTemplate, this, request);
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsync(const CreateConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CreateConfigurationTemplateAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CreateConfigurationTemplateAsyncHelper(const CreateConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateConfigurationTemplateOutcomeReceived(this, request, CreateConfigurationTemplate(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CreateEnvironment, this, request);
}

void ElasticBeanstalkClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CreateEnvironmentAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CreateEnvironmentAsyncHelper(const CreateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateEnvironmentOutcomeReceived(this, request, CreateEnvironment(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::CreateStorageLocation, this, request);
}

void ElasticBeanstalkClient::CreateStorageLocationAsync(const CreateStorageLocationRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::CreateStorageLocationAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::CreateStorageLocationAsyncHelper(const CreateStorageLocationRequest& request, const AsyncCallerContext* context) const
{
  m_onCreateStorageLocationOutcomeReceived(this, request, CreateStorageLocation(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DeleteApplication, this, request);
}

void ElasticBeanstalkClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DeleteApplicationAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteApplicationOutcomeReceived(this, request, DeleteApplication(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DeleteApplicationVersion, this, request);
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsync(const DeleteApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DeleteApplicationVersionAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DeleteApplicationVersionAsyncHelper(const DeleteApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteApplicationVersionOutcomeReceived(this, request, DeleteApplicationVersion(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DeleteConfigurationTemplate, this, request);
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsync(const DeleteConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DeleteConfigurationTemplateAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DeleteConfigurationTemplateAsyncHelper(const DeleteConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteConfigurationTemplateOutcomeReceived(this, request, DeleteConfigurationTemplate(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DeleteEnvironmentConfiguration, this, request);
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsync(const DeleteEnvironmentConfigurationRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DeleteEnvironmentConfigurationAsyncHelper(const DeleteEnvironmentConfigurationRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteEnvironmentConfigurationOutcomeReceived(this, request, DeleteEnvironmentConfiguration(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeApplicationVersions, this, request);
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsync(const DescribeApplicationVersionsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeApplicationVersionsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeApplicationVersionsAsyncHelper(const DescribeApplicationVersionsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeApplicationVersionsOutcomeReceived(this, request, DescribeApplicationVersions(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeApplications, this, request);
}

void ElasticBeanstalkClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeApplicationsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeApplicationsAsyncHelper(const DescribeApplicationsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeApplicationsOutcomeReceived(this, request, DescribeApplications(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeConfigurationOptions, this, request);
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsync(const DescribeConfigurationOptionsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeConfigurationOptionsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeConfigurationOptionsAsyncHelper(const DescribeConfigurationOptionsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeConfigurationOptionsOutcomeReceived(this, request, DescribeConfigurationOptions(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeConfigurationSettings, this, request);
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsync(const DescribeConfigurationSettingsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeConfigurationSettingsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeConfigurationSettingsAsyncHelper(const DescribeConfigurationSettingsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeConfigurationSettingsOutcomeReceived(this, request, DescribeConfigurationSettings(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeEnvironmentResources, this, request);
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsync(const DescribeEnvironmentResourcesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeEnvironmentResourcesAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeEnvironmentResourcesAsyncHelper(const DescribeEnvironmentResourcesRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeEnvironmentResourcesOutcomeReceived(this, request, DescribeEnvironmentResources(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeEnvironments, this, request);
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeEnvironmentsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeEnvironmentsAsyncHelper(const DescribeEnvironmentsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeEnvironmentsOutcomeReceived(this, request, DescribeEnvironments(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::DescribeEvents, this, request);
}

void ElasticBeanstalkClient::DescribeEventsAsync(const DescribeEventsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::DescribeEventsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const AsyncCallerContext* context) const
{
  m_onDescribeEventsOutcomeReceived(this, request, DescribeEvents(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::ListAvailableSolutionStacks, this, request);
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsync(const ListAvailableSolutionStacksRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::ListAvailableSolutionStacksAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::ListAvailableSolutionStacksAsyncHelper(const ListAvailableSolutionStacksRequest& request, const AsyncCallerContext* context) const
{
  m_onListAvailableSolutionStacksOutcomeReceived(this, request, ListAvailableSolutionStacks(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::RebuildEnvironment, this, request);
}

void ElasticBeanstalkClient::RebuildEnvironmentAsync(const RebuildEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::RebuildEnvironmentAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::RebuildEnvironmentAsyncHelper(const RebuildEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_onRebuildEnvironmentOutcomeReceived(this, request, RebuildEnvironment(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::RequestEnvironmentInfo, this, request);
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsync(const RequestEnvironmentInfoRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::RequestEnvironmentInfoAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::RequestEnvironmentInfoAsyncHelper(const RequestEnvironmentInfoRequest& request, const AsyncCallerContext* context) const
{
  m_onRequestEnvironmentInfoOutcomeReceived(this, request, RequestEnvironmentInfo(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::RestartAppServer, this, request);
}

void ElasticBeanstalkClient::RestartAppServerAsync(const RestartAppServerRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::RestartAppServerAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::RestartAppServerAsyncHelper(const RestartAppServerRequest& request, const AsyncCallerContext* context) const
{
  m_onRestartAppServerOutcomeReceived(this, request, RestartAppServer(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::RetrieveEnvironmentInfo, this, request);
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsync(const RetrieveEnvironmentInfoRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::RetrieveEnvironmentInfoAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::RetrieveEnvironmentInfoAsyncHelper(const RetrieveEnvironmentInfoRequest& request, const AsyncCallerContext* context) const
{
  m_onRetrieveEnvironmentInfoOutcomeReceived(this, request, RetrieveEnvironmentInfo(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::SwapEnvironmentCNAMEs, this, request);
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsync(const SwapEnvironmentCNAMEsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::SwapEnvironmentCNAMEsAsyncHelper(const SwapEnvironmentCNAMEsRequest& request, const AsyncCallerContext* context) const
{
  m_onSwapEnvironmentCNAMEsOutcomeReceived(this, request, SwapEnvironmentCNAMEs(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::TerminateEnvironment, this, request);
}

void ElasticBeanstalkClient::TerminateEnvironmentAsync(const TerminateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::TerminateEnvironmentAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::TerminateEnvironmentAsyncHelper(const TerminateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_onTerminateEnvironmentOutcomeReceived(this, request, TerminateEnvironment(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::UpdateApplication, this, request);
}

void ElasticBeanstalkClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::UpdateApplicationAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const AsyncCallerContext* context) const
{
  m_onUpdateApplicationOutcomeReceived(this, request, UpdateApplication(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::UpdateApplicationVersion, this, request);
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsync(const UpdateApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::UpdateApplicationVersionAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::UpdateApplicationVersionAsyncHelper(const UpdateApplicationVersionRequest& request, const AsyncCallerContext* context) const
{
  m_onUpdateApplicationVersionOutcomeReceived(this, request, UpdateApplicationVersion(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::UpdateConfigurationTemplate, this, request);
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsync(const UpdateConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::UpdateConfigurationTemplateAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::UpdateConfigurationTemplateAsyncHelper(const UpdateConfigurationTemplateRequest& request, const AsyncCallerContext* context) const
{
  m_onUpdateConfigurationTemplateOutcomeReceived(this, request, UpdateConfigurationTemplate(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::UpdateEnvironment, this, request);
}

void ElasticBeanstalkClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::UpdateEnvironmentAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::UpdateEnvironmentAsyncHelper(const UpdateEnvironmentRequest& request, const AsyncCallerContext* context) const
{
  m_onUpdateEnvironmentOutcomeReceived(this, request, UpdateEnvironment(request), context);
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
  return std::async(std::launch::async, &ElasticBeanstalkClient::ValidateConfigurationSettings, this, request);
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsync(const ValidateConfigurationSettingsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&ElasticBeanstalkClient::ValidateConfigurationSettingsAsyncHelper, this, request, context);
}

void ElasticBeanstalkClient::ValidateConfigurationSettingsAsyncHelper(const ValidateConfigurationSettingsRequest& request, const AsyncCallerContext* context) const
{
  m_onValidateConfigurationSettingsOutcomeReceived(this, request, ValidateConfigurationSettings(request), context);
}

