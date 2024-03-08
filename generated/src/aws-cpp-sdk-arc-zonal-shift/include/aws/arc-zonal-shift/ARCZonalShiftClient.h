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
   * <p>Welcome to the Zonal Shift API Reference Guide for Amazon Route 53
   * Application Recovery Controller (Route 53 ARC).</p> <p>You can start a zonal
   * shift to move traffic for a load balancer resource away from an Availability
   * Zone to help your application recover quickly from an impairment in an
   * Availability Zone. For example, you can recover your application from a
   * developer's bad code deployment or from an Amazon Web Services infrastructure
   * failure in a single Availability Zone.</p> <p>You can also configure zonal
   * autoshift for a load balancer resource. Zonal autoshift is a capability in Route
   * 53 ARC where Amazon Web Services shifts away application resource traffic from
   * an Availability Zone, on your behalf, to help reduce your time to recovery
   * during events. Amazon Web Services shifts away traffic for resources that are
   * enabled for zonal autoshift whenever Amazon Web Services determines that there's
   * an issue in the Availability Zone that could potentially affect customers.</p>
   * <p>To ensure that zonal autoshift is safe for your application, you must also
   * configure practice runs when you enable zonal autoshift for a resource. Practice
   * runs start weekly zonal shifts for a resource, to shift traffic for the resource
   * out of an Availability Zone. Practice runs make sure, on a regular basis, that
   * you have enough capacity in all the Availability Zones in an Amazon Web Services
   * Region for your application to continue to operate normally when traffic for a
   * resource is shifted away from one Availability Zone.</p>  <p>You must
   * prescale resource capacity in all Availability Zones in the Region where your
   * application is deployed, before you configure practice runs or enable zonal
   * autoshift for a resource. You should not rely on scaling on demand when an
   * autoshift or practice run starts. </p>  <p>For more information
   * about using zonal shift and zonal autoshift, see the <a
   * href="https://docs.aws.amazon.com/r53recovery/latest/dg/what-is-route53-recovery.html">Amazon
   * Route 53 Application Recovery Controller Developer Guide</a>.</p>
   */
  class AWS_ARCZONALSHIFT_API ARCZonalShiftClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ARCZonalShiftClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ARCZonalShiftClientConfiguration ClientConfigurationType;
      typedef ARCZonalShiftEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration(),
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ARCZonalShiftClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration = Aws::ARCZonalShift::ARCZonalShiftClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ARCZonalShiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Cancel a zonal shift in Amazon Route 53 Application Recovery Controller. To
         * cancel the zonal shift, specify the zonal shift ID.</p> <p>A zonal shift can be
         * one that you've started for a resource in your Amazon Web Services account in an
         * Amazon Web Services Region, or it can be a zonal shift started by a practice run
         * with zonal autoshift. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/CancelZonalShift">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelZonalShiftOutcome CancelZonalShift(const Model::CancelZonalShiftRequest& request) const;

        /**
         * A Callable wrapper for CancelZonalShift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelZonalShiftRequestT = Model::CancelZonalShiftRequest>
        Model::CancelZonalShiftOutcomeCallable CancelZonalShiftCallable(const CancelZonalShiftRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::CancelZonalShift, request);
        }

        /**
         * An Async wrapper for CancelZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelZonalShiftRequestT = Model::CancelZonalShiftRequest>
        void CancelZonalShiftAsync(const CancelZonalShiftRequestT& request, const CancelZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::CancelZonalShift, request, handler, context);
        }

        /**
         * <p>A practice run configuration for zonal autoshift is required when you enable
         * zonal autoshift. A practice run configuration includes specifications for
         * blocked dates and blocked time windows, and for Amazon CloudWatch alarms that
         * you create to use with practice runs. The alarms that you specify are an
         * <i>outcome alarm</i>, to monitor application health during practice runs and,
         * optionally, a <i>blocking alarm</i>, to block practice runs from starting.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/r53recovery/latest/dg/arc-zonal-autoshift.considerations.html">
         * Considerations when you configure zonal autoshift</a> in the Amazon Route 53
         * Application Recovery Controller Developer Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/CreatePracticeRunConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePracticeRunConfigurationOutcome CreatePracticeRunConfiguration(const Model::CreatePracticeRunConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreatePracticeRunConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePracticeRunConfigurationRequestT = Model::CreatePracticeRunConfigurationRequest>
        Model::CreatePracticeRunConfigurationOutcomeCallable CreatePracticeRunConfigurationCallable(const CreatePracticeRunConfigurationRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::CreatePracticeRunConfiguration, request);
        }

        /**
         * An Async wrapper for CreatePracticeRunConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePracticeRunConfigurationRequestT = Model::CreatePracticeRunConfigurationRequest>
        void CreatePracticeRunConfigurationAsync(const CreatePracticeRunConfigurationRequestT& request, const CreatePracticeRunConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::CreatePracticeRunConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the practice run configuration for a resource. Before you can delete
         * a practice run configuration for a resource., you must disable zonal autoshift
         * for the resource. Practice runs must be configured for zonal autoshift to be
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/DeletePracticeRunConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePracticeRunConfigurationOutcome DeletePracticeRunConfiguration(const Model::DeletePracticeRunConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeletePracticeRunConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePracticeRunConfigurationRequestT = Model::DeletePracticeRunConfigurationRequest>
        Model::DeletePracticeRunConfigurationOutcomeCallable DeletePracticeRunConfigurationCallable(const DeletePracticeRunConfigurationRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::DeletePracticeRunConfiguration, request);
        }

        /**
         * An Async wrapper for DeletePracticeRunConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePracticeRunConfigurationRequestT = Model::DeletePracticeRunConfigurationRequest>
        void DeletePracticeRunConfigurationAsync(const DeletePracticeRunConfigurationRequestT& request, const DeletePracticeRunConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::DeletePracticeRunConfiguration, request, handler, context);
        }

        /**
         * <p>Get information about a resource that's been registered for zonal shifts with
         * Amazon Route 53 Application Recovery Controller in this Amazon Web Services
         * Region. Resources that are registered for zonal shifts are managed resources in
         * Route 53 ARC. You can start zonal shifts and configure zonal autoshift for
         * managed resources.</p> <p>At this time, you can only start a zonal shift or
         * configure zonal autoshift for Network Load Balancers and Application Load
         * Balancers with cross-zone load balancing turned off.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/GetManagedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedResourceOutcome GetManagedResource(const Model::GetManagedResourceRequest& request) const;

        /**
         * A Callable wrapper for GetManagedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedResourceRequestT = Model::GetManagedResourceRequest>
        Model::GetManagedResourceOutcomeCallable GetManagedResourceCallable(const GetManagedResourceRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::GetManagedResource, request);
        }

        /**
         * An Async wrapper for GetManagedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedResourceRequestT = Model::GetManagedResourceRequest>
        void GetManagedResourceAsync(const GetManagedResourceRequestT& request, const GetManagedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::GetManagedResource, request, handler, context);
        }

        /**
         * <p>Returns the active autoshifts for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ListAutoshifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoshiftsOutcome ListAutoshifts(const Model::ListAutoshiftsRequest& request) const;

        /**
         * A Callable wrapper for ListAutoshifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutoshiftsRequestT = Model::ListAutoshiftsRequest>
        Model::ListAutoshiftsOutcomeCallable ListAutoshiftsCallable(const ListAutoshiftsRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::ListAutoshifts, request);
        }

        /**
         * An Async wrapper for ListAutoshifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutoshiftsRequestT = Model::ListAutoshiftsRequest>
        void ListAutoshiftsAsync(const ListAutoshiftsRequestT& request, const ListAutoshiftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::ListAutoshifts, request, handler, context);
        }

        /**
         * <p>Lists all the resources in your Amazon Web Services account in this Amazon
         * Web Services Region that are managed for zonal shifts in Amazon Route 53
         * Application Recovery Controller, and information about them. The information
         * includes the zonal autoshift status for the resource, as well as the Amazon
         * Resource Name (ARN), the Availability Zones that each resource is deployed in,
         * and the resource name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ListManagedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedResourcesOutcome ListManagedResources(const Model::ListManagedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListManagedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedResourcesRequestT = Model::ListManagedResourcesRequest>
        Model::ListManagedResourcesOutcomeCallable ListManagedResourcesCallable(const ListManagedResourcesRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::ListManagedResources, request);
        }

        /**
         * An Async wrapper for ListManagedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedResourcesRequestT = Model::ListManagedResourcesRequest>
        void ListManagedResourcesAsync(const ListManagedResourcesRequestT& request, const ListManagedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::ListManagedResources, request, handler, context);
        }

        /**
         * <p>Lists all active and completed zonal shifts in Amazon Route 53 Application
         * Recovery Controller in your Amazon Web Services account in this Amazon Web
         * Services Region. <code>ListZonalShifts</code> returns customer-started zonal
         * shifts, as well as practice run zonal shifts that Route 53 ARC started on your
         * behalf for zonal autoshift.</p> <p>The <code>ListZonalShifts</code> operation
         * does not list autoshifts. For more information about listing autoshifts, see <a
         * href="https://docs.aws.amazon.com/arc-zonal-shift/latest/api/API_ListAutoshifts.html">"&gt;ListAutoshifts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/ListZonalShifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListZonalShiftsOutcome ListZonalShifts(const Model::ListZonalShiftsRequest& request) const;

        /**
         * A Callable wrapper for ListZonalShifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListZonalShiftsRequestT = Model::ListZonalShiftsRequest>
        Model::ListZonalShiftsOutcomeCallable ListZonalShiftsCallable(const ListZonalShiftsRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::ListZonalShifts, request);
        }

        /**
         * An Async wrapper for ListZonalShifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListZonalShiftsRequestT = Model::ListZonalShiftsRequest>
        void ListZonalShiftsAsync(const ListZonalShiftsRequestT& request, const ListZonalShiftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::ListZonalShifts, request, handler, context);
        }

        /**
         * <p>You start a zonal shift to temporarily move load balancer traffic away from
         * an Availability Zone in an Amazon Web Services Region, to help your application
         * recover immediately, for example, from a developer's bad code deployment or from
         * an Amazon Web Services infrastructure failure in a single Availability Zone. You
         * can start a zonal shift in Route 53 ARC only for managed resources in your
         * Amazon Web Services account in an Amazon Web Services Region. Resources are
         * automatically registered with Route 53 ARC by Amazon Web Services services.</p>
         * <p>At this time, you can only start a zonal shift for Network Load Balancers and
         * Application Load Balancers with cross-zone load balancing turned off.</p>
         * <p>When you start a zonal shift, traffic for the resource is no longer routed to
         * the Availability Zone. The zonal shift is created immediately in Route 53 ARC.
         * However, it can take a short time, typically up to a few minutes, for existing,
         * in-progress connections in the Availability Zone to complete.</p> <p>For more
         * information, see <a
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
        template<typename StartZonalShiftRequestT = Model::StartZonalShiftRequest>
        Model::StartZonalShiftOutcomeCallable StartZonalShiftCallable(const StartZonalShiftRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::StartZonalShift, request);
        }

        /**
         * An Async wrapper for StartZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartZonalShiftRequestT = Model::StartZonalShiftRequest>
        void StartZonalShiftAsync(const StartZonalShiftRequestT& request, const StartZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::StartZonalShift, request, handler, context);
        }

        /**
         * <p>Update a practice run configuration to change one or more of the following:
         * add, change, or remove the blocking alarm; change the outcome alarm; or add,
         * change, or remove blocking dates or time windows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/UpdatePracticeRunConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePracticeRunConfigurationOutcome UpdatePracticeRunConfiguration(const Model::UpdatePracticeRunConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdatePracticeRunConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePracticeRunConfigurationRequestT = Model::UpdatePracticeRunConfigurationRequest>
        Model::UpdatePracticeRunConfigurationOutcomeCallable UpdatePracticeRunConfigurationCallable(const UpdatePracticeRunConfigurationRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::UpdatePracticeRunConfiguration, request);
        }

        /**
         * An Async wrapper for UpdatePracticeRunConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePracticeRunConfigurationRequestT = Model::UpdatePracticeRunConfigurationRequest>
        void UpdatePracticeRunConfigurationAsync(const UpdatePracticeRunConfigurationRequestT& request, const UpdatePracticeRunConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::UpdatePracticeRunConfiguration, request, handler, context);
        }

        /**
         * <p>You can update the zonal autoshift status for a resource, to enable or
         * disable zonal autoshift. When zonal autoshift is <code>ENABLED</code>, Amazon
         * Web Services shifts away resource traffic from an Availability Zone, on your
         * behalf, when Amazon Web Services determines that there's an issue in the
         * Availability Zone that could potentially affect customers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/UpdateZonalAutoshiftConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateZonalAutoshiftConfigurationOutcome UpdateZonalAutoshiftConfiguration(const Model::UpdateZonalAutoshiftConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateZonalAutoshiftConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateZonalAutoshiftConfigurationRequestT = Model::UpdateZonalAutoshiftConfigurationRequest>
        Model::UpdateZonalAutoshiftConfigurationOutcomeCallable UpdateZonalAutoshiftConfigurationCallable(const UpdateZonalAutoshiftConfigurationRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::UpdateZonalAutoshiftConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateZonalAutoshiftConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateZonalAutoshiftConfigurationRequestT = Model::UpdateZonalAutoshiftConfigurationRequest>
        void UpdateZonalAutoshiftConfigurationAsync(const UpdateZonalAutoshiftConfigurationRequestT& request, const UpdateZonalAutoshiftConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::UpdateZonalAutoshiftConfiguration, request, handler, context);
        }

        /**
         * <p>Update an active zonal shift in Amazon Route 53 Application Recovery
         * Controller in your Amazon Web Services account. You can update a zonal shift to
         * set a new expiration, or edit or replace the comment for the zonal shift.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/arc-zonal-shift-2022-10-30/UpdateZonalShift">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateZonalShiftOutcome UpdateZonalShift(const Model::UpdateZonalShiftRequest& request) const;

        /**
         * A Callable wrapper for UpdateZonalShift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateZonalShiftRequestT = Model::UpdateZonalShiftRequest>
        Model::UpdateZonalShiftOutcomeCallable UpdateZonalShiftCallable(const UpdateZonalShiftRequestT& request) const
        {
            return SubmitCallable(&ARCZonalShiftClient::UpdateZonalShift, request);
        }

        /**
         * An Async wrapper for UpdateZonalShift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateZonalShiftRequestT = Model::UpdateZonalShiftRequest>
        void UpdateZonalShiftAsync(const UpdateZonalShiftRequestT& request, const UpdateZonalShiftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ARCZonalShiftClient::UpdateZonalShift, request, handler, context);
        }


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
