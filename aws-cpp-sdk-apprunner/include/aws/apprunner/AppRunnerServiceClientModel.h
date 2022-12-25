/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apprunner/AppRunnerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/apprunner/AppRunnerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppRunnerClient header */
#include <aws/apprunner/model/AssociateCustomDomainResult.h>
#include <aws/apprunner/model/CreateAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/CreateConnectionResult.h>
#include <aws/apprunner/model/CreateObservabilityConfigurationResult.h>
#include <aws/apprunner/model/CreateServiceResult.h>
#include <aws/apprunner/model/CreateVpcConnectorResult.h>
#include <aws/apprunner/model/CreateVpcIngressConnectionResult.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DeleteConnectionResult.h>
#include <aws/apprunner/model/DeleteObservabilityConfigurationResult.h>
#include <aws/apprunner/model/DeleteServiceResult.h>
#include <aws/apprunner/model/DeleteVpcConnectorResult.h>
#include <aws/apprunner/model/DeleteVpcIngressConnectionResult.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DescribeCustomDomainsResult.h>
#include <aws/apprunner/model/DescribeObservabilityConfigurationResult.h>
#include <aws/apprunner/model/DescribeServiceResult.h>
#include <aws/apprunner/model/DescribeVpcConnectorResult.h>
#include <aws/apprunner/model/DescribeVpcIngressConnectionResult.h>
#include <aws/apprunner/model/DisassociateCustomDomainResult.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsResult.h>
#include <aws/apprunner/model/ListConnectionsResult.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsResult.h>
#include <aws/apprunner/model/ListOperationsResult.h>
#include <aws/apprunner/model/ListServicesResult.h>
#include <aws/apprunner/model/ListTagsForResourceResult.h>
#include <aws/apprunner/model/ListVpcConnectorsResult.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsResult.h>
#include <aws/apprunner/model/PauseServiceResult.h>
#include <aws/apprunner/model/ResumeServiceResult.h>
#include <aws/apprunner/model/StartDeploymentResult.h>
#include <aws/apprunner/model/TagResourceResult.h>
#include <aws/apprunner/model/UntagResourceResult.h>
#include <aws/apprunner/model/UpdateServiceResult.h>
#include <aws/apprunner/model/UpdateVpcIngressConnectionResult.h>
/* End of service model headers required in AppRunnerClient header */

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

  namespace AppRunner
  {
    using AppRunnerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppRunnerEndpointProviderBase = Aws::AppRunner::Endpoint::AppRunnerEndpointProviderBase;
    using AppRunnerEndpointProvider = Aws::AppRunner::Endpoint::AppRunnerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppRunnerClient header */
      class AssociateCustomDomainRequest;
      class CreateAutoScalingConfigurationRequest;
      class CreateConnectionRequest;
      class CreateObservabilityConfigurationRequest;
      class CreateServiceRequest;
      class CreateVpcConnectorRequest;
      class CreateVpcIngressConnectionRequest;
      class DeleteAutoScalingConfigurationRequest;
      class DeleteConnectionRequest;
      class DeleteObservabilityConfigurationRequest;
      class DeleteServiceRequest;
      class DeleteVpcConnectorRequest;
      class DeleteVpcIngressConnectionRequest;
      class DescribeAutoScalingConfigurationRequest;
      class DescribeCustomDomainsRequest;
      class DescribeObservabilityConfigurationRequest;
      class DescribeServiceRequest;
      class DescribeVpcConnectorRequest;
      class DescribeVpcIngressConnectionRequest;
      class DisassociateCustomDomainRequest;
      class ListAutoScalingConfigurationsRequest;
      class ListConnectionsRequest;
      class ListObservabilityConfigurationsRequest;
      class ListOperationsRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class ListVpcConnectorsRequest;
      class ListVpcIngressConnectionsRequest;
      class PauseServiceRequest;
      class ResumeServiceRequest;
      class StartDeploymentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateServiceRequest;
      class UpdateVpcIngressConnectionRequest;
      /* End of service model forward declarations required in AppRunnerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateCustomDomainResult, AppRunnerError> AssociateCustomDomainOutcome;
      typedef Aws::Utils::Outcome<CreateAutoScalingConfigurationResult, AppRunnerError> CreateAutoScalingConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, AppRunnerError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateObservabilityConfigurationResult, AppRunnerError> CreateObservabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, AppRunnerError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<CreateVpcConnectorResult, AppRunnerError> CreateVpcConnectorOutcome;
      typedef Aws::Utils::Outcome<CreateVpcIngressConnectionResult, AppRunnerError> CreateVpcIngressConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteAutoScalingConfigurationResult, AppRunnerError> DeleteAutoScalingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, AppRunnerError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteObservabilityConfigurationResult, AppRunnerError> DeleteObservabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, AppRunnerError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcConnectorResult, AppRunnerError> DeleteVpcConnectorOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcIngressConnectionResult, AppRunnerError> DeleteVpcIngressConnectionOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoScalingConfigurationResult, AppRunnerError> DescribeAutoScalingConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomDomainsResult, AppRunnerError> DescribeCustomDomainsOutcome;
      typedef Aws::Utils::Outcome<DescribeObservabilityConfigurationResult, AppRunnerError> DescribeObservabilityConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceResult, AppRunnerError> DescribeServiceOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcConnectorResult, AppRunnerError> DescribeVpcConnectorOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcIngressConnectionResult, AppRunnerError> DescribeVpcIngressConnectionOutcome;
      typedef Aws::Utils::Outcome<DisassociateCustomDomainResult, AppRunnerError> DisassociateCustomDomainOutcome;
      typedef Aws::Utils::Outcome<ListAutoScalingConfigurationsResult, AppRunnerError> ListAutoScalingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListConnectionsResult, AppRunnerError> ListConnectionsOutcome;
      typedef Aws::Utils::Outcome<ListObservabilityConfigurationsResult, AppRunnerError> ListObservabilityConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListOperationsResult, AppRunnerError> ListOperationsOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, AppRunnerError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppRunnerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVpcConnectorsResult, AppRunnerError> ListVpcConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListVpcIngressConnectionsResult, AppRunnerError> ListVpcIngressConnectionsOutcome;
      typedef Aws::Utils::Outcome<PauseServiceResult, AppRunnerError> PauseServiceOutcome;
      typedef Aws::Utils::Outcome<ResumeServiceResult, AppRunnerError> ResumeServiceOutcome;
      typedef Aws::Utils::Outcome<StartDeploymentResult, AppRunnerError> StartDeploymentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppRunnerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppRunnerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceResult, AppRunnerError> UpdateServiceOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcIngressConnectionResult, AppRunnerError> UpdateVpcIngressConnectionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateCustomDomainOutcome> AssociateCustomDomainOutcomeCallable;
      typedef std::future<CreateAutoScalingConfigurationOutcome> CreateAutoScalingConfigurationOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateObservabilityConfigurationOutcome> CreateObservabilityConfigurationOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<CreateVpcConnectorOutcome> CreateVpcConnectorOutcomeCallable;
      typedef std::future<CreateVpcIngressConnectionOutcome> CreateVpcIngressConnectionOutcomeCallable;
      typedef std::future<DeleteAutoScalingConfigurationOutcome> DeleteAutoScalingConfigurationOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteObservabilityConfigurationOutcome> DeleteObservabilityConfigurationOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<DeleteVpcConnectorOutcome> DeleteVpcConnectorOutcomeCallable;
      typedef std::future<DeleteVpcIngressConnectionOutcome> DeleteVpcIngressConnectionOutcomeCallable;
      typedef std::future<DescribeAutoScalingConfigurationOutcome> DescribeAutoScalingConfigurationOutcomeCallable;
      typedef std::future<DescribeCustomDomainsOutcome> DescribeCustomDomainsOutcomeCallable;
      typedef std::future<DescribeObservabilityConfigurationOutcome> DescribeObservabilityConfigurationOutcomeCallable;
      typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
      typedef std::future<DescribeVpcConnectorOutcome> DescribeVpcConnectorOutcomeCallable;
      typedef std::future<DescribeVpcIngressConnectionOutcome> DescribeVpcIngressConnectionOutcomeCallable;
      typedef std::future<DisassociateCustomDomainOutcome> DisassociateCustomDomainOutcomeCallable;
      typedef std::future<ListAutoScalingConfigurationsOutcome> ListAutoScalingConfigurationsOutcomeCallable;
      typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
      typedef std::future<ListObservabilityConfigurationsOutcome> ListObservabilityConfigurationsOutcomeCallable;
      typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVpcConnectorsOutcome> ListVpcConnectorsOutcomeCallable;
      typedef std::future<ListVpcIngressConnectionsOutcome> ListVpcIngressConnectionsOutcomeCallable;
      typedef std::future<PauseServiceOutcome> PauseServiceOutcomeCallable;
      typedef std::future<ResumeServiceOutcome> ResumeServiceOutcomeCallable;
      typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
      typedef std::future<UpdateVpcIngressConnectionOutcome> UpdateVpcIngressConnectionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppRunnerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppRunnerClient*, const Model::AssociateCustomDomainRequest&, const Model::AssociateCustomDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCustomDomainResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateAutoScalingConfigurationRequest&, const Model::CreateAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateObservabilityConfigurationRequest&, const Model::CreateObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateVpcConnectorRequest&, const Model::CreateVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateVpcIngressConnectionRequest&, const Model::CreateVpcIngressConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcIngressConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteAutoScalingConfigurationRequest&, const Model::DeleteAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteObservabilityConfigurationRequest&, const Model::DeleteObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteVpcConnectorRequest&, const Model::DeleteVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteVpcIngressConnectionRequest&, const Model::DeleteVpcIngressConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcIngressConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeAutoScalingConfigurationRequest&, const Model::DescribeAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeCustomDomainsRequest&, const Model::DescribeCustomDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomDomainsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeObservabilityConfigurationRequest&, const Model::DescribeObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeServiceRequest&, const Model::DescribeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeVpcConnectorRequest&, const Model::DescribeVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeVpcIngressConnectionRequest&, const Model::DescribeVpcIngressConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcIngressConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DisassociateCustomDomainRequest&, const Model::DisassociateCustomDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCustomDomainResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListAutoScalingConfigurationsRequest&, const Model::ListAutoScalingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoScalingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListObservabilityConfigurationsRequest&, const Model::ListObservabilityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObservabilityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListVpcConnectorsRequest&, const Model::ListVpcConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcConnectorsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListVpcIngressConnectionsRequest&, const Model::ListVpcIngressConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcIngressConnectionsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::PauseServiceRequest&, const Model::PauseServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ResumeServiceRequest&, const Model::ResumeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::UpdateVpcIngressConnectionRequest&, const Model::UpdateVpcIngressConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcIngressConnectionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppRunner
} // namespace Aws
