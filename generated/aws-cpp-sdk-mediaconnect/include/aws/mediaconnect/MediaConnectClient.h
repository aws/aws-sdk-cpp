﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/AddFlowMediaStreamsResult.h>
#include <aws/mediaconnect/model/AddFlowOutputsResult.h>
#include <aws/mediaconnect/model/AddFlowSourcesResult.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesResult.h>
#include <aws/mediaconnect/model/CreateFlowResult.h>
#include <aws/mediaconnect/model/DeleteFlowResult.h>
#include <aws/mediaconnect/model/DescribeFlowResult.h>
#include <aws/mediaconnect/model/DescribeOfferingResult.h>
#include <aws/mediaconnect/model/DescribeReservationResult.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsResult.h>
#include <aws/mediaconnect/model/ListEntitlementsResult.h>
#include <aws/mediaconnect/model/ListFlowsResult.h>
#include <aws/mediaconnect/model/ListOfferingsResult.h>
#include <aws/mediaconnect/model/ListReservationsResult.h>
#include <aws/mediaconnect/model/ListTagsForResourceResult.h>
#include <aws/mediaconnect/model/PurchaseOfferingResult.h>
#include <aws/mediaconnect/model/RemoveFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/RemoveFlowOutputResult.h>
#include <aws/mediaconnect/model/RemoveFlowSourceResult.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceResult.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementResult.h>
#include <aws/mediaconnect/model/StartFlowResult.h>
#include <aws/mediaconnect/model/StopFlowResult.h>
#include <aws/mediaconnect/model/UpdateFlowResult.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementResult.h>
#include <aws/mediaconnect/model/UpdateFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/UpdateFlowOutputResult.h>
#include <aws/mediaconnect/model/UpdateFlowSourceResult.h>
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

namespace MediaConnect
{

namespace Model
{
        class AddFlowMediaStreamsRequest;
        class AddFlowOutputsRequest;
        class AddFlowSourcesRequest;
        class AddFlowVpcInterfacesRequest;
        class CreateFlowRequest;
        class DeleteFlowRequest;
        class DescribeFlowRequest;
        class DescribeOfferingRequest;
        class DescribeReservationRequest;
        class GrantFlowEntitlementsRequest;
        class ListEntitlementsRequest;
        class ListFlowsRequest;
        class ListOfferingsRequest;
        class ListReservationsRequest;
        class ListTagsForResourceRequest;
        class PurchaseOfferingRequest;
        class RemoveFlowMediaStreamRequest;
        class RemoveFlowOutputRequest;
        class RemoveFlowSourceRequest;
        class RemoveFlowVpcInterfaceRequest;
        class RevokeFlowEntitlementRequest;
        class StartFlowRequest;
        class StopFlowRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateFlowRequest;
        class UpdateFlowEntitlementRequest;
        class UpdateFlowMediaStreamRequest;
        class UpdateFlowOutputRequest;
        class UpdateFlowSourceRequest;

        typedef Aws::Utils::Outcome<AddFlowMediaStreamsResult, MediaConnectError> AddFlowMediaStreamsOutcome;
        typedef Aws::Utils::Outcome<AddFlowOutputsResult, MediaConnectError> AddFlowOutputsOutcome;
        typedef Aws::Utils::Outcome<AddFlowSourcesResult, MediaConnectError> AddFlowSourcesOutcome;
        typedef Aws::Utils::Outcome<AddFlowVpcInterfacesResult, MediaConnectError> AddFlowVpcInterfacesOutcome;
        typedef Aws::Utils::Outcome<CreateFlowResult, MediaConnectError> CreateFlowOutcome;
        typedef Aws::Utils::Outcome<DeleteFlowResult, MediaConnectError> DeleteFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeFlowResult, MediaConnectError> DescribeFlowOutcome;
        typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaConnectError> DescribeOfferingOutcome;
        typedef Aws::Utils::Outcome<DescribeReservationResult, MediaConnectError> DescribeReservationOutcome;
        typedef Aws::Utils::Outcome<GrantFlowEntitlementsResult, MediaConnectError> GrantFlowEntitlementsOutcome;
        typedef Aws::Utils::Outcome<ListEntitlementsResult, MediaConnectError> ListEntitlementsOutcome;
        typedef Aws::Utils::Outcome<ListFlowsResult, MediaConnectError> ListFlowsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingsResult, MediaConnectError> ListOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListReservationsResult, MediaConnectError> ListReservationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaConnectError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaConnectError> PurchaseOfferingOutcome;
        typedef Aws::Utils::Outcome<RemoveFlowMediaStreamResult, MediaConnectError> RemoveFlowMediaStreamOutcome;
        typedef Aws::Utils::Outcome<RemoveFlowOutputResult, MediaConnectError> RemoveFlowOutputOutcome;
        typedef Aws::Utils::Outcome<RemoveFlowSourceResult, MediaConnectError> RemoveFlowSourceOutcome;
        typedef Aws::Utils::Outcome<RemoveFlowVpcInterfaceResult, MediaConnectError> RemoveFlowVpcInterfaceOutcome;
        typedef Aws::Utils::Outcome<RevokeFlowEntitlementResult, MediaConnectError> RevokeFlowEntitlementOutcome;
        typedef Aws::Utils::Outcome<StartFlowResult, MediaConnectError> StartFlowOutcome;
        typedef Aws::Utils::Outcome<StopFlowResult, MediaConnectError> StopFlowOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowResult, MediaConnectError> UpdateFlowOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowEntitlementResult, MediaConnectError> UpdateFlowEntitlementOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowMediaStreamResult, MediaConnectError> UpdateFlowMediaStreamOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowOutputResult, MediaConnectError> UpdateFlowOutputOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowSourceResult, MediaConnectError> UpdateFlowSourceOutcome;

        typedef std::future<AddFlowMediaStreamsOutcome> AddFlowMediaStreamsOutcomeCallable;
        typedef std::future<AddFlowOutputsOutcome> AddFlowOutputsOutcomeCallable;
        typedef std::future<AddFlowSourcesOutcome> AddFlowSourcesOutcomeCallable;
        typedef std::future<AddFlowVpcInterfacesOutcome> AddFlowVpcInterfacesOutcomeCallable;
        typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
        typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
        typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
        typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
        typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
        typedef std::future<GrantFlowEntitlementsOutcome> GrantFlowEntitlementsOutcomeCallable;
        typedef std::future<ListEntitlementsOutcome> ListEntitlementsOutcomeCallable;
        typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
        typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
        typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
        typedef std::future<RemoveFlowMediaStreamOutcome> RemoveFlowMediaStreamOutcomeCallable;
        typedef std::future<RemoveFlowOutputOutcome> RemoveFlowOutputOutcomeCallable;
        typedef std::future<RemoveFlowSourceOutcome> RemoveFlowSourceOutcomeCallable;
        typedef std::future<RemoveFlowVpcInterfaceOutcome> RemoveFlowVpcInterfaceOutcomeCallable;
        typedef std::future<RevokeFlowEntitlementOutcome> RevokeFlowEntitlementOutcomeCallable;
        typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
        typedef std::future<StopFlowOutcome> StopFlowOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
        typedef std::future<UpdateFlowEntitlementOutcome> UpdateFlowEntitlementOutcomeCallable;
        typedef std::future<UpdateFlowMediaStreamOutcome> UpdateFlowMediaStreamOutcomeCallable;
        typedef std::future<UpdateFlowOutputOutcome> UpdateFlowOutputOutcomeCallable;
        typedef std::future<UpdateFlowSourceOutcome> UpdateFlowSourceOutcomeCallable;
} // namespace Model

  class MediaConnectClient;

    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowMediaStreamsRequest&, const Model::AddFlowMediaStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowMediaStreamsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowOutputsRequest&, const Model::AddFlowOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowOutputsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowSourcesRequest&, const Model::AddFlowSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowVpcInterfacesRequest&, const Model::AddFlowVpcInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowVpcInterfacesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeFlowRequest&, const Model::DescribeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::GrantFlowEntitlementsRequest&, const Model::GrantFlowEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantFlowEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListEntitlementsRequest&, const Model::ListEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowMediaStreamRequest&, const Model::RemoveFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowOutputRequest&, const Model::RemoveFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowSourceRequest&, const Model::RemoveFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowVpcInterfaceRequest&, const Model::RemoveFlowVpcInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowVpcInterfaceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RevokeFlowEntitlementRequest&, const Model::RevokeFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StartFlowRequest&, const Model::StartFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StopFlowRequest&, const Model::StopFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowEntitlementRequest&, const Model::UpdateFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowMediaStreamRequest&, const Model::UpdateFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowOutputRequest&, const Model::UpdateFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowSourceRequest&, const Model::UpdateFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowSourceResponseReceivedHandler;

  /**
   * API for AWS Elemental MediaConnect
   */
  class AWS_MEDIACONNECT_API MediaConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaConnectClient();


        /**
         * Adds media streams to an existing flow. After you add a media stream to a flow,
         * you can associate it with a source and/or an output that uses the ST 2110 JPEG
         * XS or CDI protocol.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowMediaStreamsOutcome AddFlowMediaStreams(const Model::AddFlowMediaStreamsRequest& request) const;

        /**
         * Adds media streams to an existing flow. After you add a media stream to a flow,
         * you can associate it with a source and/or an output that uses the ST 2110 JPEG
         * XS or CDI protocol.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowMediaStreamsOutcomeCallable AddFlowMediaStreamsCallable(const Model::AddFlowMediaStreamsRequest& request) const;

        /**
         * Adds media streams to an existing flow. After you add a media stream to a flow,
         * you can associate it with a source and/or an output that uses the ST 2110 JPEG
         * XS or CDI protocol.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowMediaStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowMediaStreamsAsync(const Model::AddFlowMediaStreamsRequest& request, const AddFlowMediaStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds outputs to an existing flow. You can create up to 50 outputs per
         * flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowOutputsOutcome AddFlowOutputs(const Model::AddFlowOutputsRequest& request) const;

        /**
         * Adds outputs to an existing flow. You can create up to 50 outputs per
         * flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowOutputsOutcomeCallable AddFlowOutputsCallable(const Model::AddFlowOutputsRequest& request) const;

        /**
         * Adds outputs to an existing flow. You can create up to 50 outputs per
         * flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowOutputs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowOutputsAsync(const Model::AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds Sources to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowSourcesOutcome AddFlowSources(const Model::AddFlowSourcesRequest& request) const;

        /**
         * Adds Sources to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowSourcesOutcomeCallable AddFlowSourcesCallable(const Model::AddFlowSourcesRequest& request) const;

        /**
         * Adds Sources to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowSourcesAsync(const Model::AddFlowSourcesRequest& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds VPC interfaces to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowVpcInterfacesOutcome AddFlowVpcInterfaces(const Model::AddFlowVpcInterfacesRequest& request) const;

        /**
         * Adds VPC interfaces to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowVpcInterfacesOutcomeCallable AddFlowVpcInterfacesCallable(const Model::AddFlowVpcInterfacesRequest& request) const;

        /**
         * Adds VPC interfaces to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowVpcInterfacesAsync(const Model::AddFlowVpcInterfacesRequest& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new flow. The request must include one source. The request optionally
         * can include outputs (up to 50) and entitlements (up to 50).<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest& request) const;

        /**
         * Creates a new flow. The request must include one source. The request optionally
         * can include outputs (up to 50) and entitlements (up to 50).<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request) const;

        /**
         * Creates a new flow. The request must include one source. The request optionally
         * can include outputs (up to 50) and entitlements (up to 50).<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a flow. Before you can delete a flow, you must stop the flow.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowOutcome DeleteFlow(const Model::DeleteFlowRequest& request) const;

        /**
         * Deletes a flow. Before you can delete a flow, you must stop the flow.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const Model::DeleteFlowRequest& request) const;

        /**
         * Deletes a flow. Before you can delete a flow, you must stop the flow.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DeleteFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays the details of a flow. The response includes the flow ARN, name, and
         * Availability Zone, as well as details about the source, outputs, and
         * entitlements.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest& request) const;

        /**
         * Displays the details of a flow. The response includes the flow ARN, name, and
         * Availability Zone, as well as details about the source, outputs, and
         * entitlements.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request) const;

        /**
         * Displays the details of a flow. The response includes the flow ARN, name, and
         * Availability Zone, as well as details about the source, outputs, and
         * entitlements.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays the details of an offering. The response includes the offering
         * description, duration, outbound bandwidth, price, and Amazon Resource Name
         * (ARN).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * Displays the details of an offering. The response includes the offering
         * description, duration, outbound bandwidth, price, and Amazon Resource Name
         * (ARN).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const Model::DescribeOfferingRequest& request) const;

        /**
         * Displays the details of an offering. The response includes the offering
         * description, duration, outbound bandwidth, price, and Amazon Resource Name
         * (ARN).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOfferingAsync(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays the details of a reservation. The response includes the reservation
         * name, state, start date and time, and the details of the offering that make up
         * the rest of the reservation (such as price, duration, and outbound
         * bandwidth).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * Displays the details of a reservation. The response includes the reservation
         * name, state, start date and time, and the details of the offering that make up
         * the rest of the reservation (such as price, duration, and outbound
         * bandwidth).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const Model::DescribeReservationRequest& request) const;

        /**
         * Displays the details of a reservation. The response includes the reservation
         * name, state, start date and time, and the details of the offering that make up
         * the rest of the reservation (such as price, duration, and outbound
         * bandwidth).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservationAsync(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Grants entitlements to an existing flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantFlowEntitlementsOutcome GrantFlowEntitlements(const Model::GrantFlowEntitlementsRequest& request) const;

        /**
         * Grants entitlements to an existing flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantFlowEntitlementsOutcomeCallable GrantFlowEntitlementsCallable(const Model::GrantFlowEntitlementsRequest& request) const;

        /**
         * Grants entitlements to an existing flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GrantFlowEntitlementsAsync(const Model::GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays a list of all entitlements that have been granted to this account. This
         * request returns 20 results per page.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitlementsOutcome ListEntitlements(const Model::ListEntitlementsRequest& request) const;

        /**
         * Displays a list of all entitlements that have been granted to this account. This
         * request returns 20 results per page.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListEntitlements">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitlementsOutcomeCallable ListEntitlementsCallable(const Model::ListEntitlementsRequest& request) const;

        /**
         * Displays a list of all entitlements that have been granted to this account. This
         * request returns 20 results per page.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListEntitlements">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitlementsAsync(const Model::ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays a list of flows that are associated with this account. This request
         * returns a paginated result.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowsOutcome ListFlows(const Model::ListFlowsRequest& request) const;

        /**
         * Displays a list of flows that are associated with this account. This request
         * returns a paginated result.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListFlows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowsOutcomeCallable ListFlowsCallable(const Model::ListFlowsRequest& request) const;

        /**
         * Displays a list of flows that are associated with this account. This request
         * returns a paginated result.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListFlows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFlowsAsync(const Model::ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays a list of all offerings that are available to this account in the
         * current AWS Region. If you have an active reservation (which means you've
         * purchased an offering that has already started and hasn't expired yet), your
         * account isn't eligible for other offerings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * Displays a list of all offerings that are available to this account in the
         * current AWS Region. If you have an active reservation (which means you've
         * purchased an offering that has already started and hasn't expired yet), your
         * account isn't eligible for other offerings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * Displays a list of all offerings that are available to this account in the
         * current AWS Region. If you have an active reservation (which means you've
         * purchased an offering that has already started and hasn't expired yet), your
         * account isn't eligible for other offerings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Displays a list of all reservations that have been purchased by this account in
         * the current AWS Region. This list includes all reservations in all states (such
         * as active and expired).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * Displays a list of all reservations that have been purchased by this account in
         * the current AWS Region. This list includes all reservations in all states (such
         * as active and expired).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReservationsOutcomeCallable ListReservationsCallable(const Model::ListReservationsRequest& request) const;

        /**
         * Displays a list of all reservations that have been purchased by this account in
         * the current AWS Region. This list includes all reservations in all states (such
         * as active and expired).<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReservationsAsync(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List all tags on an AWS Elemental MediaConnect resource<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * List all tags on an AWS Elemental MediaConnect resource<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * List all tags on an AWS Elemental MediaConnect resource<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Submits a request to purchase an offering. If you already have an active
         * reservation, you can't purchase another offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Submits a request to purchase an offering. If you already have an active
         * reservation, you can't purchase another offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Submits a request to purchase an offering. If you already have an active
         * reservation, you can't purchase another offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes a media stream from a flow. This action is only available if the media
         * stream is not associated with a source or output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowMediaStream">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowMediaStreamOutcome RemoveFlowMediaStream(const Model::RemoveFlowMediaStreamRequest& request) const;

        /**
         * Removes a media stream from a flow. This action is only available if the media
         * stream is not associated with a source or output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowMediaStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowMediaStreamOutcomeCallable RemoveFlowMediaStreamCallable(const Model::RemoveFlowMediaStreamRequest& request) const;

        /**
         * Removes a media stream from a flow. This action is only available if the media
         * stream is not associated with a source or output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowMediaStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFlowMediaStreamAsync(const Model::RemoveFlowMediaStreamRequest& request, const RemoveFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes an output from an existing flow. This request can be made only on an
         * output that does not have an entitlement associated with it. If the output has
         * an entitlement, you must revoke the entitlement instead. When an entitlement is
         * revoked from a flow, the service automatically removes the associated
         * output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowOutputOutcome RemoveFlowOutput(const Model::RemoveFlowOutputRequest& request) const;

        /**
         * Removes an output from an existing flow. This request can be made only on an
         * output that does not have an entitlement associated with it. If the output has
         * an entitlement, you must revoke the entitlement instead. When an entitlement is
         * revoked from a flow, the service automatically removes the associated
         * output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowOutputOutcomeCallable RemoveFlowOutputCallable(const Model::RemoveFlowOutputRequest& request) const;

        /**
         * Removes an output from an existing flow. This request can be made only on an
         * output that does not have an entitlement associated with it. If the output has
         * an entitlement, you must revoke the entitlement instead. When an entitlement is
         * revoked from a flow, the service automatically removes the associated
         * output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFlowOutputAsync(const Model::RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes a source from an existing flow. This request can be made only if there
         * is more than one source on the flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowSource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowSourceOutcome RemoveFlowSource(const Model::RemoveFlowSourceRequest& request) const;

        /**
         * Removes a source from an existing flow. This request can be made only if there
         * is more than one source on the flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowSourceOutcomeCallable RemoveFlowSourceCallable(const Model::RemoveFlowSourceRequest& request) const;

        /**
         * Removes a source from an existing flow. This request can be made only if there
         * is more than one source on the flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFlowSourceAsync(const Model::RemoveFlowSourceRequest& request, const RemoveFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes a VPC Interface from an existing flow. This request can be made only on
         * a VPC interface that does not have a Source or Output associated with it. If the
         * VPC interface is referenced by a Source or Output, you must first delete or
         * update the Source or Output to no longer reference the VPC interface.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowVpcInterface">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFlowVpcInterfaceOutcome RemoveFlowVpcInterface(const Model::RemoveFlowVpcInterfaceRequest& request) const;

        /**
         * Removes a VPC Interface from an existing flow. This request can be made only on
         * a VPC interface that does not have a Source or Output associated with it. If the
         * VPC interface is referenced by a Source or Output, you must first delete or
         * update the Source or Output to no longer reference the VPC interface.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowVpcInterface">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowVpcInterfaceOutcomeCallable RemoveFlowVpcInterfaceCallable(const Model::RemoveFlowVpcInterfaceRequest& request) const;

        /**
         * Removes a VPC Interface from an existing flow. This request can be made only on
         * a VPC interface that does not have a Source or Output associated with it. If the
         * VPC interface is referenced by a Source or Output, you must first delete or
         * update the Source or Output to no longer reference the VPC interface.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RemoveFlowVpcInterface">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveFlowVpcInterfaceAsync(const Model::RemoveFlowVpcInterfaceRequest& request, const RemoveFlowVpcInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Revokes an entitlement from a flow. Once an entitlement is revoked, the content
         * becomes unavailable to the subscriber and the associated output is
         * removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RevokeFlowEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeFlowEntitlementOutcome RevokeFlowEntitlement(const Model::RevokeFlowEntitlementRequest& request) const;

        /**
         * Revokes an entitlement from a flow. Once an entitlement is revoked, the content
         * becomes unavailable to the subscriber and the associated output is
         * removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RevokeFlowEntitlement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeFlowEntitlementOutcomeCallable RevokeFlowEntitlementCallable(const Model::RevokeFlowEntitlementRequest& request) const;

        /**
         * Revokes an entitlement from a flow. Once an entitlement is revoked, the content
         * becomes unavailable to the subscriber and the associated output is
         * removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RevokeFlowEntitlement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeFlowEntitlementAsync(const Model::RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

        /**
         * Starts a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request) const;

        /**
         * Starts a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFlowOutcome StopFlow(const Model::StopFlowRequest& request) const;

        /**
         * Stops a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFlowOutcomeCallable StopFlowCallable(const Model::StopFlowRequest& request) const;

        /**
         * Stops a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFlowAsync(const Model::StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Associates the specified tags to a resource with the specified resourceArn. If
         * existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * Associates the specified tags to a resource with the specified resourceArn. If
         * existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * Associates the specified tags to a resource with the specified resourceArn. If
         * existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes specified tags from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * Deletes specified tags from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * Deletes specified tags from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * Updates flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const Model::UpdateFlowRequest& request) const;

        /**
         * Updates flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowAsync(const Model::UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * You can change an entitlement's description, subscribers, and encryption. If you
         * change the subscribers, the service will remove the outputs that are are used by
         * the subscribers that are removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowEntitlementOutcome UpdateFlowEntitlement(const Model::UpdateFlowEntitlementRequest& request) const;

        /**
         * You can change an entitlement's description, subscribers, and encryption. If you
         * change the subscribers, the service will remove the outputs that are are used by
         * the subscribers that are removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowEntitlementOutcomeCallable UpdateFlowEntitlementCallable(const Model::UpdateFlowEntitlementRequest& request) const;

        /**
         * You can change an entitlement's description, subscribers, and encryption. If you
         * change the subscribers, the service will remove the outputs that are are used by
         * the subscribers that are removed.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowEntitlementAsync(const Model::UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing media stream.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowMediaStreamOutcome UpdateFlowMediaStream(const Model::UpdateFlowMediaStreamRequest& request) const;

        /**
         * Updates an existing media stream.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowMediaStreamOutcomeCallable UpdateFlowMediaStreamCallable(const Model::UpdateFlowMediaStreamRequest& request) const;

        /**
         * Updates an existing media stream.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowMediaStreamAsync(const Model::UpdateFlowMediaStreamRequest& request, const UpdateFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing flow output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutputOutcome UpdateFlowOutput(const Model::UpdateFlowOutputRequest& request) const;

        /**
         * Updates an existing flow output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutputOutcomeCallable UpdateFlowOutputCallable(const Model::UpdateFlowOutputRequest& request) const;

        /**
         * Updates an existing flow output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowOutputAsync(const Model::UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the source of a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowSourceOutcome UpdateFlowSource(const Model::UpdateFlowSourceRequest& request) const;

        /**
         * Updates the source of a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowSourceOutcomeCallable UpdateFlowSourceCallable(const Model::UpdateFlowSourceRequest& request) const;

        /**
         * Updates the source of a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowSourceAsync(const Model::UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddFlowMediaStreamsAsyncHelper(const Model::AddFlowMediaStreamsRequest& request, const AddFlowMediaStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddFlowOutputsAsyncHelper(const Model::AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddFlowSourcesAsyncHelper(const Model::AddFlowSourcesRequest& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddFlowVpcInterfacesAsyncHelper(const Model::AddFlowVpcInterfacesRequest& request, const AddFlowVpcInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFlowAsyncHelper(const Model::CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFlowAsyncHelper(const Model::DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFlowAsyncHelper(const Model::DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOfferingAsyncHelper(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservationAsyncHelper(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GrantFlowEntitlementsAsyncHelper(const Model::GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitlementsAsyncHelper(const Model::ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFlowsAsyncHelper(const Model::ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingsAsyncHelper(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReservationsAsyncHelper(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseOfferingAsyncHelper(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFlowMediaStreamAsyncHelper(const Model::RemoveFlowMediaStreamRequest& request, const RemoveFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFlowOutputAsyncHelper(const Model::RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFlowSourceAsyncHelper(const Model::RemoveFlowSourceRequest& request, const RemoveFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveFlowVpcInterfaceAsyncHelper(const Model::RemoveFlowVpcInterfaceRequest& request, const RemoveFlowVpcInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeFlowEntitlementAsyncHelper(const Model::RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFlowAsyncHelper(const Model::StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopFlowAsyncHelper(const Model::StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowAsyncHelper(const Model::UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowEntitlementAsyncHelper(const Model::UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowMediaStreamAsyncHelper(const Model::UpdateFlowMediaStreamRequest& request, const UpdateFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowOutputAsyncHelper(const Model::UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowSourceAsyncHelper(const Model::UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaConnect
} // namespace Aws
