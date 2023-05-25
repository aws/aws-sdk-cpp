/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ElasticBeanstalkClient header */
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
#include <aws/elasticbeanstalk/model/ListPlatformBranchesResult.h>
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
/* End of service model headers required in ElasticBeanstalkClient header */

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
    using ElasticBeanstalkClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ElasticBeanstalkEndpointProviderBase = Aws::ElasticBeanstalk::Endpoint::ElasticBeanstalkEndpointProviderBase;
    using ElasticBeanstalkEndpointProvider = Aws::ElasticBeanstalk::Endpoint::ElasticBeanstalkEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ElasticBeanstalkClient header */
      class AbortEnvironmentUpdateRequest;
      class ApplyEnvironmentManagedActionRequest;
      class AssociateEnvironmentOperationsRoleRequest;
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
      class DisassociateEnvironmentOperationsRoleRequest;
      class ListAvailableSolutionStacksRequest;
      class ListPlatformBranchesRequest;
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
      /* End of service model forward declarations required in ElasticBeanstalkClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> AbortEnvironmentUpdateOutcome;
      typedef Aws::Utils::Outcome<ApplyEnvironmentManagedActionResult, ElasticBeanstalkError> ApplyEnvironmentManagedActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> AssociateEnvironmentOperationsRoleOutcome;
      typedef Aws::Utils::Outcome<CheckDNSAvailabilityResult, ElasticBeanstalkError> CheckDNSAvailabilityOutcome;
      typedef Aws::Utils::Outcome<ComposeEnvironmentsResult, ElasticBeanstalkError> ComposeEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, ElasticBeanstalkError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationVersionResult, ElasticBeanstalkError> CreateApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationTemplateResult, ElasticBeanstalkError> CreateConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, ElasticBeanstalkError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreatePlatformVersionResult, ElasticBeanstalkError> CreatePlatformVersionOutcome;
      typedef Aws::Utils::Outcome<CreateStorageLocationResult, ElasticBeanstalkError> CreateStorageLocationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> DeleteApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> DeleteConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> DeleteEnvironmentConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePlatformVersionResult, ElasticBeanstalkError> DeletePlatformVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, ElasticBeanstalkError> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationVersionsResult, ElasticBeanstalkError> DescribeApplicationVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationsResult, ElasticBeanstalkError> DescribeApplicationsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationOptionsResult, ElasticBeanstalkError> DescribeConfigurationOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationSettingsResult, ElasticBeanstalkError> DescribeConfigurationSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentHealthResult, ElasticBeanstalkError> DescribeEnvironmentHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentManagedActionHistoryResult, ElasticBeanstalkError> DescribeEnvironmentManagedActionHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentManagedActionsResult, ElasticBeanstalkError> DescribeEnvironmentManagedActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentResourcesResult, ElasticBeanstalkError> DescribeEnvironmentResourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeEnvironmentsResult, ElasticBeanstalkError> DescribeEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, ElasticBeanstalkError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancesHealthResult, ElasticBeanstalkError> DescribeInstancesHealthOutcome;
      typedef Aws::Utils::Outcome<DescribePlatformVersionResult, ElasticBeanstalkError> DescribePlatformVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> DisassociateEnvironmentOperationsRoleOutcome;
      typedef Aws::Utils::Outcome<ListAvailableSolutionStacksResult, ElasticBeanstalkError> ListAvailableSolutionStacksOutcome;
      typedef Aws::Utils::Outcome<ListPlatformBranchesResult, ElasticBeanstalkError> ListPlatformBranchesOutcome;
      typedef Aws::Utils::Outcome<ListPlatformVersionsResult, ElasticBeanstalkError> ListPlatformVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ElasticBeanstalkError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> RebuildEnvironmentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> RequestEnvironmentInfoOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> RestartAppServerOutcome;
      typedef Aws::Utils::Outcome<RetrieveEnvironmentInfoResult, ElasticBeanstalkError> RetrieveEnvironmentInfoOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> SwapEnvironmentCNAMEsOutcome;
      typedef Aws::Utils::Outcome<TerminateEnvironmentResult, ElasticBeanstalkError> TerminateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, ElasticBeanstalkError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResourceLifecycleResult, ElasticBeanstalkError> UpdateApplicationResourceLifecycleOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationVersionResult, ElasticBeanstalkError> UpdateApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationTemplateResult, ElasticBeanstalkError> UpdateConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, ElasticBeanstalkError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ElasticBeanstalkError> UpdateTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ValidateConfigurationSettingsResult, ElasticBeanstalkError> ValidateConfigurationSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AbortEnvironmentUpdateOutcome> AbortEnvironmentUpdateOutcomeCallable;
      typedef std::future<ApplyEnvironmentManagedActionOutcome> ApplyEnvironmentManagedActionOutcomeCallable;
      typedef std::future<AssociateEnvironmentOperationsRoleOutcome> AssociateEnvironmentOperationsRoleOutcomeCallable;
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
      typedef std::future<DisassociateEnvironmentOperationsRoleOutcome> DisassociateEnvironmentOperationsRoleOutcomeCallable;
      typedef std::future<ListAvailableSolutionStacksOutcome> ListAvailableSolutionStacksOutcomeCallable;
      typedef std::future<ListPlatformBranchesOutcome> ListPlatformBranchesOutcomeCallable;
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ElasticBeanstalkClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::AbortEnvironmentUpdateRequest&, const Model::AbortEnvironmentUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortEnvironmentUpdateResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ApplyEnvironmentManagedActionRequest&, const Model::ApplyEnvironmentManagedActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyEnvironmentManagedActionResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::AssociateEnvironmentOperationsRoleRequest&, const Model::AssociateEnvironmentOperationsRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEnvironmentOperationsRoleResponseReceivedHandler;
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
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::DisassociateEnvironmentOperationsRoleRequest&, const Model::DisassociateEnvironmentOperationsRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateEnvironmentOperationsRoleResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ListAvailableSolutionStacksRequest&, const Model::ListAvailableSolutionStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableSolutionStacksResponseReceivedHandler;
    typedef std::function<void(const ElasticBeanstalkClient*, const Model::ListPlatformBranchesRequest&, const Model::ListPlatformBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformBranchesResponseReceivedHandler;
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
    /* End of service model async handlers definitions */
  } // namespace ElasticBeanstalk
} // namespace Aws
