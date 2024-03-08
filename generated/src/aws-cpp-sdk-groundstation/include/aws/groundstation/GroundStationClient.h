/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/GroundStationServiceClientModel.h>

namespace Aws
{
namespace GroundStation
{
  /**
   * <p>Welcome to the AWS Ground Station API Reference. AWS Ground Station is a
   * fully managed service that enables you to control satellite communications,
   * downlink and process satellite data, and scale your satellite operations
   * efficiently and cost-effectively without having to build or manage your own
   * ground station infrastructure.</p>
   */
  class AWS_GROUNDSTATION_API GroundStationClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GroundStationClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GroundStationClientConfiguration ClientConfigurationType;
      typedef GroundStationEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration(),
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GroundStationClient();

        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelContactOutcome CancelContact(const Model::CancelContactRequest& request) const;

        /**
         * A Callable wrapper for CancelContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelContactRequestT = Model::CancelContactRequest>
        Model::CancelContactOutcomeCallable CancelContactCallable(const CancelContactRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::CancelContact, request);
        }

        /**
         * An Async wrapper for CancelContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelContactRequestT = Model::CancelContactRequest>
        void CancelContactAsync(const CancelContactRequestT& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::CancelContact, request, handler, context);
        }

        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p> <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigRequestT = Model::CreateConfigRequest>
        Model::CreateConfigOutcomeCallable CreateConfigCallable(const CreateConfigRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::CreateConfig, request);
        }

        /**
         * An Async wrapper for CreateConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigRequestT = Model::CreateConfigRequest>
        void CreateConfigAsync(const CreateConfigRequestT& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::CreateConfig, request, handler, context);
        }

        /**
         * <p>Creates a <code>DataflowEndpoint</code> group containing the specified list
         * of <code>DataflowEndpoint</code> objects.</p> <p>The <code>name</code> field in
         * each endpoint is used in your mission profile
         * <code>DataflowEndpointConfig</code> to specify which endpoints to use during a
         * contact.</p> <p>When a contact uses multiple <code>DataflowEndpointConfig</code>
         * objects, each <code>Config</code> must match a <code>DataflowEndpoint</code> in
         * the same group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataflowEndpointGroupOutcome CreateDataflowEndpointGroup(const Model::CreateDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataflowEndpointGroupRequestT = Model::CreateDataflowEndpointGroupRequest>
        Model::CreateDataflowEndpointGroupOutcomeCallable CreateDataflowEndpointGroupCallable(const CreateDataflowEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::CreateDataflowEndpointGroup, request);
        }

        /**
         * An Async wrapper for CreateDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataflowEndpointGroupRequestT = Model::CreateDataflowEndpointGroupRequest>
        void CreateDataflowEndpointGroupAsync(const CreateDataflowEndpointGroupRequestT& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::CreateDataflowEndpointGroup, request, handler, context);
        }

        /**
         * <p>Creates an Ephemeris with the specified
         * <code>EphemerisData</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEphemerisOutcome CreateEphemeris(const Model::CreateEphemerisRequest& request) const;

        /**
         * A Callable wrapper for CreateEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEphemerisRequestT = Model::CreateEphemerisRequest>
        Model::CreateEphemerisOutcomeCallable CreateEphemerisCallable(const CreateEphemerisRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::CreateEphemeris, request);
        }

        /**
         * An Async wrapper for CreateEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEphemerisRequestT = Model::CreateEphemerisRequest>
        void CreateEphemerisAsync(const CreateEphemerisRequestT& request, const CreateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::CreateEphemeris, request, handler, context);
        }

        /**
         * <p>Creates a mission profile.</p> <p> <code>dataflowEdges</code> is a list of
         * lists of strings. Each lower level list of strings has two elements: a
         * <i>from</i> ARN and a <i>to</i> ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMissionProfileOutcome CreateMissionProfile(const Model::CreateMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMissionProfileRequestT = Model::CreateMissionProfileRequest>
        Model::CreateMissionProfileOutcomeCallable CreateMissionProfileCallable(const CreateMissionProfileRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::CreateMissionProfile, request);
        }

        /**
         * An Async wrapper for CreateMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMissionProfileRequestT = Model::CreateMissionProfileRequest>
        void CreateMissionProfileAsync(const CreateMissionProfileRequestT& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::CreateMissionProfile, request, handler, context);
        }

        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigRequestT = Model::DeleteConfigRequest>
        Model::DeleteConfigOutcomeCallable DeleteConfigCallable(const DeleteConfigRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DeleteConfig, request);
        }

        /**
         * An Async wrapper for DeleteConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigRequestT = Model::DeleteConfigRequest>
        void DeleteConfigAsync(const DeleteConfigRequestT& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DeleteConfig, request, handler, context);
        }

        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataflowEndpointGroupOutcome DeleteDataflowEndpointGroup(const Model::DeleteDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataflowEndpointGroupRequestT = Model::DeleteDataflowEndpointGroupRequest>
        Model::DeleteDataflowEndpointGroupOutcomeCallable DeleteDataflowEndpointGroupCallable(const DeleteDataflowEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DeleteDataflowEndpointGroup, request);
        }

        /**
         * An Async wrapper for DeleteDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataflowEndpointGroupRequestT = Model::DeleteDataflowEndpointGroupRequest>
        void DeleteDataflowEndpointGroupAsync(const DeleteDataflowEndpointGroupRequestT& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DeleteDataflowEndpointGroup, request, handler, context);
        }

        /**
         * <p>Deletes an ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEphemerisOutcome DeleteEphemeris(const Model::DeleteEphemerisRequest& request) const;

        /**
         * A Callable wrapper for DeleteEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEphemerisRequestT = Model::DeleteEphemerisRequest>
        Model::DeleteEphemerisOutcomeCallable DeleteEphemerisCallable(const DeleteEphemerisRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DeleteEphemeris, request);
        }

        /**
         * An Async wrapper for DeleteEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEphemerisRequestT = Model::DeleteEphemerisRequest>
        void DeleteEphemerisAsync(const DeleteEphemerisRequestT& request, const DeleteEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DeleteEphemeris, request, handler, context);
        }

        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMissionProfileOutcome DeleteMissionProfile(const Model::DeleteMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMissionProfileRequestT = Model::DeleteMissionProfileRequest>
        Model::DeleteMissionProfileOutcomeCallable DeleteMissionProfileCallable(const DeleteMissionProfileRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DeleteMissionProfile, request);
        }

        /**
         * An Async wrapper for DeleteMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMissionProfileRequestT = Model::DeleteMissionProfileRequest>
        void DeleteMissionProfileAsync(const DeleteMissionProfileRequestT& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DeleteMissionProfile, request, handler, context);
        }

        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;

        /**
         * A Callable wrapper for DescribeContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContactRequestT = Model::DescribeContactRequest>
        Model::DescribeContactOutcomeCallable DescribeContactCallable(const DescribeContactRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DescribeContact, request);
        }

        /**
         * An Async wrapper for DescribeContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContactRequestT = Model::DescribeContactRequest>
        void DescribeContactAsync(const DescribeContactRequestT& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DescribeContact, request, handler, context);
        }

        /**
         * <p>Describes an existing ephemeris.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEphemerisOutcome DescribeEphemeris(const Model::DescribeEphemerisRequest& request) const;

        /**
         * A Callable wrapper for DescribeEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEphemerisRequestT = Model::DescribeEphemerisRequest>
        Model::DescribeEphemerisOutcomeCallable DescribeEphemerisCallable(const DescribeEphemerisRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::DescribeEphemeris, request);
        }

        /**
         * An Async wrapper for DescribeEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEphemerisRequestT = Model::DescribeEphemerisRequest>
        void DescribeEphemerisAsync(const DescribeEphemerisRequestT& request, const DescribeEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::DescribeEphemeris, request, handler, context);
        }

        /**
         *  <p> For use by AWS Ground Station Agent and shouldn't be called
         * directly.</p>  <p>Gets the latest configuration information for a
         * registered agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetAgentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentConfigurationOutcome GetAgentConfiguration(const Model::GetAgentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAgentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentConfigurationRequestT = Model::GetAgentConfigurationRequest>
        Model::GetAgentConfigurationOutcomeCallable GetAgentConfigurationCallable(const GetAgentConfigurationRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetAgentConfiguration, request);
        }

        /**
         * An Async wrapper for GetAgentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentConfigurationRequestT = Model::GetAgentConfigurationRequest>
        void GetAgentConfigurationAsync(const GetAgentConfigurationRequestT& request, const GetAgentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetAgentConfiguration, request, handler, context);
        }

        /**
         * <p>Returns <code>Config</code> information.</p> <p>Only one <code>Config</code>
         * response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigRequestT = Model::GetConfigRequest>
        Model::GetConfigOutcomeCallable GetConfigCallable(const GetConfigRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetConfig, request);
        }

        /**
         * An Async wrapper for GetConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigRequestT = Model::GetConfigRequest>
        void GetConfigAsync(const GetConfigRequestT& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetConfig, request, handler, context);
        }

        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowEndpointGroupOutcome GetDataflowEndpointGroup(const Model::GetDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for GetDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataflowEndpointGroupRequestT = Model::GetDataflowEndpointGroupRequest>
        Model::GetDataflowEndpointGroupOutcomeCallable GetDataflowEndpointGroupCallable(const GetDataflowEndpointGroupRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetDataflowEndpointGroup, request);
        }

        /**
         * An Async wrapper for GetDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataflowEndpointGroupRequestT = Model::GetDataflowEndpointGroupRequest>
        void GetDataflowEndpointGroupAsync(const GetDataflowEndpointGroupRequestT& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetDataflowEndpointGroup, request, handler, context);
        }

        /**
         * <p>Returns the number of reserved minutes used by account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMinuteUsageOutcome GetMinuteUsage(const Model::GetMinuteUsageRequest& request) const;

        /**
         * A Callable wrapper for GetMinuteUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMinuteUsageRequestT = Model::GetMinuteUsageRequest>
        Model::GetMinuteUsageOutcomeCallable GetMinuteUsageCallable(const GetMinuteUsageRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetMinuteUsage, request);
        }

        /**
         * An Async wrapper for GetMinuteUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMinuteUsageRequestT = Model::GetMinuteUsageRequest>
        void GetMinuteUsageAsync(const GetMinuteUsageRequestT& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetMinuteUsage, request, handler, context);
        }

        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMissionProfileOutcome GetMissionProfile(const Model::GetMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for GetMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMissionProfileRequestT = Model::GetMissionProfileRequest>
        Model::GetMissionProfileOutcomeCallable GetMissionProfileCallable(const GetMissionProfileRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetMissionProfile, request);
        }

        /**
         * An Async wrapper for GetMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMissionProfileRequestT = Model::GetMissionProfileRequest>
        void GetMissionProfileAsync(const GetMissionProfileRequestT& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetMissionProfile, request, handler, context);
        }

        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSatelliteOutcome GetSatellite(const Model::GetSatelliteRequest& request) const;

        /**
         * A Callable wrapper for GetSatellite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSatelliteRequestT = Model::GetSatelliteRequest>
        Model::GetSatelliteOutcomeCallable GetSatelliteCallable(const GetSatelliteRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::GetSatellite, request);
        }

        /**
         * An Async wrapper for GetSatellite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSatelliteRequestT = Model::GetSatelliteRequest>
        void GetSatelliteAsync(const GetSatelliteRequestT& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::GetSatellite, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigsOutcome ListConfigs(const Model::ListConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigsRequestT = Model::ListConfigsRequest>
        Model::ListConfigsOutcomeCallable ListConfigsCallable(const ListConfigsRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListConfigs, request);
        }

        /**
         * An Async wrapper for ListConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigsRequestT = Model::ListConfigsRequest>
        void ListConfigsAsync(const ListConfigsRequestT& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListConfigs, request, handler, context);
        }

        /**
         * <p>Returns a list of contacts.</p> <p>If <code>statusList</code> contains
         * AVAILABLE, the request must include <code>groundStation</code>,
         * <code>missionprofileArn</code>, and <code>satelliteArn</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        Model::ListContactsOutcomeCallable ListContactsCallable(const ListContactsRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListContacts, request);
        }

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        void ListContactsAsync(const ListContactsRequestT& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListContacts, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataflowEndpointGroupsOutcome ListDataflowEndpointGroups(const Model::ListDataflowEndpointGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDataflowEndpointGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataflowEndpointGroupsRequestT = Model::ListDataflowEndpointGroupsRequest>
        Model::ListDataflowEndpointGroupsOutcomeCallable ListDataflowEndpointGroupsCallable(const ListDataflowEndpointGroupsRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListDataflowEndpointGroups, request);
        }

        /**
         * An Async wrapper for ListDataflowEndpointGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataflowEndpointGroupsRequestT = Model::ListDataflowEndpointGroupsRequest>
        void ListDataflowEndpointGroupsAsync(const ListDataflowEndpointGroupsRequestT& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListDataflowEndpointGroups, request, handler, context);
        }

        /**
         * <p>List existing ephemerides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListEphemerides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEphemeridesOutcome ListEphemerides(const Model::ListEphemeridesRequest& request) const;

        /**
         * A Callable wrapper for ListEphemerides that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEphemeridesRequestT = Model::ListEphemeridesRequest>
        Model::ListEphemeridesOutcomeCallable ListEphemeridesCallable(const ListEphemeridesRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListEphemerides, request);
        }

        /**
         * An Async wrapper for ListEphemerides that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEphemeridesRequestT = Model::ListEphemeridesRequest>
        void ListEphemeridesAsync(const ListEphemeridesRequestT& request, const ListEphemeridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListEphemerides, request, handler, context);
        }

        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroundStationsOutcome ListGroundStations(const Model::ListGroundStationsRequest& request) const;

        /**
         * A Callable wrapper for ListGroundStations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroundStationsRequestT = Model::ListGroundStationsRequest>
        Model::ListGroundStationsOutcomeCallable ListGroundStationsCallable(const ListGroundStationsRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListGroundStations, request);
        }

        /**
         * An Async wrapper for ListGroundStations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroundStationsRequestT = Model::ListGroundStationsRequest>
        void ListGroundStationsAsync(const ListGroundStationsRequestT& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListGroundStations, request, handler, context);
        }

        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMissionProfilesOutcome ListMissionProfiles(const Model::ListMissionProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListMissionProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMissionProfilesRequestT = Model::ListMissionProfilesRequest>
        Model::ListMissionProfilesOutcomeCallable ListMissionProfilesCallable(const ListMissionProfilesRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListMissionProfiles, request);
        }

        /**
         * An Async wrapper for ListMissionProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMissionProfilesRequestT = Model::ListMissionProfilesRequest>
        void ListMissionProfilesAsync(const ListMissionProfilesRequestT& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListMissionProfiles, request, handler, context);
        }

        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSatellitesOutcome ListSatellites(const Model::ListSatellitesRequest& request) const;

        /**
         * A Callable wrapper for ListSatellites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSatellitesRequestT = Model::ListSatellitesRequest>
        Model::ListSatellitesOutcomeCallable ListSatellitesCallable(const ListSatellitesRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListSatellites, request);
        }

        /**
         * An Async wrapper for ListSatellites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSatellitesRequestT = Model::ListSatellitesRequest>
        void ListSatellitesAsync(const ListSatellitesRequestT& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListSatellites, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ListTagsForResource, request, handler, context);
        }

        /**
         *  <p> For use by AWS Ground Station Agent and shouldn't be called
         * directly.</p>  <p> Registers a new agent with AWS Ground Station.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/RegisterAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAgentOutcome RegisterAgent(const Model::RegisterAgentRequest& request) const;

        /**
         * A Callable wrapper for RegisterAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterAgentRequestT = Model::RegisterAgentRequest>
        Model::RegisterAgentOutcomeCallable RegisterAgentCallable(const RegisterAgentRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::RegisterAgent, request);
        }

        /**
         * An Async wrapper for RegisterAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAgentRequestT = Model::RegisterAgentRequest>
        void RegisterAgentAsync(const RegisterAgentRequestT& request, const RegisterAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::RegisterAgent, request, handler, context);
        }

        /**
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ReserveContactOutcome ReserveContact(const Model::ReserveContactRequest& request) const;

        /**
         * A Callable wrapper for ReserveContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReserveContactRequestT = Model::ReserveContactRequest>
        Model::ReserveContactOutcomeCallable ReserveContactCallable(const ReserveContactRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::ReserveContact, request);
        }

        /**
         * An Async wrapper for ReserveContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReserveContactRequestT = Model::ReserveContactRequest>
        void ReserveContactAsync(const ReserveContactRequestT& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::ReserveContact, request, handler, context);
        }

        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::UntagResource, request, handler, context);
        }

        /**
         *  <p> For use by AWS Ground Station Agent and shouldn't be called
         * directly.</p>  <p>Update the status of the agent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentStatusOutcome UpdateAgentStatus(const Model::UpdateAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentStatusRequestT = Model::UpdateAgentStatusRequest>
        Model::UpdateAgentStatusOutcomeCallable UpdateAgentStatusCallable(const UpdateAgentStatusRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::UpdateAgentStatus, request);
        }

        /**
         * An Async wrapper for UpdateAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentStatusRequestT = Model::UpdateAgentStatusRequest>
        void UpdateAgentStatusAsync(const UpdateAgentStatusRequestT& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::UpdateAgentStatus, request, handler, context);
        }

        /**
         * <p>Updates the <code>Config</code> used when scheduling contacts.</p>
         * <p>Updating a <code>Config</code> will not update the execution parameters for
         * existing future contacts scheduled with this <code>Config</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigOutcome UpdateConfig(const Model::UpdateConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigRequestT = Model::UpdateConfigRequest>
        Model::UpdateConfigOutcomeCallable UpdateConfigCallable(const UpdateConfigRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::UpdateConfig, request);
        }

        /**
         * An Async wrapper for UpdateConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigRequestT = Model::UpdateConfigRequest>
        void UpdateConfigAsync(const UpdateConfigRequestT& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::UpdateConfig, request, handler, context);
        }

        /**
         * <p>Updates an existing ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEphemerisOutcome UpdateEphemeris(const Model::UpdateEphemerisRequest& request) const;

        /**
         * A Callable wrapper for UpdateEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEphemerisRequestT = Model::UpdateEphemerisRequest>
        Model::UpdateEphemerisOutcomeCallable UpdateEphemerisCallable(const UpdateEphemerisRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::UpdateEphemeris, request);
        }

        /**
         * An Async wrapper for UpdateEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEphemerisRequestT = Model::UpdateEphemerisRequest>
        void UpdateEphemerisAsync(const UpdateEphemerisRequestT& request, const UpdateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::UpdateEphemeris, request, handler, context);
        }

        /**
         * <p>Updates a mission profile.</p> <p>Updating a mission profile will not update
         * the execution parameters for existing future contacts.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMissionProfileOutcome UpdateMissionProfile(const Model::UpdateMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMissionProfileRequestT = Model::UpdateMissionProfileRequest>
        Model::UpdateMissionProfileOutcomeCallable UpdateMissionProfileCallable(const UpdateMissionProfileRequestT& request) const
        {
            return SubmitCallable(&GroundStationClient::UpdateMissionProfile, request);
        }

        /**
         * An Async wrapper for UpdateMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMissionProfileRequestT = Model::UpdateMissionProfileRequest>
        void UpdateMissionProfileAsync(const UpdateMissionProfileRequestT& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GroundStationClient::UpdateMissionProfile, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GroundStationEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GroundStationClient>;
      void init(const GroundStationClientConfiguration& clientConfiguration);

      GroundStationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GroundStationEndpointProviderBase> m_endpointProvider;
  };

} // namespace GroundStation
} // namespace Aws
