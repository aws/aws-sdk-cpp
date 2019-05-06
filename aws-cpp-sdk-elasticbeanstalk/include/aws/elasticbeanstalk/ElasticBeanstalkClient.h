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

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionResult.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityResult.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/CreateApplicationResult.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/CreatePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationResult.h>
#include <aws/elasticbeanstalk/model/DeletePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/DescribeAccountAttributesResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEventsResult.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthResult.h>
#include <aws/elasticbeanstalk/model/DescribePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksResult.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsResult.h>
#include <aws/elasticbeanstalk/model/ListTagsForResourceResult.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoResult.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ElasticBeanstalk
{

namespace Model
{
        class AbortEnvironmentUpdateRequest;
        class ApplyEnvironmentManagedActionRequest;
        class CheckDNSAvailabilityRequest;
        class ComposeEnvironmentsRequest;
        class CreateApplicationRequest;
        class CreateApplicationVersionRequest;
        class CreateConfigurationTemplateRequest;
        class CreateEnvironmentRequest;
        class CreatePlatformVersionRequest;
        class CreateStorageLocationRequest;
        class DeleteApplicationRequest;
        class DeleteApplicationVersionRequest;
        class DeleteConfigurationTemplateRequest;
        class DeleteEnvironmentConfigurationRequest;
        class DeletePlatformVersionRequest;
        class DescribeAccountAttributesRequest;
        class DescribeApplicationVersionsRequest;
        class DescribeApplicationsRequest;
        class DescribeConfigurationOptionsRequest;
        class DescribeConfigurationSettingsRequest;
        class DescribeEnvironmentHealthRequest;
        class DescribeEnvironmentManagedActionHistoryRequest;
        class DescribeEnvironmentManagedActionsRequest;
        class DescribeEnvironmentResourcesRequest;
        class DescribeEnvironmentsRequest;
        class DescribeEventsRequest;
        class DescribeInstancesHealthRequest;
        class DescribePlatformVersionRequest;
        class ListAvailableSolutionStacksRequest;
        class ListPlatformVersionsRequest;
        class ListTagsForResourceRequest;
        class RebuildEnvironmentRequest;
        class RequestEnvironmentInfoRequest;
        class RestartAppServerRequest;
        class RetrieveEnvironmentInfoRequest;
        class SwapEnvironmentCNAMEsRequest;
        class TerminateEnvironmentRequest;
        class UpdateApplicationRequest;
        class UpdateApplicationResourceLifecycleRequest;
        class UpdateApplicationVersionRequest;
        class UpdateConfigurationTemplateRequest;
        class UpdateEnvironmentRequest;
        class UpdateTagsForResourceRequest;
        class ValidateConfigurationSettingsRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> AbortEnvironmentUpdateOutcome;
        typedef Aws::Utils::Outcome<ApplyEnvironmentManagedActionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ApplyEnvironmentManagedActionOutcome;
        typedef Aws::Utils::Outcome<CheckDNSAvailabilityResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CheckDNSAvailabilityOutcome;
        typedef Aws::Utils::Outcome<ComposeEnvironmentsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ComposeEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationVersionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreateApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationTemplateResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreateConfigurationTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateEnvironmentResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<CreatePlatformVersionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreatePlatformVersionOutcome;
        typedef Aws::Utils::Outcome<CreateStorageLocationResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> CreateStorageLocationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DeleteApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DeleteConfigurationTemplateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DeleteEnvironmentConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeletePlatformVersionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DeletePlatformVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationVersionsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeApplicationVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeApplicationsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationOptionsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeConfigurationOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationSettingsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeConfigurationSettingsOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentHealthResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentManagedActionHistoryResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentManagedActionHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentManagedActionsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentManagedActionsOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentResourcesResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentResourcesOutcome;
        typedef Aws::Utils::Outcome<DescribeEnvironmentsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesHealthResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribeInstancesHealthOutcome;
        typedef Aws::Utils::Outcome<DescribePlatformVersionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> DescribePlatformVersionOutcome;
        typedef Aws::Utils::Outcome<ListAvailableSolutionStacksResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ListAvailableSolutionStacksOutcome;
        typedef Aws::Utils::Outcome<ListPlatformVersionsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ListPlatformVersionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> RebuildEnvironmentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> RequestEnvironmentInfoOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> RestartAppServerOutcome;
        typedef Aws::Utils::Outcome<RetrieveEnvironmentInfoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> RetrieveEnvironmentInfoOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> SwapEnvironmentCNAMEsOutcome;
        typedef Aws::Utils::Outcome<TerminateEnvironmentResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> TerminateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResourceLifecycleResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateApplicationResourceLifecycleOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationVersionResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateApplicationVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationTemplateResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateConfigurationTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdateEnvironmentResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> UpdateTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ValidateConfigurationSettingsResult, Aws::Client::AWSError<ElasticBeanstalkErrors>> ValidateConfigurationSettingsOutcome;

        typedef std::future<AbortEnvironmentUpdateOutcome> AbortEnvironmentUpdateOutcomeCallable;
        typedef std::future<ApplyEnvironmentManagedActionOutcome> ApplyEnvironmentManagedActionOutcomeCallable;
        typedef std::future<CheckDNSAvailabilityOutcome> CheckDNSAvailabilityOutcomeCallable;
        typedef std::future<ComposeEnvironmentsOutcome> ComposeEnvironmentsOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateApplicationVersionOutcome> CreateApplicationVersionOutcomeCallable;
        typedef std::future<CreateConfigurationTemplateOutcome> CreateConfigurationTemplateOutcomeCallable;
        typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
        typedef std::future<CreatePlatformVersionOutcome> CreatePlatformVersionOutcomeCallable;
        typedef std::future<CreateStorageLocationOutcome> CreateStorageLocationOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteApplicationVersionOutcome> DeleteApplicationVersionOutcomeCallable;
        typedef std::future<DeleteConfigurationTemplateOutcome> DeleteConfigurationTemplateOutcomeCallable;
        typedef std::future<DeleteEnvironmentConfigurationOutcome> DeleteEnvironmentConfigurationOutcomeCallable;
        typedef std::future<DeletePlatformVersionOutcome> DeletePlatformVersionOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeApplicationVersionsOutcome> DescribeApplicationVersionsOutcomeCallable;
        typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
        typedef std::future<DescribeConfigurationOptionsOutcome> DescribeConfigurationOptionsOutcomeCallable;
        typedef std::future<DescribeConfigurationSettingsOutcome> DescribeConfigurationSettingsOutcomeCallable;
        typedef std::future<DescribeEnvironmentHealthOutcome> DescribeEnvironmentHealthOutcomeCallable;
        typedef std::future<DescribeEnvironmentManagedActionHistoryOutcome> DescribeEnvironmentManagedActionHistoryOutcomeCallable;
        typedef std::future<DescribeEnvironmentManagedActionsOutcome> DescribeEnvironmentManagedActionsOutcomeCallable;
        typedef std::future<DescribeEnvironmentResourcesOutcome> DescribeEnvironmentResourcesOutcomeCallable;
        typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeInstancesHealthOutcome> DescribeInstancesHealthOutcomeCallable;
        typedef std::future<DescribePlatformVersionOutcome> DescribePlatformVersionOutcomeCallable;
        typedef std::future<ListAvailableSolutionStacksOutcome> ListAvailableSolutionStacksOutcomeCallable;
        typedef std::future<ListPlatformVersionsOutcome> ListPlatformVersionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RebuildEnvironmentOutcome> RebuildEnvironmentOutcomeCallable;
        typedef std::future<RequestEnvironmentInfoOutcome> RequestEnvironmentInfoOutcomeCallable;
        typedef std::future<RestartAppServerOutcome> RestartAppServerOutcomeCallable;
        typedef std::future<RetrieveEnvironmentInfoOutcome> RetrieveEnvironmentInfoOutcomeCallable;
        typedef std::future<SwapEnvironmentCNAMEsOutcome> SwapEnvironmentCNAMEsOutcomeCallable;
        typedef std::future<TerminateEnvironmentOutcome> TerminateEnvironmentOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateApplicationResourceLifecycleOutcome> UpdateApplicationResourceLifecycleOutcomeCallable;
        typedef std::future<UpdateApplicationVersionOutcome> UpdateApplicationVersionOutcomeCallable;
        typedef std::future<UpdateConfigurationTemplateOutcome> UpdateConfigurationTemplateOutcomeCallable;
        typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
        typedef std::future<UpdateTagsForResourceOutcome> UpdateTagsForResourceOutcomeCallable;
        typedef std::future<ValidateConfigurationSettingsOutcome> ValidateConfigurationSettingsOutcomeCallable;
} // namespace Model

  class ElasticBeanstalkClient;

    typedef std::function<void(const ElasticBeanstalkClient*, const Model::AbortEnvironmentUpdateRequest&, const Model::AbortEnvironmentUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortEnvironmentUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ApplyEnvironmentManagedActionRequest&, const Model::ApplyEnvironmentManagedActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyEnvironmentManagedActionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CheckDNSAvailabilityRequest&, const Model::CheckDNSAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDNSAvailabilityResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ComposeEnvironmentsRequest&, const Model::ComposeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ComposeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreateApplicationVersionRequest&, const Model::CreateApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreateConfigurationTemplateRequest&, const Model::CreateConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreatePlatformVersionRequest&, const Model::CreatePlatformVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::CreateStorageLocationRequest&, const Model::CreateStorageLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStorageLocationResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DeleteApplicationVersionRequest&, const Model::DeleteApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DeleteConfigurationTemplateRequest&, const Model::DeleteConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DeleteEnvironmentConfigurationRequest&, const Model::DeleteEnvironmentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DeletePlatformVersionRequest&, const Model::DeletePlatformVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlatformVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeApplicationVersionsRequest&, const Model::DescribeApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeApplicationsRequest&, const Model::DescribeApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeConfigurationOptionsRequest&, const Model::DescribeConfigurationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationOptionsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeConfigurationSettingsRequest&, const Model::DescribeConfigurationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationSettingsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEnvironmentHealthRequest&, const Model::DescribeEnvironmentHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentHealthResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEnvironmentManagedActionHistoryRequest&, const Model::DescribeEnvironmentManagedActionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentManagedActionHistoryResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEnvironmentManagedActionsRequest&, const Model::DescribeEnvironmentManagedActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentManagedActionsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEnvironmentResourcesRequest&, const Model::DescribeEnvironmentResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentResourcesResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEnvironmentsRequest&, const Model::DescribeEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribeInstancesHealthRequest&, const Model::DescribeInstancesHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesHealthResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DescribePlatformVersionRequest&, const Model::DescribePlatformVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlatformVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ListAvailableSolutionStacksRequest&, const Model::ListAvailableSolutionStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableSolutionStacksResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ListPlatformVersionsRequest&, const Model::ListPlatformVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformVersionsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::RebuildEnvironmentRequest&, const Model::RebuildEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebuildEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::RequestEnvironmentInfoRequest&, const Model::RequestEnvironmentInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestEnvironmentInfoResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::RestartAppServerRequest&, const Model::RestartAppServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestartAppServerResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::RetrieveEnvironmentInfoRequest&, const Model::RetrieveEnvironmentInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveEnvironmentInfoResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::SwapEnvironmentCNAMEsRequest&, const Model::SwapEnvironmentCNAMEsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SwapEnvironmentCNAMEsResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::TerminateEnvironmentRequest&, const Model::TerminateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateApplicationResourceLifecycleRequest&, const Model::UpdateApplicationResourceLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResourceLifecycleResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateApplicationVersionRequest&, const Model::UpdateApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateConfigurationTemplateRequest&, const Model::UpdateConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::UpdateTagsForResourceRequest&, const Model::UpdateTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ValidateConfigurationSettingsRequest&, const Model::ValidateConfigurationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateConfigurationSettingsResponseReceivedHandler;

  /**
   * <fullname>AWS Elastic Beanstalk</fullname> <p>AWS Elastic Beanstalk makes it
   * easy for you to create, deploy, and manage scalable, fault-tolerant applications
   * running on the Amazon Web Services cloud.</p> <p>For more information about this
   * product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
   * Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk
   * WSDL is <a
   * href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
   * To install the Software Development Kits (SDKs), Integrated Development
   * Environment (IDE) Toolkits, and command line tools that enable you to access the
   * API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
   * Services</a>.</p> <p> <b>Endpoints</b> </p> <p>For a list of region-specific
   * endpoints that AWS Elastic Beanstalk supports, go to <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions
   * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p>
   */
  class AWS_ELASTICBEANSTALK_API ElasticBeanstalkClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticBeanstalkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElasticBeanstalkClient();

        inline virtual const char* GetServiceClientName() const override { return "Elastic Beanstalk"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Cancels in-progress environment configuration update or application version
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AbortEnvironmentUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortEnvironmentUpdateOutcome AbortEnvironmentUpdate(const Model::AbortEnvironmentUpdateRequest& request) const;

        /**
         * <p>Cancels in-progress environment configuration update or application version
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AbortEnvironmentUpdate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AbortEnvironmentUpdateOutcomeCallable AbortEnvironmentUpdateCallable(const Model::AbortEnvironmentUpdateRequest& request) const;

        /**
         * <p>Cancels in-progress environment configuration update or application version
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AbortEnvironmentUpdate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AbortEnvironmentUpdateAsync(const Model::AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a scheduled managed action immediately. A managed action can be
         * applied only if its status is <code>Scheduled</code>. Get the status and action
         * ID of a managed action with
         * <a>DescribeEnvironmentManagedActions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyEnvironmentManagedActionOutcome ApplyEnvironmentManagedAction(const Model::ApplyEnvironmentManagedActionRequest& request) const;

        /**
         * <p>Applies a scheduled managed action immediately. A managed action can be
         * applied only if its status is <code>Scheduled</code>. Get the status and action
         * ID of a managed action with
         * <a>DescribeEnvironmentManagedActions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedAction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyEnvironmentManagedActionOutcomeCallable ApplyEnvironmentManagedActionCallable(const Model::ApplyEnvironmentManagedActionRequest& request) const;

        /**
         * <p>Applies a scheduled managed action immediately. A managed action can be
         * applied only if its status is <code>Scheduled</code>. Get the status and action
         * ID of a managed action with
         * <a>DescribeEnvironmentManagedActions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedAction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyEnvironmentManagedActionAsync(const Model::ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDNSAvailabilityOutcome CheckDNSAvailability(const Model::CheckDNSAvailabilityRequest& request) const;

        /**
         * <p>Checks if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckDNSAvailabilityOutcomeCallable CheckDNSAvailabilityCallable(const Model::CheckDNSAvailabilityRequest& request) const;

        /**
         * <p>Checks if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailability">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckDNSAvailabilityAsync(const Model::CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create or update a group of environments that each run a separate component
         * of a single application. Takes a list of version labels that specify application
         * source bundles for each of the environments to create or update. The name of
         * each environment and other required information must be included in the source
         * bundles in an environment manifest named <code>env.yaml</code>. See <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-mgmt-compose.html">Compose
         * Environments</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ComposeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ComposeEnvironmentsOutcome ComposeEnvironments(const Model::ComposeEnvironmentsRequest& request) const;

        /**
         * <p>Create or update a group of environments that each run a separate component
         * of a single application. Takes a list of version labels that specify application
         * source bundles for each of the environments to create or update. The name of
         * each environment and other required information must be included in the source
         * bundles in an environment manifest named <code>env.yaml</code>. See <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-mgmt-compose.html">Compose
         * Environments</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ComposeEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ComposeEnvironmentsOutcomeCallable ComposeEnvironmentsCallable(const Model::ComposeEnvironmentsRequest& request) const;

        /**
         * <p>Create or update a group of environments that each run a separate component
         * of a single application. Takes a list of version labels that specify application
         * source bundles for each of the environments to create or update. The name of
         * each environment and other required information must be included in the source
         * bundles in an environment manifest named <code>env.yaml</code>. See <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-mgmt-compose.html">Compose
         * Environments</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ComposeEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ComposeEnvironmentsAsync(const Model::ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an application that has one configuration template named
         * <code>default</code> and no application versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p> Creates an application that has one configuration template named
         * <code>default</code> and no application versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p> Creates an application that has one configuration template named
         * <code>default</code> and no application versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application version for the specified application. You can create
         * an application version from a source bundle in Amazon S3, a commit in AWS
         * CodeCommit, or the output of an AWS CodeBuild build as follows:</p> <p>Specify a
         * commit in an AWS CodeCommit repository with
         * <code>SourceBuildInformation</code>.</p> <p>Specify a build in an AWS CodeBuild
         * with <code>SourceBuildInformation</code> and
         * <code>BuildConfiguration</code>.</p> <p>Specify a source bundle in S3 with
         * <code>SourceBundle</code> </p> <p>Omit both <code>SourceBuildInformation</code>
         * and <code>SourceBundle</code> to use the default sample application.</p> <note>
         * <p>Once you create an application version with a specified Amazon S3 bucket and
         * key location, you cannot change that Amazon S3 location. If you change the
         * Amazon S3 location, you receive an exception when you attempt to launch an
         * environment from the application version.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * <p>Creates an application version for the specified application. You can create
         * an application version from a source bundle in Amazon S3, a commit in AWS
         * CodeCommit, or the output of an AWS CodeBuild build as follows:</p> <p>Specify a
         * commit in an AWS CodeCommit repository with
         * <code>SourceBuildInformation</code>.</p> <p>Specify a build in an AWS CodeBuild
         * with <code>SourceBuildInformation</code> and
         * <code>BuildConfiguration</code>.</p> <p>Specify a source bundle in S3 with
         * <code>SourceBundle</code> </p> <p>Omit both <code>SourceBuildInformation</code>
         * and <code>SourceBundle</code> to use the default sample application.</p> <note>
         * <p>Once you create an application version with a specified Amazon S3 bucket and
         * key location, you cannot change that Amazon S3 location. If you change the
         * Amazon S3 location, you receive an exception when you attempt to launch an
         * environment from the application version.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * <p>Creates an application version for the specified application. You can create
         * an application version from a source bundle in Amazon S3, a commit in AWS
         * CodeCommit, or the output of an AWS CodeBuild build as follows:</p> <p>Specify a
         * commit in an AWS CodeCommit repository with
         * <code>SourceBuildInformation</code>.</p> <p>Specify a build in an AWS CodeBuild
         * with <code>SourceBuildInformation</code> and
         * <code>BuildConfiguration</code>.</p> <p>Specify a source bundle in S3 with
         * <code>SourceBundle</code> </p> <p>Omit both <code>SourceBuildInformation</code>
         * and <code>SourceBundle</code> to use the default sample application.</p> <note>
         * <p>Once you create an application version with a specified Amazon S3 bucket and
         * key location, you cannot change that Amazon S3 location. If you change the
         * Amazon S3 location, you receive an exception when you attempt to launch an
         * environment from the application version.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationVersionAsync(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration template. Templates are associated with a specific
         * application and are used to deploy different versions of the application with
         * the same configuration settings.</p> <p>Templates aren't associated with any
         * environment. The <code>EnvironmentName</code> response element is always
         * <code>null</code>.</p> <p>Related Topics</p> <ul> <li> <p>
         * <a>DescribeConfigurationOptions</a> </p> </li> <li> <p>
         * <a>DescribeConfigurationSettings</a> </p> </li> <li> <p>
         * <a>ListAvailableSolutionStacks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationTemplateOutcome CreateConfigurationTemplate(const Model::CreateConfigurationTemplateRequest& request) const;

        /**
         * <p>Creates a configuration template. Templates are associated with a specific
         * application and are used to deploy different versions of the application with
         * the same configuration settings.</p> <p>Templates aren't associated with any
         * environment. The <code>EnvironmentName</code> response element is always
         * <code>null</code>.</p> <p>Related Topics</p> <ul> <li> <p>
         * <a>DescribeConfigurationOptions</a> </p> </li> <li> <p>
         * <a>DescribeConfigurationSettings</a> </p> </li> <li> <p>
         * <a>ListAvailableSolutionStacks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationTemplateOutcomeCallable CreateConfigurationTemplateCallable(const Model::CreateConfigurationTemplateRequest& request) const;

        /**
         * <p>Creates a configuration template. Templates are associated with a specific
         * application and are used to deploy different versions of the application with
         * the same configuration settings.</p> <p>Templates aren't associated with any
         * environment. The <code>EnvironmentName</code> response element is always
         * <code>null</code>.</p> <p>Related Topics</p> <ul> <li> <p>
         * <a>DescribeConfigurationOptions</a> </p> </li> <li> <p>
         * <a>DescribeConfigurationSettings</a> </p> </li> <li> <p>
         * <a>ListAvailableSolutionStacks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationTemplateAsync(const Model::CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches an environment for the specified application using the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * <p>Launches an environment for the specified application using the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * <p>Launches an environment for the specified application using the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new version of your custom platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformVersionOutcome CreatePlatformVersion(const Model::CreatePlatformVersionRequest& request) const;

        /**
         * <p>Create a new version of your custom platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformVersionOutcomeCallable CreatePlatformVersionCallable(const Model::CreatePlatformVersionRequest& request) const;

        /**
         * <p>Create a new version of your custom platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformVersionAsync(const Model::CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a bucket in Amazon S3 to store application versions, logs, and other
         * files used by Elastic Beanstalk environments. The Elastic Beanstalk console and
         * EB CLI call this API the first time you create an environment in a region. If
         * the storage location already exists, <code>CreateStorageLocation</code> still
         * returns the bucket name but does not create a new bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateStorageLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorageLocationOutcome CreateStorageLocation(const Model::CreateStorageLocationRequest& request) const;

        /**
         * <p>Creates a bucket in Amazon S3 to store application versions, logs, and other
         * files used by Elastic Beanstalk environments. The Elastic Beanstalk console and
         * EB CLI call this API the first time you create an environment in a region. If
         * the storage location already exists, <code>CreateStorageLocation</code> still
         * returns the bucket name but does not create a new bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateStorageLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStorageLocationOutcomeCallable CreateStorageLocationCallable(const Model::CreateStorageLocationRequest& request) const;

        /**
         * <p>Creates a bucket in Amazon S3 to store application versions, logs, and other
         * files used by Elastic Beanstalk environments. The Elastic Beanstalk console and
         * EB CLI call this API the first time you create an environment in a region. If
         * the storage location already exists, <code>CreateStorageLocation</code> still
         * returns the bucket name but does not create a new bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateStorageLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStorageLocationAsync(const Model::CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application along with all associated versions and
         * configurations. The application versions will not be deleted from your Amazon S3
         * bucket.</p> <note> <p>You cannot delete an application that has a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application along with all associated versions and
         * configurations. The application versions will not be deleted from your Amazon S3
         * bucket.</p> <note> <p>You cannot delete an application that has a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes the specified application along with all associated versions and
         * configurations. The application versions will not be deleted from your Amazon S3
         * bucket.</p> <note> <p>You cannot delete an application that has a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version from the specified application.</p> <note>
         * <p>You cannot delete an application version that is associated with a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationVersionOutcome DeleteApplicationVersion(const Model::DeleteApplicationVersionRequest& request) const;

        /**
         * <p>Deletes the specified version from the specified application.</p> <note>
         * <p>You cannot delete an application version that is associated with a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationVersionOutcomeCallable DeleteApplicationVersionCallable(const Model::DeleteApplicationVersionRequest& request) const;

        /**
         * <p>Deletes the specified version from the specified application.</p> <note>
         * <p>You cannot delete an application version that is associated with a running
         * environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationVersionAsync(const Model::DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified configuration template.</p> <note> <p>When you launch
         * an environment using a configuration template, the environment gets a copy of
         * the template. You can delete or modify the environment's copy of the template
         * without affecting the running environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationTemplateOutcome DeleteConfigurationTemplate(const Model::DeleteConfigurationTemplateRequest& request) const;

        /**
         * <p>Deletes the specified configuration template.</p> <note> <p>When you launch
         * an environment using a configuration template, the environment gets a copy of
         * the template. You can delete or modify the environment's copy of the template
         * without affecting the running environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationTemplateOutcomeCallable DeleteConfigurationTemplateCallable(const Model::DeleteConfigurationTemplateRequest& request) const;

        /**
         * <p>Deletes the specified configuration template.</p> <note> <p>When you launch
         * an environment using a configuration template, the environment gets a copy of
         * the template. You can delete or modify the environment's copy of the template
         * without affecting the running environment.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationTemplateAsync(const Model::DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the draft configuration associated with the running environment.</p>
         * <p>Updating a running environment with any configuration changes creates a draft
         * configuration set. You can get the draft configuration using
         * <a>DescribeConfigurationSettings</a> while the update is in progress or if the
         * update fails. The <code>DeploymentStatus</code> for the draft configuration
         * indicates whether the deployment is in process or has failed. The draft
         * configuration remains in existence until it is deleted with this
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteEnvironmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentConfigurationOutcome DeleteEnvironmentConfiguration(const Model::DeleteEnvironmentConfigurationRequest& request) const;

        /**
         * <p>Deletes the draft configuration associated with the running environment.</p>
         * <p>Updating a running environment with any configuration changes creates a draft
         * configuration set. You can get the draft configuration using
         * <a>DescribeConfigurationSettings</a> while the update is in progress or if the
         * update fails. The <code>DeploymentStatus</code> for the draft configuration
         * indicates whether the deployment is in process or has failed. The draft
         * configuration remains in existence until it is deleted with this
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteEnvironmentConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentConfigurationOutcomeCallable DeleteEnvironmentConfigurationCallable(const Model::DeleteEnvironmentConfigurationRequest& request) const;

        /**
         * <p>Deletes the draft configuration associated with the running environment.</p>
         * <p>Updating a running environment with any configuration changes creates a draft
         * configuration set. You can get the draft configuration using
         * <a>DescribeConfigurationSettings</a> while the update is in progress or if the
         * update fails. The <code>DeploymentStatus</code> for the draft configuration
         * indicates whether the deployment is in process or has failed. The draft
         * configuration remains in existence until it is deleted with this
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteEnvironmentConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentConfigurationAsync(const Model::DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version of a custom platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeletePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlatformVersionOutcome DeletePlatformVersion(const Model::DeletePlatformVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of a custom platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeletePlatformVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlatformVersionOutcomeCallable DeletePlatformVersionCallable(const Model::DeletePlatformVersionRequest& request) const;

        /**
         * <p>Deletes the specified version of a custom platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeletePlatformVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlatformVersionAsync(const Model::DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns attributes related to AWS Elastic Beanstalk that are associated with
         * the calling AWS account.</p> <p>The result currently has one set of
         * attributes—resource quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Returns attributes related to AWS Elastic Beanstalk that are associated with
         * the calling AWS account.</p> <p>The result currently has one set of
         * attributes—resource quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Returns attributes related to AWS Elastic Beanstalk that are associated with
         * the calling AWS account.</p> <p>The result currently has one set of
         * attributes—resource quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationVersionsOutcome DescribeApplicationVersions(const Model::DescribeApplicationVersionsRequest& request) const;

        /**
         * <p>Retrieve a list of application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationVersionsOutcomeCallable DescribeApplicationVersionsCallable(const Model::DescribeApplicationVersionsRequest& request) const;

        /**
         * <p>Retrieve a list of application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationVersionsAsync(const Model::DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the descriptions of existing applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;

        /**
         * <p>Returns the descriptions of existing applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request) const;

        /**
         * <p>Returns the descriptions of existing applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the configuration options that are used in a particular
         * configuration template or environment, or that a specified solution stack
         * defines. The description includes the values the options, their default values,
         * and an indication of the required action on a running environment if an option
         * value is changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOptionsOutcome DescribeConfigurationOptions(const Model::DescribeConfigurationOptionsRequest& request) const;

        /**
         * <p>Describes the configuration options that are used in a particular
         * configuration template or environment, or that a specified solution stack
         * defines. The description includes the values the options, their default values,
         * and an indication of the required action on a running environment if an option
         * value is changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationOptionsOutcomeCallable DescribeConfigurationOptionsCallable(const Model::DescribeConfigurationOptionsRequest& request) const;

        /**
         * <p>Describes the configuration options that are used in a particular
         * configuration template or environment, or that a specified solution stack
         * defines. The description includes the values the options, their default values,
         * and an indication of the required action on a running environment if an option
         * value is changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationOptionsAsync(const Model::DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the settings for the specified configuration set,
         * that is, either a configuration template or the configuration set associated
         * with a running environment.</p> <p>When describing the settings for the
         * configuration set associated with a running environment, it is possible to
         * receive two sets of setting descriptions. One is the deployed configuration set,
         * and the other is a draft configuration of an environment that is either in the
         * process of deployment or that failed to deploy.</p> <p>Related Topics</p> <ul>
         * <li> <p> <a>DeleteEnvironmentConfiguration</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSettingsOutcome DescribeConfigurationSettings(const Model::DescribeConfigurationSettingsRequest& request) const;

        /**
         * <p>Returns a description of the settings for the specified configuration set,
         * that is, either a configuration template or the configuration set associated
         * with a running environment.</p> <p>When describing the settings for the
         * configuration set associated with a running environment, it is possible to
         * receive two sets of setting descriptions. One is the deployed configuration set,
         * and the other is a draft configuration of an environment that is either in the
         * process of deployment or that failed to deploy.</p> <p>Related Topics</p> <ul>
         * <li> <p> <a>DeleteEnvironmentConfiguration</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationSettingsOutcomeCallable DescribeConfigurationSettingsCallable(const Model::DescribeConfigurationSettingsRequest& request) const;

        /**
         * <p>Returns a description of the settings for the specified configuration set,
         * that is, either a configuration template or the configuration set associated
         * with a running environment.</p> <p>When describing the settings for the
         * configuration set associated with a running environment, it is possible to
         * receive two sets of setting descriptions. One is the deployed configuration set,
         * and the other is a draft configuration of an environment that is either in the
         * process of deployment or that failed to deploy.</p> <p>Related Topics</p> <ul>
         * <li> <p> <a>DeleteEnvironmentConfiguration</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationSettingsAsync(const Model::DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the overall health of the specified environment.
         * The <b>DescribeEnvironmentHealth</b> operation is only available with AWS
         * Elastic Beanstalk Enhanced Health.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentHealthOutcome DescribeEnvironmentHealth(const Model::DescribeEnvironmentHealthRequest& request) const;

        /**
         * <p>Returns information about the overall health of the specified environment.
         * The <b>DescribeEnvironmentHealth</b> operation is only available with AWS
         * Elastic Beanstalk Enhanced Health.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentHealthOutcomeCallable DescribeEnvironmentHealthCallable(const Model::DescribeEnvironmentHealthRequest& request) const;

        /**
         * <p>Returns information about the overall health of the specified environment.
         * The <b>DescribeEnvironmentHealth</b> operation is only available with AWS
         * Elastic Beanstalk Enhanced Health.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentHealthAsync(const Model::DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists an environment's completed and failed managed actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentManagedActionHistoryOutcome DescribeEnvironmentManagedActionHistory(const Model::DescribeEnvironmentManagedActionHistoryRequest& request) const;

        /**
         * <p>Lists an environment's completed and failed managed actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentManagedActionHistoryOutcomeCallable DescribeEnvironmentManagedActionHistoryCallable(const Model::DescribeEnvironmentManagedActionHistoryRequest& request) const;

        /**
         * <p>Lists an environment's completed and failed managed actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentManagedActionHistoryAsync(const Model::DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists an environment's upcoming and in-progress managed
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentManagedActionsOutcome DescribeEnvironmentManagedActions(const Model::DescribeEnvironmentManagedActionsRequest& request) const;

        /**
         * <p>Lists an environment's upcoming and in-progress managed
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentManagedActionsOutcomeCallable DescribeEnvironmentManagedActionsCallable(const Model::DescribeEnvironmentManagedActionsRequest& request) const;

        /**
         * <p>Lists an environment's upcoming and in-progress managed
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentManagedActionsAsync(const Model::DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns AWS resources for this environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentResourcesOutcome DescribeEnvironmentResources(const Model::DescribeEnvironmentResourcesRequest& request) const;

        /**
         * <p>Returns AWS resources for this environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentResourcesOutcomeCallable DescribeEnvironmentResourcesCallable(const Model::DescribeEnvironmentResourcesRequest& request) const;

        /**
         * <p>Returns AWS resources for this environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentResourcesAsync(const Model::DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions for existing environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * <p>Returns descriptions for existing environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * <p>Returns descriptions for existing environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of event descriptions matching criteria up to the last 6
         * weeks.</p> <note> <p>This action returns the most recent 1,000 events from the
         * specified <code>NextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns list of event descriptions matching criteria up to the last 6
         * weeks.</p> <note> <p>This action returns the most recent 1,000 events from the
         * specified <code>NextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p>Returns list of event descriptions matching criteria up to the last 6
         * weeks.</p> <note> <p>This action returns the most recent 1,000 events from the
         * specified <code>NextToken</code>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed information about the health of instances in your AWS
         * Elastic Beanstalk. This operation requires <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced.html">enhanced
         * health reporting</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesHealthOutcome DescribeInstancesHealth(const Model::DescribeInstancesHealthRequest& request) const;

        /**
         * <p>Retrieves detailed information about the health of instances in your AWS
         * Elastic Beanstalk. This operation requires <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced.html">enhanced
         * health reporting</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesHealthOutcomeCallable DescribeInstancesHealthCallable(const Model::DescribeInstancesHealthRequest& request) const;

        /**
         * <p>Retrieves detailed information about the health of instances in your AWS
         * Elastic Beanstalk. This operation requires <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced.html">enhanced
         * health reporting</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesHealthAsync(const Model::DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the version of the platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlatformVersionOutcome DescribePlatformVersion(const Model::DescribePlatformVersionRequest& request) const;

        /**
         * <p>Describes the version of the platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribePlatformVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlatformVersionOutcomeCallable DescribePlatformVersionCallable(const Model::DescribePlatformVersionRequest& request) const;

        /**
         * <p>Describes the version of the platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribePlatformVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlatformVersionAsync(const Model::DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the available solution stack names, with the public version
         * first and then in reverse chronological order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListAvailableSolutionStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableSolutionStacksOutcome ListAvailableSolutionStacks(const Model::ListAvailableSolutionStacksRequest& request) const;

        /**
         * <p>Returns a list of the available solution stack names, with the public version
         * first and then in reverse chronological order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListAvailableSolutionStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableSolutionStacksOutcomeCallable ListAvailableSolutionStacksCallable(const Model::ListAvailableSolutionStacksRequest& request) const;

        /**
         * <p>Returns a list of the available solution stack names, with the public version
         * first and then in reverse chronological order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListAvailableSolutionStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableSolutionStacksAsync(const Model::ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the available platforms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListPlatformVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformVersionsOutcome ListPlatformVersions(const Model::ListPlatformVersionsRequest& request) const;

        /**
         * <p>Lists the available platforms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListPlatformVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlatformVersionsOutcomeCallable ListPlatformVersionsCallable(const Model::ListPlatformVersionsRequest& request) const;

        /**
         * <p>Lists the available platforms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListPlatformVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlatformVersionsAsync(const Model::ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags applied to an AWS Elastic Beanstalk resource. The response
         * contains a list of tag key-value pairs.</p> <p>Currently, Elastic Beanstalk only
         * supports tagging of Elastic Beanstalk environments. For details about
         * environment tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns the tags applied to an AWS Elastic Beanstalk resource. The response
         * contains a list of tag key-value pairs.</p> <p>Currently, Elastic Beanstalk only
         * supports tagging of Elastic Beanstalk environments. For details about
         * environment tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns the tags applied to an AWS Elastic Beanstalk resource. The response
         * contains a list of tag key-value pairs.</p> <p>Currently, Elastic Beanstalk only
         * supports tagging of Elastic Beanstalk environments. For details about
         * environment tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes and recreates all of the AWS resources (for example: the Auto Scaling
         * group, load balancer, etc.) for a specified environment and forces a
         * restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RebuildEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildEnvironmentOutcome RebuildEnvironment(const Model::RebuildEnvironmentRequest& request) const;

        /**
         * <p>Deletes and recreates all of the AWS resources (for example: the Auto Scaling
         * group, load balancer, etc.) for a specified environment and forces a
         * restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RebuildEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebuildEnvironmentOutcomeCallable RebuildEnvironmentCallable(const Model::RebuildEnvironmentRequest& request) const;

        /**
         * <p>Deletes and recreates all of the AWS resources (for example: the Auto Scaling
         * group, load balancer, etc.) for a specified environment and forces a
         * restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RebuildEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebuildEnvironmentAsync(const Model::RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a request to compile the specified type of information of the
         * deployed environment.</p> <p> Setting the <code>InfoType</code> to
         * <code>tail</code> compiles the last lines from the application server log files
         * of every Amazon EC2 instance in your environment. </p> <p> Setting the
         * <code>InfoType</code> to <code>bundle</code> compresses the application server
         * log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy
         * and .NET containers do not support bundle logs. </p> <p> Use
         * <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related
         * Topics</p> <ul> <li> <p> <a>RetrieveEnvironmentInfo</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RequestEnvironmentInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestEnvironmentInfoOutcome RequestEnvironmentInfo(const Model::RequestEnvironmentInfoRequest& request) const;

        /**
         * <p>Initiates a request to compile the specified type of information of the
         * deployed environment.</p> <p> Setting the <code>InfoType</code> to
         * <code>tail</code> compiles the last lines from the application server log files
         * of every Amazon EC2 instance in your environment. </p> <p> Setting the
         * <code>InfoType</code> to <code>bundle</code> compresses the application server
         * log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy
         * and .NET containers do not support bundle logs. </p> <p> Use
         * <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related
         * Topics</p> <ul> <li> <p> <a>RetrieveEnvironmentInfo</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RequestEnvironmentInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestEnvironmentInfoOutcomeCallable RequestEnvironmentInfoCallable(const Model::RequestEnvironmentInfoRequest& request) const;

        /**
         * <p>Initiates a request to compile the specified type of information of the
         * deployed environment.</p> <p> Setting the <code>InfoType</code> to
         * <code>tail</code> compiles the last lines from the application server log files
         * of every Amazon EC2 instance in your environment. </p> <p> Setting the
         * <code>InfoType</code> to <code>bundle</code> compresses the application server
         * log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy
         * and .NET containers do not support bundle logs. </p> <p> Use
         * <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related
         * Topics</p> <ul> <li> <p> <a>RetrieveEnvironmentInfo</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RequestEnvironmentInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestEnvironmentInfoAsync(const Model::RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Causes the environment to restart the application container server running on
         * each Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RestartAppServer">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartAppServerOutcome RestartAppServer(const Model::RestartAppServerRequest& request) const;

        /**
         * <p>Causes the environment to restart the application container server running on
         * each Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RestartAppServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestartAppServerOutcomeCallable RestartAppServerCallable(const Model::RestartAppServerRequest& request) const;

        /**
         * <p>Causes the environment to restart the application container server running on
         * each Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RestartAppServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestartAppServerAsync(const Model::RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the compiled information from a <a>RequestEnvironmentInfo</a>
         * request.</p> <p>Related Topics</p> <ul> <li> <p> <a>RequestEnvironmentInfo</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveEnvironmentInfoOutcome RetrieveEnvironmentInfo(const Model::RetrieveEnvironmentInfoRequest& request) const;

        /**
         * <p>Retrieves the compiled information from a <a>RequestEnvironmentInfo</a>
         * request.</p> <p>Related Topics</p> <ul> <li> <p> <a>RequestEnvironmentInfo</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveEnvironmentInfoOutcomeCallable RetrieveEnvironmentInfoCallable(const Model::RetrieveEnvironmentInfoRequest& request) const;

        /**
         * <p>Retrieves the compiled information from a <a>RequestEnvironmentInfo</a>
         * request.</p> <p>Related Topics</p> <ul> <li> <p> <a>RequestEnvironmentInfo</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveEnvironmentInfoAsync(const Model::RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEs">AWS
         * API Reference</a></p>
         */
        virtual Model::SwapEnvironmentCNAMEsOutcome SwapEnvironmentCNAMEs(const Model::SwapEnvironmentCNAMEsRequest& request) const;

        /**
         * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SwapEnvironmentCNAMEsOutcomeCallable SwapEnvironmentCNAMEsCallable(const Model::SwapEnvironmentCNAMEsRequest& request) const;

        /**
         * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SwapEnvironmentCNAMEsAsync(const Model::SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateEnvironmentOutcome TerminateEnvironment(const Model::TerminateEnvironmentRequest& request) const;

        /**
         * <p>Terminates the specified environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateEnvironmentOutcomeCallable TerminateEnvironmentCallable(const Model::TerminateEnvironmentRequest& request) const;

        /**
         * <p>Terminates the specified environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateEnvironmentAsync(const Model::TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application to have the specified properties.</p>
         * <note> <p>If a property (for example, <code>description</code>) is not provided,
         * the value remains unchanged. To clear these properties, specify an empty
         * string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the specified application to have the specified properties.</p>
         * <note> <p>If a property (for example, <code>description</code>) is not provided,
         * the value remains unchanged. To clear these properties, specify an empty
         * string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the specified application to have the specified properties.</p>
         * <note> <p>If a property (for example, <code>description</code>) is not provided,
         * the value remains unchanged. To clear these properties, specify an empty
         * string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies lifecycle settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationResourceLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationResourceLifecycleOutcome UpdateApplicationResourceLifecycle(const Model::UpdateApplicationResourceLifecycleRequest& request) const;

        /**
         * <p>Modifies lifecycle settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationResourceLifecycle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationResourceLifecycleOutcomeCallable UpdateApplicationResourceLifecycleCallable(const Model::UpdateApplicationResourceLifecycleRequest& request) const;

        /**
         * <p>Modifies lifecycle settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationResourceLifecycle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationResourceLifecycleAsync(const Model::UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application version to have the specified
         * properties.</p> <note> <p>If a property (for example, <code>description</code>)
         * is not provided, the value remains unchanged. To clear properties, specify an
         * empty string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationVersionOutcome UpdateApplicationVersion(const Model::UpdateApplicationVersionRequest& request) const;

        /**
         * <p>Updates the specified application version to have the specified
         * properties.</p> <note> <p>If a property (for example, <code>description</code>)
         * is not provided, the value remains unchanged. To clear properties, specify an
         * empty string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationVersionOutcomeCallable UpdateApplicationVersionCallable(const Model::UpdateApplicationVersionRequest& request) const;

        /**
         * <p>Updates the specified application version to have the specified
         * properties.</p> <note> <p>If a property (for example, <code>description</code>)
         * is not provided, the value remains unchanged. To clear properties, specify an
         * empty string.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationVersionAsync(const Model::UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified configuration template to have the specified properties
         * or configuration option values.</p> <note> <p>If a property (for example,
         * <code>ApplicationName</code>) is not provided, its value remains unchanged. To
         * clear such properties, specify an empty string.</p> </note> <p>Related
         * Topics</p> <ul> <li> <p> <a>DescribeConfigurationOptions</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationTemplateOutcome UpdateConfigurationTemplate(const Model::UpdateConfigurationTemplateRequest& request) const;

        /**
         * <p>Updates the specified configuration template to have the specified properties
         * or configuration option values.</p> <note> <p>If a property (for example,
         * <code>ApplicationName</code>) is not provided, its value remains unchanged. To
         * clear such properties, specify an empty string.</p> </note> <p>Related
         * Topics</p> <ul> <li> <p> <a>DescribeConfigurationOptions</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationTemplateOutcomeCallable UpdateConfigurationTemplateCallable(const Model::UpdateConfigurationTemplateRequest& request) const;

        /**
         * <p>Updates the specified configuration template to have the specified properties
         * or configuration option values.</p> <note> <p>If a property (for example,
         * <code>ApplicationName</code>) is not provided, its value remains unchanged. To
         * clear such properties, specify an empty string.</p> </note> <p>Related
         * Topics</p> <ul> <li> <p> <a>DescribeConfigurationOptions</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationTemplateAsync(const Model::UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the environment description, deploys a new application version,
         * updates the configuration settings to an entirely new configuration template, or
         * updates select configuration option values in the running environment.</p> <p>
         * Attempting to update both the release and configuration is not allowed and AWS
         * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
         * </p> <p> When updating the configuration settings to a new template or
         * individual settings, a draft configuration is created and
         * <a>DescribeConfigurationSettings</a> for this environment returns two setting
         * descriptions with different <code>DeploymentStatus</code> values. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Updates the environment description, deploys a new application version,
         * updates the configuration settings to an entirely new configuration template, or
         * updates select configuration option values in the running environment.</p> <p>
         * Attempting to update both the release and configuration is not allowed and AWS
         * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
         * </p> <p> When updating the configuration settings to a new template or
         * individual settings, a draft configuration is created and
         * <a>DescribeConfigurationSettings</a> for this environment returns two setting
         * descriptions with different <code>DeploymentStatus</code> values. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Updates the environment description, deploys a new application version,
         * updates the configuration settings to an entirely new configuration template, or
         * updates select configuration option values in the running environment.</p> <p>
         * Attempting to update both the release and configuration is not allowed and AWS
         * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
         * </p> <p> When updating the configuration settings to a new template or
         * individual settings, a draft configuration is created and
         * <a>DescribeConfigurationSettings</a> for this environment returns two setting
         * descriptions with different <code>DeploymentStatus</code> values. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the list of tags applied to an AWS Elastic Beanstalk resource. Two
         * lists can be passed: <code>TagsToAdd</code> for tags to add or update, and
         * <code>TagsToRemove</code>.</p> <p>Currently, Elastic Beanstalk only supports
         * tagging of Elastic Beanstalk environments. For details about environment
         * tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p> <p>If you create a
         * custom IAM user policy to control permission to this operation, specify one of
         * the following two virtual actions (or both) instead of the API operation
         * name:</p> <dl> <dt>elasticbeanstalk:AddTags</dt> <dd> <p>Controls permission to
         * call <code>UpdateTagsForResource</code> and pass a list of tags to add in the
         * <code>TagsToAdd</code> parameter.</p> </dd> <dt>elasticbeanstalk:RemoveTags</dt>
         * <dd> <p>Controls permission to call <code>UpdateTagsForResource</code> and pass
         * a list of tag keys to remove in the <code>TagsToRemove</code> parameter.</p>
         * </dd> </dl> <p>For details about creating a custom user policy, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/AWSHowTo.iam.managed-policies.html#AWSHowTo.iam.policies">Creating
         * a Custom User Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagsForResourceOutcome UpdateTagsForResource(const Model::UpdateTagsForResourceRequest& request) const;

        /**
         * <p>Update the list of tags applied to an AWS Elastic Beanstalk resource. Two
         * lists can be passed: <code>TagsToAdd</code> for tags to add or update, and
         * <code>TagsToRemove</code>.</p> <p>Currently, Elastic Beanstalk only supports
         * tagging of Elastic Beanstalk environments. For details about environment
         * tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p> <p>If you create a
         * custom IAM user policy to control permission to this operation, specify one of
         * the following two virtual actions (or both) instead of the API operation
         * name:</p> <dl> <dt>elasticbeanstalk:AddTags</dt> <dd> <p>Controls permission to
         * call <code>UpdateTagsForResource</code> and pass a list of tags to add in the
         * <code>TagsToAdd</code> parameter.</p> </dd> <dt>elasticbeanstalk:RemoveTags</dt>
         * <dd> <p>Controls permission to call <code>UpdateTagsForResource</code> and pass
         * a list of tag keys to remove in the <code>TagsToRemove</code> parameter.</p>
         * </dd> </dl> <p>For details about creating a custom user policy, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/AWSHowTo.iam.managed-policies.html#AWSHowTo.iam.policies">Creating
         * a Custom User Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTagsForResourceOutcomeCallable UpdateTagsForResourceCallable(const Model::UpdateTagsForResourceRequest& request) const;

        /**
         * <p>Update the list of tags applied to an AWS Elastic Beanstalk resource. Two
         * lists can be passed: <code>TagsToAdd</code> for tags to add or update, and
         * <code>TagsToRemove</code>.</p> <p>Currently, Elastic Beanstalk only supports
         * tagging of Elastic Beanstalk environments. For details about environment
         * tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/using-features.tagging.html">Tagging
         * Resources in Your Elastic Beanstalk Environment</a>.</p> <p>If you create a
         * custom IAM user policy to control permission to this operation, specify one of
         * the following two virtual actions (or both) instead of the API operation
         * name:</p> <dl> <dt>elasticbeanstalk:AddTags</dt> <dd> <p>Controls permission to
         * call <code>UpdateTagsForResource</code> and pass a list of tags to add in the
         * <code>TagsToAdd</code> parameter.</p> </dd> <dt>elasticbeanstalk:RemoveTags</dt>
         * <dd> <p>Controls permission to call <code>UpdateTagsForResource</code> and pass
         * a list of tag keys to remove in the <code>TagsToRemove</code> parameter.</p>
         * </dd> </dl> <p>For details about creating a custom user policy, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/AWSHowTo.iam.managed-policies.html#AWSHowTo.iam.policies">Creating
         * a Custom User Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagsForResourceAsync(const Model::UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Takes a set of configuration settings and either a configuration template or
         * environment, and determines whether those values are valid.</p> <p>This action
         * returns a list of messages indicating any errors or warnings associated with the
         * selection of option values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidateConfigurationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateConfigurationSettingsOutcome ValidateConfigurationSettings(const Model::ValidateConfigurationSettingsRequest& request) const;

        /**
         * <p>Takes a set of configuration settings and either a configuration template or
         * environment, and determines whether those values are valid.</p> <p>This action
         * returns a list of messages indicating any errors or warnings associated with the
         * selection of option values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidateConfigurationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateConfigurationSettingsOutcomeCallable ValidateConfigurationSettingsCallable(const Model::ValidateConfigurationSettingsRequest& request) const;

        /**
         * <p>Takes a set of configuration settings and either a configuration template or
         * environment, and determines whether those values are valid.</p> <p>This action
         * returns a list of messages indicating any errors or warnings associated with the
         * selection of option values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidateConfigurationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateConfigurationSettingsAsync(const Model::ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AbortEnvironmentUpdateAsyncHelper(const Model::AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApplyEnvironmentManagedActionAsyncHelper(const Model::ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckDNSAvailabilityAsyncHelper(const Model::CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ComposeEnvironmentsAsyncHelper(const Model::ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationVersionAsyncHelper(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationTemplateAsyncHelper(const Model::CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEnvironmentAsyncHelper(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformVersionAsyncHelper(const Model::CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStorageLocationAsyncHelper(const Model::CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationVersionAsyncHelper(const Model::DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationTemplateAsyncHelper(const Model::DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEnvironmentConfigurationAsyncHelper(const Model::DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlatformVersionAsyncHelper(const Model::DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationVersionsAsyncHelper(const Model::DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationsAsyncHelper(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationOptionsAsyncHelper(const Model::DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationSettingsAsyncHelper(const Model::DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentHealthAsyncHelper(const Model::DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentManagedActionHistoryAsyncHelper(const Model::DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentManagedActionsAsyncHelper(const Model::DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentResourcesAsyncHelper(const Model::DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEnvironmentsAsyncHelper(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesHealthAsyncHelper(const Model::DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlatformVersionAsyncHelper(const Model::DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableSolutionStacksAsyncHelper(const Model::ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlatformVersionsAsyncHelper(const Model::ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebuildEnvironmentAsyncHelper(const Model::RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestEnvironmentInfoAsyncHelper(const Model::RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestartAppServerAsyncHelper(const Model::RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetrieveEnvironmentInfoAsyncHelper(const Model::RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SwapEnvironmentCNAMEsAsyncHelper(const Model::SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateEnvironmentAsyncHelper(const Model::TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationResourceLifecycleAsyncHelper(const Model::UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationVersionAsyncHelper(const Model::UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationTemplateAsyncHelper(const Model::UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnvironmentAsyncHelper(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTagsForResourceAsyncHelper(const Model::UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateConfigurationSettingsAsyncHelper(const Model::ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticBeanstalk
} // namespace Aws
