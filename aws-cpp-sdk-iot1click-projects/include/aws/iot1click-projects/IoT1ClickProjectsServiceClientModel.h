/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot1click-projects/IoT1ClickProjectsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot1click-projects/IoT1ClickProjectsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoT1ClickProjectsClient header */
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementResult.h>
#include <aws/iot1click-projects/model/CreatePlacementResult.h>
#include <aws/iot1click-projects/model/CreateProjectResult.h>
#include <aws/iot1click-projects/model/DeletePlacementResult.h>
#include <aws/iot1click-projects/model/DeleteProjectResult.h>
#include <aws/iot1click-projects/model/DescribePlacementResult.h>
#include <aws/iot1click-projects/model/DescribeProjectResult.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementResult.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementResult.h>
#include <aws/iot1click-projects/model/ListPlacementsResult.h>
#include <aws/iot1click-projects/model/ListProjectsResult.h>
#include <aws/iot1click-projects/model/ListTagsForResourceResult.h>
#include <aws/iot1click-projects/model/TagResourceResult.h>
#include <aws/iot1click-projects/model/UntagResourceResult.h>
#include <aws/iot1click-projects/model/UpdatePlacementResult.h>
#include <aws/iot1click-projects/model/UpdateProjectResult.h>
/* End of service model headers required in IoT1ClickProjectsClient header */

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

  namespace IoT1ClickProjects
  {
    using IoT1ClickProjectsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoT1ClickProjectsEndpointProviderBase = Aws::IoT1ClickProjects::Endpoint::IoT1ClickProjectsEndpointProviderBase;
    using IoT1ClickProjectsEndpointProvider = Aws::IoT1ClickProjects::Endpoint::IoT1ClickProjectsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoT1ClickProjectsClient header */
      class AssociateDeviceWithPlacementRequest;
      class CreatePlacementRequest;
      class CreateProjectRequest;
      class DeletePlacementRequest;
      class DeleteProjectRequest;
      class DescribePlacementRequest;
      class DescribeProjectRequest;
      class DisassociateDeviceFromPlacementRequest;
      class GetDevicesInPlacementRequest;
      class ListPlacementsRequest;
      class ListProjectsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePlacementRequest;
      class UpdateProjectRequest;
      /* End of service model forward declarations required in IoT1ClickProjectsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateDeviceWithPlacementResult, IoT1ClickProjectsError> AssociateDeviceWithPlacementOutcome;
      typedef Aws::Utils::Outcome<CreatePlacementResult, IoT1ClickProjectsError> CreatePlacementOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, IoT1ClickProjectsError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<DeletePlacementResult, IoT1ClickProjectsError> DeletePlacementOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, IoT1ClickProjectsError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DescribePlacementResult, IoT1ClickProjectsError> DescribePlacementOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectResult, IoT1ClickProjectsError> DescribeProjectOutcome;
      typedef Aws::Utils::Outcome<DisassociateDeviceFromPlacementResult, IoT1ClickProjectsError> DisassociateDeviceFromPlacementOutcome;
      typedef Aws::Utils::Outcome<GetDevicesInPlacementResult, IoT1ClickProjectsError> GetDevicesInPlacementOutcome;
      typedef Aws::Utils::Outcome<ListPlacementsResult, IoT1ClickProjectsError> ListPlacementsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, IoT1ClickProjectsError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoT1ClickProjectsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoT1ClickProjectsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoT1ClickProjectsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePlacementResult, IoT1ClickProjectsError> UpdatePlacementOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, IoT1ClickProjectsError> UpdateProjectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateDeviceWithPlacementOutcome> AssociateDeviceWithPlacementOutcomeCallable;
      typedef std::future<CreatePlacementOutcome> CreatePlacementOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<DeletePlacementOutcome> DeletePlacementOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DescribePlacementOutcome> DescribePlacementOutcomeCallable;
      typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
      typedef std::future<DisassociateDeviceFromPlacementOutcome> DisassociateDeviceFromPlacementOutcomeCallable;
      typedef std::future<GetDevicesInPlacementOutcome> GetDevicesInPlacementOutcomeCallable;
      typedef std::future<ListPlacementsOutcome> ListPlacementsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePlacementOutcome> UpdatePlacementOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoT1ClickProjectsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::AssociateDeviceWithPlacementRequest&, const Model::AssociateDeviceWithPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDeviceWithPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::CreatePlacementRequest&, const Model::CreatePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DeletePlacementRequest&, const Model::DeletePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DescribePlacementRequest&, const Model::DescribePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DisassociateDeviceFromPlacementRequest&, const Model::DisassociateDeviceFromPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDeviceFromPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::GetDevicesInPlacementRequest&, const Model::GetDevicesInPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicesInPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListPlacementsRequest&, const Model::ListPlacementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlacementsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UpdatePlacementRequest&, const Model::UpdatePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoT1ClickProjects
} // namespace Aws
