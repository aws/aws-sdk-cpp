/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

  /**
   */
  class StartStreamSessionRequest : public GameLiftStreamsRequest
  {
  public:
    AWS_GAMELIFTSTREAMS_API StartStreamSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStreamSession"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A unique identifier that represents a client request. The request is
     * idempotent, which ensures that an API request completes only once. When users
     * send a request, Amazon GameLift Streams automatically populates this field. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartStreamSessionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the stream session. You can update this value
     * later.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartStreamSessionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream group to run this stream session with.</p> <p>This value is an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * Example ID: <code>sg-1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    StartStreamSessionRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transport protocol to use for the stream session.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline StartStreamSessionRequest& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A WebRTC ICE offer string to use when initializing a WebRTC connection.
     * Typically, the offer is a very long JSON string. Provide the string as a text
     * value in quotes.</p> <p>Amazon GameLift Streams also supports setting the field
     * to "NO_CLIENT_CONNECTION". This will create a session without needing any
     * browser request or Web SDK integration. The session starts up as usual and waits
     * for a reconnection from a browser, which is accomplished using <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_CreateStreamSessionConnection.html">CreateStreamSessionConnection</a>.</p>
     */
    inline const Aws::String& GetSignalRequest() const { return m_signalRequest; }
    inline bool SignalRequestHasBeenSet() const { return m_signalRequestHasBeenSet; }
    template<typename SignalRequestT = Aws::String>
    void SetSignalRequest(SignalRequestT&& value) { m_signalRequestHasBeenSet = true; m_signalRequest = std::forward<SignalRequestT>(value); }
    template<typename SignalRequestT = Aws::String>
    StartStreamSessionRequest& WithSignalRequest(SignalRequestT&& value) { SetSignalRequest(std::forward<SignalRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * Example ID: <code>a-9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    StartStreamSessionRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    StartStreamSessionRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of locations, in order of priority, where you want Amazon GameLift
     * Streams to start a stream from. For example, <code>us-east-1</code>. Amazon
     * GameLift Streams selects the location with the next available capacity to start
     * a single stream session in. If this value is empty, Amazon GameLift Streams
     * attempts to start a stream session in the primary location. </p> <p> For a
     * complete list of locations that Amazon GameLift Streams supports, refer to <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
     * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<Aws::String>>
    StartStreamSessionRequest& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = Aws::String>
    StartStreamSessionRequest& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Length of time (in seconds) that Amazon GameLift Streams should wait for a
     * client to connect or reconnect to the stream session. Applies to both connection
     * and reconnection scenarios. This time span starts when the stream session
     * reaches <code>ACTIVE</code> state. If no client connects before the timeout,
     * Amazon GameLift Streams terminates the stream session. Default value is 120.</p>
     */
    inline int GetConnectionTimeoutSeconds() const { return m_connectionTimeoutSeconds; }
    inline bool ConnectionTimeoutSecondsHasBeenSet() const { return m_connectionTimeoutSecondsHasBeenSet; }
    inline void SetConnectionTimeoutSeconds(int value) { m_connectionTimeoutSecondsHasBeenSet = true; m_connectionTimeoutSeconds = value; }
    inline StartStreamSessionRequest& WithConnectionTimeoutSeconds(int value) { SetConnectionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of a session. Amazon GameLift Streams will automatically
     * terminate a session after this amount of time has elapsed, regardless of any
     * existing client connections. Default value is 43200 (12 hours).</p>
     */
    inline int GetSessionLengthSeconds() const { return m_sessionLengthSeconds; }
    inline bool SessionLengthSecondsHasBeenSet() const { return m_sessionLengthSecondsHasBeenSet; }
    inline void SetSessionLengthSeconds(int value) { m_sessionLengthSecondsHasBeenSet = true; m_sessionLengthSeconds = value; }
    inline StartStreamSessionRequest& WithSessionLengthSeconds(int value) { SetSessionLengthSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CLI arguments that are sent to the streaming server when a stream
     * session launches. You can use this to configure the application or stream
     * session details. You can also provide custom arguments that Amazon GameLift
     * Streams passes to your game client.</p> <p>
     * <code>AdditionalEnvironmentVariables</code> and
     * <code>AdditionalLaunchArgs</code> have similar purposes.
     * <code>AdditionalEnvironmentVariables</code> passes data using environment
     * variables; while <code>AdditionalLaunchArgs</code> passes data using
     * command-line arguments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const { return m_additionalLaunchArgs; }
    inline bool AdditionalLaunchArgsHasBeenSet() const { return m_additionalLaunchArgsHasBeenSet; }
    template<typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
    void SetAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs = std::forward<AdditionalLaunchArgsT>(value); }
    template<typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
    StartStreamSessionRequest& WithAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { SetAdditionalLaunchArgs(std::forward<AdditionalLaunchArgsT>(value)); return *this;}
    template<typename AdditionalLaunchArgsT = Aws::String>
    StartStreamSessionRequest& AddAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs.emplace_back(std::forward<AdditionalLaunchArgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of options that you can use to control the stream session runtime
     * environment, expressed as a set of key-value pairs. You can use this to
     * configure the application or stream session details. You can also provide custom
     * environment variables that Amazon GameLift Streams passes to your game
     * client.</p>  <p>If you want to debug your application with environment
     * variables, we recommend that you do so in a local environment outside of Amazon
     * GameLift Streams. For more information, refer to the Compatibility Guidance in
     * the troubleshooting section of the Developer Guide.</p>  <p>
     * <code>AdditionalEnvironmentVariables</code> and
     * <code>AdditionalLaunchArgs</code> have similar purposes.
     * <code>AdditionalEnvironmentVariables</code> passes data using environment
     * variables; while <code>AdditionalLaunchArgs</code> passes data using
     * command-line arguments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const { return m_additionalEnvironmentVariables; }
    inline bool AdditionalEnvironmentVariablesHasBeenSet() const { return m_additionalEnvironmentVariablesHasBeenSet; }
    template<typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables = std::forward<AdditionalEnvironmentVariablesT>(value); }
    template<typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    StartStreamSessionRequest& WithAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) { SetAdditionalEnvironmentVariables(std::forward<AdditionalEnvironmentVariablesT>(value)); return *this;}
    template<typename AdditionalEnvironmentVariablesKeyT = Aws::String, typename AdditionalEnvironmentVariablesValueT = Aws::String>
    StartStreamSessionRequest& AddAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesKeyT&& key, AdditionalEnvironmentVariablesValueT&& value) {
      m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(std::forward<AdditionalEnvironmentVariablesKeyT>(key), std::forward<AdditionalEnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_signalRequest;
    bool m_signalRequestHasBeenSet = false;

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;

    int m_connectionTimeoutSeconds{0};
    bool m_connectionTimeoutSecondsHasBeenSet = false;

    int m_sessionLengthSeconds{0};
    bool m_sessionLengthSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalLaunchArgs;
    bool m_additionalLaunchArgsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;
    bool m_additionalEnvironmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
