/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/GroundStationServiceClientModel.h>
#include <aws/groundstation/GroundStationLegacyAsyncMacros.h>

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
  class AWS_GROUNDSTATION_API GroundStationClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration(),
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG),
                            const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelContactOutcome CancelContact(const Model::CancelContactRequest& request) const;


        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p> <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest& request) const;


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
         * <p>Creates an Ephemeris with the specified
         * <code>EphemerisData</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEphemerisOutcome CreateEphemeris(const Model::CreateEphemerisRequest& request) const;


        /**
         * <p>Creates a mission profile.</p> <p> <code>dataflowEdges</code> is a list of
         * lists of strings. Each lower level list of strings has two elements: a
         * <i>from</i> ARN and a <i>to</i> ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMissionProfileOutcome CreateMissionProfile(const Model::CreateMissionProfileRequest& request) const;


        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest& request) const;


        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataflowEndpointGroupOutcome DeleteDataflowEndpointGroup(const Model::DeleteDataflowEndpointGroupRequest& request) const;


        /**
         * <p>Deletes an ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEphemerisOutcome DeleteEphemeris(const Model::DeleteEphemerisRequest& request) const;


        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMissionProfileOutcome DeleteMissionProfile(const Model::DeleteMissionProfileRequest& request) const;


        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;


        /**
         * <p>Describes an existing ephemeris.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEphemerisOutcome DescribeEphemeris(const Model::DescribeEphemerisRequest& request) const;


        /**
         * <p>Returns <code>Config</code> information.</p> <p>Only one <code>Config</code>
         * response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;


        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowEndpointGroupOutcome GetDataflowEndpointGroup(const Model::GetDataflowEndpointGroupRequest& request) const;


        /**
         * <p>Returns the number of minutes used by account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMinuteUsageOutcome GetMinuteUsage(const Model::GetMinuteUsageRequest& request) const;


        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMissionProfileOutcome GetMissionProfile(const Model::GetMissionProfileRequest& request) const;


        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSatelliteOutcome GetSatellite(const Model::GetSatelliteRequest& request) const;


        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigsOutcome ListConfigs(const Model::ListConfigsRequest& request) const;


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
         * <p>Returns a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataflowEndpointGroupsOutcome ListDataflowEndpointGroups(const Model::ListDataflowEndpointGroupsRequest& request) const;


        /**
         * <p>List existing ephemerides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListEphemerides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEphemeridesOutcome ListEphemerides(const Model::ListEphemeridesRequest& request) const;


        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroundStationsOutcome ListGroundStations(const Model::ListGroundStationsRequest& request) const;


        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMissionProfilesOutcome ListMissionProfiles(const Model::ListMissionProfilesRequest& request) const;


        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSatellitesOutcome ListSatellites(const Model::ListSatellitesRequest& request) const;


        /**
         * <p>Returns a list of tags for a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ReserveContactOutcome ReserveContact(const Model::ReserveContactRequest& request) const;


        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates an existing ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEphemerisOutcome UpdateEphemeris(const Model::UpdateEphemerisRequest& request) const;


        /**
         * <p>Updates a mission profile.</p> <p>Updating a mission profile will not update
         * the execution parameters for existing future contacts.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMissionProfileOutcome UpdateMissionProfile(const Model::UpdateMissionProfileRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GroundStationEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GroundStationClientConfiguration& clientConfiguration);

      GroundStationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GroundStationEndpointProviderBase> m_endpointProvider;
  };

} // namespace GroundStation
} // namespace Aws
