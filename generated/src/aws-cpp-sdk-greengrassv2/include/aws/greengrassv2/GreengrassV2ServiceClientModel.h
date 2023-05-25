/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/greengrassv2/GreengrassV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/greengrassv2/GreengrassV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GreengrassV2Client header */
#include <aws/greengrassv2/model/AssociateServiceRoleToAccountResult.h>
#include <aws/greengrassv2/model/BatchAssociateClientDeviceWithCoreDeviceResult.h>
#include <aws/greengrassv2/model/BatchDisassociateClientDeviceFromCoreDeviceResult.h>
#include <aws/greengrassv2/model/CancelDeploymentResult.h>
#include <aws/greengrassv2/model/CreateComponentVersionResult.h>
#include <aws/greengrassv2/model/CreateDeploymentResult.h>
#include <aws/greengrassv2/model/DescribeComponentResult.h>
#include <aws/greengrassv2/model/DisassociateServiceRoleFromAccountResult.h>
#include <aws/greengrassv2/model/GetComponentResult.h>
#include <aws/greengrassv2/model/GetComponentVersionArtifactResult.h>
#include <aws/greengrassv2/model/GetConnectivityInfoResult.h>
#include <aws/greengrassv2/model/GetCoreDeviceResult.h>
#include <aws/greengrassv2/model/GetDeploymentResult.h>
#include <aws/greengrassv2/model/GetServiceRoleForAccountResult.h>
#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDeviceResult.h>
#include <aws/greengrassv2/model/ListComponentVersionsResult.h>
#include <aws/greengrassv2/model/ListComponentsResult.h>
#include <aws/greengrassv2/model/ListCoreDevicesResult.h>
#include <aws/greengrassv2/model/ListDeploymentsResult.h>
#include <aws/greengrassv2/model/ListEffectiveDeploymentsResult.h>
#include <aws/greengrassv2/model/ListInstalledComponentsResult.h>
#include <aws/greengrassv2/model/ListTagsForResourceResult.h>
#include <aws/greengrassv2/model/ResolveComponentCandidatesResult.h>
#include <aws/greengrassv2/model/TagResourceResult.h>
#include <aws/greengrassv2/model/UntagResourceResult.h>
#include <aws/greengrassv2/model/UpdateConnectivityInfoResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in GreengrassV2Client header */

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

  namespace GreengrassV2
  {
    using GreengrassV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GreengrassV2EndpointProviderBase = Aws::GreengrassV2::Endpoint::GreengrassV2EndpointProviderBase;
    using GreengrassV2EndpointProvider = Aws::GreengrassV2::Endpoint::GreengrassV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GreengrassV2Client header */
      class AssociateServiceRoleToAccountRequest;
      class BatchAssociateClientDeviceWithCoreDeviceRequest;
      class BatchDisassociateClientDeviceFromCoreDeviceRequest;
      class CancelDeploymentRequest;
      class CreateComponentVersionRequest;
      class CreateDeploymentRequest;
      class DeleteComponentRequest;
      class DeleteCoreDeviceRequest;
      class DeleteDeploymentRequest;
      class DescribeComponentRequest;
      class DisassociateServiceRoleFromAccountRequest;
      class GetComponentRequest;
      class GetComponentVersionArtifactRequest;
      class GetConnectivityInfoRequest;
      class GetCoreDeviceRequest;
      class GetDeploymentRequest;
      class GetServiceRoleForAccountRequest;
      class ListClientDevicesAssociatedWithCoreDeviceRequest;
      class ListComponentVersionsRequest;
      class ListComponentsRequest;
      class ListCoreDevicesRequest;
      class ListDeploymentsRequest;
      class ListEffectiveDeploymentsRequest;
      class ListInstalledComponentsRequest;
      class ListTagsForResourceRequest;
      class ResolveComponentCandidatesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConnectivityInfoRequest;
      /* End of service model forward declarations required in GreengrassV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateServiceRoleToAccountResult, GreengrassV2Error> AssociateServiceRoleToAccountOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateClientDeviceWithCoreDeviceResult, GreengrassV2Error> BatchAssociateClientDeviceWithCoreDeviceOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateClientDeviceFromCoreDeviceResult, GreengrassV2Error> BatchDisassociateClientDeviceFromCoreDeviceOutcome;
      typedef Aws::Utils::Outcome<CancelDeploymentResult, GreengrassV2Error> CancelDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateComponentVersionResult, GreengrassV2Error> CreateComponentVersionOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, GreengrassV2Error> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassV2Error> DeleteComponentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassV2Error> DeleteCoreDeviceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassV2Error> DeleteDeploymentOutcome;
      typedef Aws::Utils::Outcome<DescribeComponentResult, GreengrassV2Error> DescribeComponentOutcome;
      typedef Aws::Utils::Outcome<DisassociateServiceRoleFromAccountResult, GreengrassV2Error> DisassociateServiceRoleFromAccountOutcome;
      typedef Aws::Utils::Outcome<GetComponentResult, GreengrassV2Error> GetComponentOutcome;
      typedef Aws::Utils::Outcome<GetComponentVersionArtifactResult, GreengrassV2Error> GetComponentVersionArtifactOutcome;
      typedef Aws::Utils::Outcome<GetConnectivityInfoResult, GreengrassV2Error> GetConnectivityInfoOutcome;
      typedef Aws::Utils::Outcome<GetCoreDeviceResult, GreengrassV2Error> GetCoreDeviceOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, GreengrassV2Error> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetServiceRoleForAccountResult, GreengrassV2Error> GetServiceRoleForAccountOutcome;
      typedef Aws::Utils::Outcome<ListClientDevicesAssociatedWithCoreDeviceResult, GreengrassV2Error> ListClientDevicesAssociatedWithCoreDeviceOutcome;
      typedef Aws::Utils::Outcome<ListComponentVersionsResult, GreengrassV2Error> ListComponentVersionsOutcome;
      typedef Aws::Utils::Outcome<ListComponentsResult, GreengrassV2Error> ListComponentsOutcome;
      typedef Aws::Utils::Outcome<ListCoreDevicesResult, GreengrassV2Error> ListCoreDevicesOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, GreengrassV2Error> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListEffectiveDeploymentsResult, GreengrassV2Error> ListEffectiveDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListInstalledComponentsResult, GreengrassV2Error> ListInstalledComponentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GreengrassV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ResolveComponentCandidatesResult, GreengrassV2Error> ResolveComponentCandidatesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GreengrassV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GreengrassV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectivityInfoResult, GreengrassV2Error> UpdateConnectivityInfoOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateServiceRoleToAccountOutcome> AssociateServiceRoleToAccountOutcomeCallable;
      typedef std::future<BatchAssociateClientDeviceWithCoreDeviceOutcome> BatchAssociateClientDeviceWithCoreDeviceOutcomeCallable;
      typedef std::future<BatchDisassociateClientDeviceFromCoreDeviceOutcome> BatchDisassociateClientDeviceFromCoreDeviceOutcomeCallable;
      typedef std::future<CancelDeploymentOutcome> CancelDeploymentOutcomeCallable;
      typedef std::future<CreateComponentVersionOutcome> CreateComponentVersionOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
      typedef std::future<DeleteCoreDeviceOutcome> DeleteCoreDeviceOutcomeCallable;
      typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
      typedef std::future<DescribeComponentOutcome> DescribeComponentOutcomeCallable;
      typedef std::future<DisassociateServiceRoleFromAccountOutcome> DisassociateServiceRoleFromAccountOutcomeCallable;
      typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
      typedef std::future<GetComponentVersionArtifactOutcome> GetComponentVersionArtifactOutcomeCallable;
      typedef std::future<GetConnectivityInfoOutcome> GetConnectivityInfoOutcomeCallable;
      typedef std::future<GetCoreDeviceOutcome> GetCoreDeviceOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetServiceRoleForAccountOutcome> GetServiceRoleForAccountOutcomeCallable;
      typedef std::future<ListClientDevicesAssociatedWithCoreDeviceOutcome> ListClientDevicesAssociatedWithCoreDeviceOutcomeCallable;
      typedef std::future<ListComponentVersionsOutcome> ListComponentVersionsOutcomeCallable;
      typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
      typedef std::future<ListCoreDevicesOutcome> ListCoreDevicesOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListEffectiveDeploymentsOutcome> ListEffectiveDeploymentsOutcomeCallable;
      typedef std::future<ListInstalledComponentsOutcome> ListInstalledComponentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ResolveComponentCandidatesOutcome> ResolveComponentCandidatesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectivityInfoOutcome> UpdateConnectivityInfoOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GreengrassV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const GreengrassV2Client*, const Model::AssociateServiceRoleToAccountRequest&, const Model::AssociateServiceRoleToAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateServiceRoleToAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::BatchAssociateClientDeviceWithCoreDeviceRequest&, const Model::BatchAssociateClientDeviceWithCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateClientDeviceWithCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::BatchDisassociateClientDeviceFromCoreDeviceRequest&, const Model::BatchDisassociateClientDeviceFromCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateClientDeviceFromCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::CancelDeploymentRequest&, const Model::CancelDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::CreateComponentVersionRequest&, const Model::CreateComponentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DeleteCoreDeviceRequest&, const Model::DeleteCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DescribeComponentRequest&, const Model::DescribeComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::DisassociateServiceRoleFromAccountRequest&, const Model::DisassociateServiceRoleFromAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateServiceRoleFromAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetComponentVersionArtifactRequest&, const Model::GetComponentVersionArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentVersionArtifactResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetConnectivityInfoRequest&, const Model::GetConnectivityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectivityInfoResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetCoreDeviceRequest&, const Model::GetCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::GetServiceRoleForAccountRequest&, const Model::GetServiceRoleForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceRoleForAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListClientDevicesAssociatedWithCoreDeviceRequest&, const Model::ListClientDevicesAssociatedWithCoreDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClientDevicesAssociatedWithCoreDeviceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListComponentVersionsRequest&, const Model::ListComponentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListCoreDevicesRequest&, const Model::ListCoreDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreDevicesResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListEffectiveDeploymentsRequest&, const Model::ListEffectiveDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEffectiveDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListInstalledComponentsRequest&, const Model::ListInstalledComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstalledComponentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::ResolveComponentCandidatesRequest&, const Model::ResolveComponentCandidatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveComponentCandidatesResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassV2Client*, const Model::UpdateConnectivityInfoRequest&, const Model::UpdateConnectivityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectivityInfoResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GreengrassV2
} // namespace Aws
