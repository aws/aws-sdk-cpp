/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/arc-zonal-shift/ARCZonalShiftServiceClientModel.h>

namespace Aws
{
namespace ARCZonalShift
{
  /**
   * <p>This is the API Reference Guide for the zonal shift feature of Amazon Route
   * 53 Application Recovery Controller. This guide is for developers who need
   * detailed information about zonal shift API actions, data types, and errors.</p>
   * <p>Zonal shift is in preview release for Amazon Route 53 Application Recovery
   * Controller and is subject to change.</p> <p>Zonal shift in Route 53 ARC enables
   * you to move traffic for a load balancer resource away from an Availability Zone.
   * Starting a zonal shift helps your application recover immediately, for example,
   * from a developer's bad code deployment or from an AWS infrastructure failure in
   * a single Availability Zone, reducing the impact and time lost from an issue in
   * one zone. </p> <p>Supported AWS resources are automatically registered with
   * Route 53 ARC. Resources that are registered for zonal shifts in Route 53 ARC are
   * managed resources in Route 53 ARC. You can start a zonal shift for any managed
   * resource in your account in a Region. At this time, you can only start a zonal
   * shift for Network Load Balancers and Application Load Balancers with cross-zone
   * load balancing turned off.</p> <p>Zonal shifts are temporary. You must specify
   * an expiration when you start a zonal shift, of up to three days initially. If
   * you want to still keep traffic away from an Availability Zone, you can update
   * the zonal shift and set a new expiration. You can also cancel a zonal shift,
   * before it expires, for example, if you're ready to restore traffic to the
   * Availability Zone.</p> <p>For more information about using zonal shift, see the
   * <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/what-is-route53-recovery.html">Amazon
   * Route 53 Application Recovery Controller Developer Guide</a>.</p>
   */
  class AWS_ARCZONALSHIFT_API ARCZonalShiftClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ARCZonalShiftClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration(),
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ARCZonalShiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ARCZonalShiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ARCZonalShiftClient();

        /**
         * <p>Cancel a zonal shift in Amazon Route 53 Application Recovery Controller that
         * you've started for a resource in your AWS account in an AWS Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/CancelZonalShift">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelZonalShiftOutcome CancelZonalShift(const Model::CancelZonalShiftRequest& request) const;

        /**
         * A Callable wrapper for CancelZonalShift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelZonalShiftOutcomeCallable CancelZonalShiftCallable(const Model::CancelZonalShiftRequest& request) const;

        /**
         * An Async wrapper for CancelZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelZonalShiftAsync(const Model::CancelZonalShiftRequest& request, const CancelZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a resource that's been registered for zonal shifts with
         * Amazon Route 53 Application Recovery Controller in this AWS Region. Resources
         * that are registered for zonal shifts are managed resources in Route 53 ARC.</p>
         * <p>At this time, you can only start a zonal shift for Network Load Balancers and
         * Application Load Balancers with cross-zone load balancing turned
         * off.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/GetManagedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedResourceOutcome GetManagedResource(const Model::GetManagedResourceRequest& request) const;

        /**
         * A Callable wrapper for GetManagedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetManagedResourceOutcomeCallable GetManagedResourceCallable(const Model::GetManagedResourceRequest& request) const;

        /**
         * An Async wrapper for GetManagedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetManagedResourceAsync(const Model::GetManagedResourceRequest& request, const GetManagedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the resources in your AWS account in this AWS Region that are
         * managed for zonal shifts in Amazon Route 53 Application Recovery Controller, and
         * information about them. The information includes their Amazon Resource Names
         * (ARNs), the Availability Zones the resources are deployed in, and the resource
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ListManagedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedResourcesOutcome ListManagedResources(const Model::ListManagedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListManagedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedResourcesOutcomeCallable ListManagedResourcesCallable(const Model::ListManagedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListManagedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedResourcesAsync(const Model::ListManagedResourcesRequest& request, const ListManagedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the active zonal shifts in Amazon Route 53 Application Recovery
         * Controller in your AWS account in this AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ListZonalShifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListZonalShiftsOutcome ListZonalShifts(const Model::ListZonalShiftsRequest& request) const;

        /**
         * A Callable wrapper for ListZonalShifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListZonalShiftsOutcomeCallable ListZonalShiftsCallable(const Model::ListZonalShiftsRequest& request) const;

        /**
         * An Async wrapper for ListZonalShifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListZonalShiftsAsync(const Model::ListZonalShiftsRequest& request, const ListZonalShiftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>You start a zonal shift to temporarily move load balancer traffic away from
         * an Availability Zone in a AWS Region, to help your application recover
         * immediately, for example, from a developer's bad code deployment or from an AWS
         * infrastructure failure in a single Availability Zone. You can start a zonal
         * shift in Route 53 ARC only for managed resources in your account in an AWS
         * Region. Resources are automatically registered with Route 53 ARC by AWS
         * services.</p> <p>At this time, you can only start a zonal shift for Network Load
         * Balancers and Application Load Balancers with cross-zone load balancing turned
         * off.</p> <p>When you start a zonal shift, traffic for the resource is no longer
         * routed to the Availability Zone. The zonal shift is created immediately in Route
         * 53 ARC. However, it can take a short time, typically up to a few minutes, for
         * existing, in-progress connections in the Availability Zone to complete.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-shift.html">Zonal
         * shift</a> in the Amazon Route 53 Application Recovery Controller Developer
         * Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/StartZonalShift">AWS
         * API Reference</a></p>
         */
        virtual Model::StartZonalShiftOutcome StartZonalShift(const Model::StartZonalShiftRequest& request) const;

        /**
         * A Callable wrapper for StartZonalShift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartZonalShiftOutcomeCallable StartZonalShiftCallable(const Model::StartZonalShiftRequest& request) const;

        /**
         * An Async wrapper for StartZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartZonalShiftAsync(const Model::StartZonalShiftRequest& request, const StartZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an active zonal shift in Amazon Route 53 Application Recovery
         * Controller in your AWS account. You can update a zonal shift to set a new
         * expiration, or edit or replace the comment for the zonal shift. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/UpdateZonalShift">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateZonalShiftOutcome UpdateZonalShift(const Model::UpdateZonalShiftRequest& request) const;

        /**
         * A Callable wrapper for UpdateZonalShift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateZonalShiftOutcomeCallable UpdateZonalShiftCallable(const Model::UpdateZonalShiftRequest& request) const;

        /**
         * An Async wrapper for UpdateZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateZonalShiftAsync(const Model::UpdateZonalShiftRequest& request, const UpdateZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ARCZonalShiftEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ARCZonalShiftClient>;
      void init(const ARCZonalShiftClientConfiguration& clientConfiguration);

      ARCZonalShiftClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ARCZonalShiftEndpointProviderBase> m_endpointProvider;
  };

} // namespace ARCZonalShift
} // namespace Aws
