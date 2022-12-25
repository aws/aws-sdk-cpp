/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/panorama/PanoramaErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/panorama/PanoramaEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PanoramaClient header */
#include <aws/panorama/model/CreateApplicationInstanceResult.h>
#include <aws/panorama/model/CreateJobForDevicesResult.h>
#include <aws/panorama/model/CreateNodeFromTemplateJobResult.h>
#include <aws/panorama/model/CreatePackageResult.h>
#include <aws/panorama/model/CreatePackageImportJobResult.h>
#include <aws/panorama/model/DeleteDeviceResult.h>
#include <aws/panorama/model/DeletePackageResult.h>
#include <aws/panorama/model/DeregisterPackageVersionResult.h>
#include <aws/panorama/model/DescribeApplicationInstanceResult.h>
#include <aws/panorama/model/DescribeApplicationInstanceDetailsResult.h>
#include <aws/panorama/model/DescribeDeviceResult.h>
#include <aws/panorama/model/DescribeDeviceJobResult.h>
#include <aws/panorama/model/DescribeNodeResult.h>
#include <aws/panorama/model/DescribeNodeFromTemplateJobResult.h>
#include <aws/panorama/model/DescribePackageResult.h>
#include <aws/panorama/model/DescribePackageImportJobResult.h>
#include <aws/panorama/model/DescribePackageVersionResult.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesResult.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesResult.h>
#include <aws/panorama/model/ListApplicationInstancesResult.h>
#include <aws/panorama/model/ListDevicesResult.h>
#include <aws/panorama/model/ListDevicesJobsResult.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsResult.h>
#include <aws/panorama/model/ListNodesResult.h>
#include <aws/panorama/model/ListPackageImportJobsResult.h>
#include <aws/panorama/model/ListPackagesResult.h>
#include <aws/panorama/model/ListTagsForResourceResult.h>
#include <aws/panorama/model/ProvisionDeviceResult.h>
#include <aws/panorama/model/RegisterPackageVersionResult.h>
#include <aws/panorama/model/RemoveApplicationInstanceResult.h>
#include <aws/panorama/model/SignalApplicationInstanceNodeInstancesResult.h>
#include <aws/panorama/model/TagResourceResult.h>
#include <aws/panorama/model/UntagResourceResult.h>
#include <aws/panorama/model/UpdateDeviceMetadataResult.h>
/* End of service model headers required in PanoramaClient header */

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

  namespace Panorama
  {
    using PanoramaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PanoramaEndpointProviderBase = Aws::Panorama::Endpoint::PanoramaEndpointProviderBase;
    using PanoramaEndpointProvider = Aws::Panorama::Endpoint::PanoramaEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PanoramaClient header */
      class CreateApplicationInstanceRequest;
      class CreateJobForDevicesRequest;
      class CreateNodeFromTemplateJobRequest;
      class CreatePackageRequest;
      class CreatePackageImportJobRequest;
      class DeleteDeviceRequest;
      class DeletePackageRequest;
      class DeregisterPackageVersionRequest;
      class DescribeApplicationInstanceRequest;
      class DescribeApplicationInstanceDetailsRequest;
      class DescribeDeviceRequest;
      class DescribeDeviceJobRequest;
      class DescribeNodeRequest;
      class DescribeNodeFromTemplateJobRequest;
      class DescribePackageRequest;
      class DescribePackageImportJobRequest;
      class DescribePackageVersionRequest;
      class ListApplicationInstanceDependenciesRequest;
      class ListApplicationInstanceNodeInstancesRequest;
      class ListApplicationInstancesRequest;
      class ListDevicesRequest;
      class ListDevicesJobsRequest;
      class ListNodeFromTemplateJobsRequest;
      class ListNodesRequest;
      class ListPackageImportJobsRequest;
      class ListPackagesRequest;
      class ListTagsForResourceRequest;
      class ProvisionDeviceRequest;
      class RegisterPackageVersionRequest;
      class RemoveApplicationInstanceRequest;
      class SignalApplicationInstanceNodeInstancesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDeviceMetadataRequest;
      /* End of service model forward declarations required in PanoramaClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationInstanceResult, PanoramaError> CreateApplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateJobForDevicesResult, PanoramaError> CreateJobForDevicesOutcome;
      typedef Aws::Utils::Outcome<CreateNodeFromTemplateJobResult, PanoramaError> CreateNodeFromTemplateJobOutcome;
      typedef Aws::Utils::Outcome<CreatePackageResult, PanoramaError> CreatePackageOutcome;
      typedef Aws::Utils::Outcome<CreatePackageImportJobResult, PanoramaError> CreatePackageImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceResult, PanoramaError> DeleteDeviceOutcome;
      typedef Aws::Utils::Outcome<DeletePackageResult, PanoramaError> DeletePackageOutcome;
      typedef Aws::Utils::Outcome<DeregisterPackageVersionResult, PanoramaError> DeregisterPackageVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationInstanceResult, PanoramaError> DescribeApplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationInstanceDetailsResult, PanoramaError> DescribeApplicationInstanceDetailsOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceResult, PanoramaError> DescribeDeviceOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceJobResult, PanoramaError> DescribeDeviceJobOutcome;
      typedef Aws::Utils::Outcome<DescribeNodeResult, PanoramaError> DescribeNodeOutcome;
      typedef Aws::Utils::Outcome<DescribeNodeFromTemplateJobResult, PanoramaError> DescribeNodeFromTemplateJobOutcome;
      typedef Aws::Utils::Outcome<DescribePackageResult, PanoramaError> DescribePackageOutcome;
      typedef Aws::Utils::Outcome<DescribePackageImportJobResult, PanoramaError> DescribePackageImportJobOutcome;
      typedef Aws::Utils::Outcome<DescribePackageVersionResult, PanoramaError> DescribePackageVersionOutcome;
      typedef Aws::Utils::Outcome<ListApplicationInstanceDependenciesResult, PanoramaError> ListApplicationInstanceDependenciesOutcome;
      typedef Aws::Utils::Outcome<ListApplicationInstanceNodeInstancesResult, PanoramaError> ListApplicationInstanceNodeInstancesOutcome;
      typedef Aws::Utils::Outcome<ListApplicationInstancesResult, PanoramaError> ListApplicationInstancesOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, PanoramaError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListDevicesJobsResult, PanoramaError> ListDevicesJobsOutcome;
      typedef Aws::Utils::Outcome<ListNodeFromTemplateJobsResult, PanoramaError> ListNodeFromTemplateJobsOutcome;
      typedef Aws::Utils::Outcome<ListNodesResult, PanoramaError> ListNodesOutcome;
      typedef Aws::Utils::Outcome<ListPackageImportJobsResult, PanoramaError> ListPackageImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListPackagesResult, PanoramaError> ListPackagesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PanoramaError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ProvisionDeviceResult, PanoramaError> ProvisionDeviceOutcome;
      typedef Aws::Utils::Outcome<RegisterPackageVersionResult, PanoramaError> RegisterPackageVersionOutcome;
      typedef Aws::Utils::Outcome<RemoveApplicationInstanceResult, PanoramaError> RemoveApplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<SignalApplicationInstanceNodeInstancesResult, PanoramaError> SignalApplicationInstanceNodeInstancesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PanoramaError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PanoramaError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceMetadataResult, PanoramaError> UpdateDeviceMetadataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationInstanceOutcome> CreateApplicationInstanceOutcomeCallable;
      typedef std::future<CreateJobForDevicesOutcome> CreateJobForDevicesOutcomeCallable;
      typedef std::future<CreateNodeFromTemplateJobOutcome> CreateNodeFromTemplateJobOutcomeCallable;
      typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
      typedef std::future<CreatePackageImportJobOutcome> CreatePackageImportJobOutcomeCallable;
      typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
      typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
      typedef std::future<DeregisterPackageVersionOutcome> DeregisterPackageVersionOutcomeCallable;
      typedef std::future<DescribeApplicationInstanceOutcome> DescribeApplicationInstanceOutcomeCallable;
      typedef std::future<DescribeApplicationInstanceDetailsOutcome> DescribeApplicationInstanceDetailsOutcomeCallable;
      typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
      typedef std::future<DescribeDeviceJobOutcome> DescribeDeviceJobOutcomeCallable;
      typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
      typedef std::future<DescribeNodeFromTemplateJobOutcome> DescribeNodeFromTemplateJobOutcomeCallable;
      typedef std::future<DescribePackageOutcome> DescribePackageOutcomeCallable;
      typedef std::future<DescribePackageImportJobOutcome> DescribePackageImportJobOutcomeCallable;
      typedef std::future<DescribePackageVersionOutcome> DescribePackageVersionOutcomeCallable;
      typedef std::future<ListApplicationInstanceDependenciesOutcome> ListApplicationInstanceDependenciesOutcomeCallable;
      typedef std::future<ListApplicationInstanceNodeInstancesOutcome> ListApplicationInstanceNodeInstancesOutcomeCallable;
      typedef std::future<ListApplicationInstancesOutcome> ListApplicationInstancesOutcomeCallable;
      typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
      typedef std::future<ListDevicesJobsOutcome> ListDevicesJobsOutcomeCallable;
      typedef std::future<ListNodeFromTemplateJobsOutcome> ListNodeFromTemplateJobsOutcomeCallable;
      typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
      typedef std::future<ListPackageImportJobsOutcome> ListPackageImportJobsOutcomeCallable;
      typedef std::future<ListPackagesOutcome> ListPackagesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ProvisionDeviceOutcome> ProvisionDeviceOutcomeCallable;
      typedef std::future<RegisterPackageVersionOutcome> RegisterPackageVersionOutcomeCallable;
      typedef std::future<RemoveApplicationInstanceOutcome> RemoveApplicationInstanceOutcomeCallable;
      typedef std::future<SignalApplicationInstanceNodeInstancesOutcome> SignalApplicationInstanceNodeInstancesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDeviceMetadataOutcome> UpdateDeviceMetadataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PanoramaClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PanoramaClient*, const Model::CreateApplicationInstanceRequest&, const Model::CreateApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreateJobForDevicesRequest&, const Model::CreateJobForDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobForDevicesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreateNodeFromTemplateJobRequest&, const Model::CreateNodeFromTemplateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeFromTemplateJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreatePackageImportJobRequest&, const Model::CreatePackageImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageImportJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeregisterPackageVersionRequest&, const Model::DeregisterPackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterPackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeApplicationInstanceRequest&, const Model::DescribeApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeApplicationInstanceDetailsRequest&, const Model::DescribeApplicationInstanceDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationInstanceDetailsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeDeviceJobRequest&, const Model::DescribeDeviceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeNodeRequest&, const Model::DescribeNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeNodeFromTemplateJobRequest&, const Model::DescribeNodeFromTemplateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeFromTemplateJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageRequest&, const Model::DescribePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageImportJobRequest&, const Model::DescribePackageImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageImportJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageVersionRequest&, const Model::DescribePackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstanceDependenciesRequest&, const Model::ListApplicationInstanceDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstanceDependenciesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstanceNodeInstancesRequest&, const Model::ListApplicationInstanceNodeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstanceNodeInstancesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstancesRequest&, const Model::ListApplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListDevicesJobsRequest&, const Model::ListDevicesJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListNodeFromTemplateJobsRequest&, const Model::ListNodeFromTemplateJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodeFromTemplateJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListPackageImportJobsRequest&, const Model::ListPackageImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageImportJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListPackagesRequest&, const Model::ListPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ProvisionDeviceRequest&, const Model::ProvisionDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::RegisterPackageVersionRequest&, const Model::RegisterPackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterPackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::RemoveApplicationInstanceRequest&, const Model::RemoveApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::SignalApplicationInstanceNodeInstancesRequest&, const Model::SignalApplicationInstanceNodeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SignalApplicationInstanceNodeInstancesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::UpdateDeviceMetadataRequest&, const Model::UpdateDeviceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceMetadataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Panorama
} // namespace Aws
