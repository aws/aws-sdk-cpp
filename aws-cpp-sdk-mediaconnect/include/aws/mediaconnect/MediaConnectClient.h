/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/MediaConnectServiceClientModel.h>

namespace Aws
{
namespace MediaConnect
{
  /**
   * API for AWS Elemental MediaConnect
   */
  class AWS_MEDIACONNECT_API MediaConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration(),
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG),
                           const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG),
                           const Aws::MediaConnect::MediaConnectClientConfiguration& clientConfiguration = Aws::MediaConnect::MediaConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for AddFlowMediaStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowMediaStreamsOutcomeCallable AddFlowMediaStreamsCallable(const Model::AddFlowMediaStreamsRequest& request) const;

        /**
         * An Async wrapper for AddFlowMediaStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AddFlowOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowOutputsOutcomeCallable AddFlowOutputsCallable(const Model::AddFlowOutputsRequest& request) const;

        /**
         * An Async wrapper for AddFlowOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowOutputsAsync(const Model::AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds Sources to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowSources">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowSourcesOutcome AddFlowSources(const Model::AddFlowSourcesRequest& request) const;

        /**
         * A Callable wrapper for AddFlowSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowSourcesOutcomeCallable AddFlowSourcesCallable(const Model::AddFlowSourcesRequest& request) const;

        /**
         * An Async wrapper for AddFlowSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddFlowSourcesAsync(const Model::AddFlowSourcesRequest& request, const AddFlowSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Adds VPC interfaces to flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfaces">AWS
         * API Reference</a></p>
         */
        virtual Model::AddFlowVpcInterfacesOutcome AddFlowVpcInterfaces(const Model::AddFlowVpcInterfacesRequest& request) const;

        /**
         * A Callable wrapper for AddFlowVpcInterfaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddFlowVpcInterfacesOutcomeCallable AddFlowVpcInterfacesCallable(const Model::AddFlowVpcInterfacesRequest& request) const;

        /**
         * An Async wrapper for AddFlowVpcInterfaces that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request) const;

        /**
         * An Async wrapper for CreateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowOutcomeCallable DeleteFlowCallable(const Model::DeleteFlowRequest& request) const;

        /**
         * An Async wrapper for DeleteFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request) const;

        /**
         * An Async wrapper for DescribeFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const Model::DescribeOfferingRequest& request) const;

        /**
         * An Async wrapper for DescribeOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const Model::DescribeReservationRequest& request) const;

        /**
         * An Async wrapper for DescribeReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservationAsync(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Grants entitlements to an existing flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantFlowEntitlementsOutcome GrantFlowEntitlements(const Model::GrantFlowEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for GrantFlowEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantFlowEntitlementsOutcomeCallable GrantFlowEntitlementsCallable(const Model::GrantFlowEntitlementsRequest& request) const;

        /**
         * An Async wrapper for GrantFlowEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitlementsOutcomeCallable ListEntitlementsCallable(const Model::ListEntitlementsRequest& request) const;

        /**
         * An Async wrapper for ListEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowsOutcomeCallable ListFlowsCallable(const Model::ListFlowsRequest& request) const;

        /**
         * An Async wrapper for ListFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReservationsOutcomeCallable ListReservationsCallable(const Model::ListReservationsRequest& request) const;

        /**
         * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowMediaStreamOutcomeCallable RemoveFlowMediaStreamCallable(const Model::RemoveFlowMediaStreamRequest& request) const;

        /**
         * An Async wrapper for RemoveFlowMediaStream that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveFlowOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowOutputOutcomeCallable RemoveFlowOutputCallable(const Model::RemoveFlowOutputRequest& request) const;

        /**
         * An Async wrapper for RemoveFlowOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveFlowSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowSourceOutcomeCallable RemoveFlowSourceCallable(const Model::RemoveFlowSourceRequest& request) const;

        /**
         * An Async wrapper for RemoveFlowSource that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveFlowVpcInterface that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveFlowVpcInterfaceOutcomeCallable RemoveFlowVpcInterfaceCallable(const Model::RemoveFlowVpcInterfaceRequest& request) const;

        /**
         * An Async wrapper for RemoveFlowVpcInterface that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RevokeFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeFlowEntitlementOutcomeCallable RevokeFlowEntitlementCallable(const Model::RevokeFlowEntitlementRequest& request) const;

        /**
         * An Async wrapper for RevokeFlowEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeFlowEntitlementAsync(const Model::RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StartFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowOutcome StartFlow(const Model::StartFlowRequest& request) const;

        /**
         * A Callable wrapper for StartFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request) const;

        /**
         * An Async wrapper for StartFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StopFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFlowOutcome StopFlow(const Model::StopFlowRequest& request) const;

        /**
         * A Callable wrapper for StopFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFlowOutcomeCallable StopFlowCallable(const Model::StopFlowRequest& request) const;

        /**
         * An Async wrapper for StopFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes specified tags from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates flow<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutcome UpdateFlow(const Model::UpdateFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutcomeCallable UpdateFlowCallable(const Model::UpdateFlowRequest& request) const;

        /**
         * An Async wrapper for UpdateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateFlowEntitlement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowEntitlementOutcomeCallable UpdateFlowEntitlementCallable(const Model::UpdateFlowEntitlementRequest& request) const;

        /**
         * An Async wrapper for UpdateFlowEntitlement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowEntitlementAsync(const Model::UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing media stream.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowMediaStreamOutcome UpdateFlowMediaStream(const Model::UpdateFlowMediaStreamRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowMediaStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowMediaStreamOutcomeCallable UpdateFlowMediaStreamCallable(const Model::UpdateFlowMediaStreamRequest& request) const;

        /**
         * An Async wrapper for UpdateFlowMediaStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowMediaStreamAsync(const Model::UpdateFlowMediaStreamRequest& request, const UpdateFlowMediaStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an existing flow output.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowOutputOutcome UpdateFlowOutput(const Model::UpdateFlowOutputRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowOutputOutcomeCallable UpdateFlowOutputCallable(const Model::UpdateFlowOutputRequest& request) const;

        /**
         * An Async wrapper for UpdateFlowOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowOutputAsync(const Model::UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the source of a flow.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowSourceOutcome UpdateFlowSource(const Model::UpdateFlowSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateFlowSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowSourceOutcomeCallable UpdateFlowSourceCallable(const Model::UpdateFlowSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateFlowSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowSourceAsync(const Model::UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaConnectClient>;
      void init(const MediaConnectClientConfiguration& clientConfiguration);

      MediaConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaConnect
} // namespace Aws
