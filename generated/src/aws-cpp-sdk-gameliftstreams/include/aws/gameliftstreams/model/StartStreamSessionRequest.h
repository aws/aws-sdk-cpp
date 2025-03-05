/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/GameLiftStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/Protocol.h>
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
    AWS_GAMELIFTSTREAMS_API StartStreamSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartStreamSession"; }

    AWS_GAMELIFTSTREAMS_API Aws::String SerializePayload() const override;


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
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const{ return m_additionalEnvironmentVariables; }
    inline bool AdditionalEnvironmentVariablesHasBeenSet() const { return m_additionalEnvironmentVariablesHasBeenSet; }
    inline void SetAdditionalEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables = value; }
    inline void SetAdditionalEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables = std::move(value); }
    inline StartStreamSessionRequest& WithAdditionalEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEnvironmentVariables(value); return *this;}
    inline StartStreamSessionRequest& WithAdditionalEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEnvironmentVariables(std::move(value)); return *this;}
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(key, value); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(const char* key, Aws::String&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(Aws::String&& key, const char* value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline StartStreamSessionRequest& AddAdditionalEnvironmentVariables(const char* key, const char* value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(key, value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const{ return m_additionalLaunchArgs; }
    inline bool AdditionalLaunchArgsHasBeenSet() const { return m_additionalLaunchArgsHasBeenSet; }
    inline void SetAdditionalLaunchArgs(const Aws::Vector<Aws::String>& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs = value; }
    inline void SetAdditionalLaunchArgs(Aws::Vector<Aws::String>&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs = std::move(value); }
    inline StartStreamSessionRequest& WithAdditionalLaunchArgs(const Aws::Vector<Aws::String>& value) { SetAdditionalLaunchArgs(value); return *this;}
    inline StartStreamSessionRequest& WithAdditionalLaunchArgs(Aws::Vector<Aws::String>&& value) { SetAdditionalLaunchArgs(std::move(value)); return *this;}
    inline StartStreamSessionRequest& AddAdditionalLaunchArgs(const Aws::String& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs.push_back(value); return *this; }
    inline StartStreamSessionRequest& AddAdditionalLaunchArgs(Aws::String&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs.push_back(std::move(value)); return *this; }
    inline StartStreamSessionRequest& AddAdditionalLaunchArgs(const char* value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the application resource.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }
    inline StartStreamSessionRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}
    inline StartStreamSessionRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier that represents a client request. The request is
     * idempotent, which ensures that an API request completes only once. When users
     * send a request, Amazon GameLift Streams automatically populates this field. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartStreamSessionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartStreamSessionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Length of time (in seconds) that Amazon GameLift Streams should wait for a
     * client to connect to the stream session. This time span starts when the stream
     * session reaches <code>ACTIVE</code> status. If no client connects before the
     * timeout, Amazon GameLift Streams stops the stream session with status of
     * <code>TERMINATED</code>. Default value is 120.</p>
     */
    inline int GetConnectionTimeoutSeconds() const{ return m_connectionTimeoutSeconds; }
    inline bool ConnectionTimeoutSecondsHasBeenSet() const { return m_connectionTimeoutSecondsHasBeenSet; }
    inline void SetConnectionTimeoutSeconds(int value) { m_connectionTimeoutSecondsHasBeenSet = true; m_connectionTimeoutSeconds = value; }
    inline StartStreamSessionRequest& WithConnectionTimeoutSeconds(int value) { SetConnectionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the stream session. You can update this value
     * later.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartStreamSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartStreamSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream group to run this stream session with.</p> <p>This value is an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline StartStreamSessionRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline StartStreamSessionRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of locations, in order of priority, where you want Amazon GameLift
     * Streams to start a stream from. Amazon GameLift Streams selects the location
     * with the next available capacity to start a single stream session in. If this
     * value is empty, Amazon GameLift Streams attempts to start a stream session in
     * the primary location. </p> <p> This value is A set of location names. For
     * example, <code>us-east-1</code>. For a complete list of locations that Amazon
     * GameLift Streams supports, see the Regions and quotas section in the Amazon
     * GameLift Streams Developer Guide . <pre><code> &lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const{ return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    inline void SetLocations(const Aws::Vector<Aws::String>& value) { m_locationsHasBeenSet = true; m_locations = value; }
    inline void SetLocations(Aws::Vector<Aws::String>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }
    inline StartStreamSessionRequest& WithLocations(const Aws::Vector<Aws::String>& value) { SetLocations(value); return *this;}
    inline StartStreamSessionRequest& WithLocations(Aws::Vector<Aws::String>&& value) { SetLocations(std::move(value)); return *this;}
    inline StartStreamSessionRequest& AddLocations(const Aws::String& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
    inline StartStreamSessionRequest& AddLocations(Aws::String&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }
    inline StartStreamSessionRequest& AddLocations(const char* value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data transport protocol to use for the stream session.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline StartStreamSessionRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline StartStreamSessionRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of time (in seconds) that Amazon GameLift Streams keeps
     * the stream session open. At this point, Amazon GameLift Streams ends the stream
     * session regardless of any existing client connections. Default value is
     * 43200.</p>
     */
    inline int GetSessionLengthSeconds() const{ return m_sessionLengthSeconds; }
    inline bool SessionLengthSecondsHasBeenSet() const { return m_sessionLengthSecondsHasBeenSet; }
    inline void SetSessionLengthSeconds(int value) { m_sessionLengthSecondsHasBeenSet = true; m_sessionLengthSeconds = value; }
    inline StartStreamSessionRequest& WithSessionLengthSeconds(int value) { SetSessionLengthSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A WebRTC ICE offer string to use when initializing a WebRTC connection. The
     * offer is a very long JSON string. Provide the string as a text value in
     * quotes.</p>
     */
    inline const Aws::String& GetSignalRequest() const{ return m_signalRequest; }
    inline bool SignalRequestHasBeenSet() const { return m_signalRequestHasBeenSet; }
    inline void SetSignalRequest(const Aws::String& value) { m_signalRequestHasBeenSet = true; m_signalRequest = value; }
    inline void SetSignalRequest(Aws::String&& value) { m_signalRequestHasBeenSet = true; m_signalRequest = std::move(value); }
    inline void SetSignalRequest(const char* value) { m_signalRequestHasBeenSet = true; m_signalRequest.assign(value); }
    inline StartStreamSessionRequest& WithSignalRequest(const Aws::String& value) { SetSignalRequest(value); return *this;}
    inline StartStreamSessionRequest& WithSignalRequest(Aws::String&& value) { SetSignalRequest(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithSignalRequest(const char* value) { SetSignalRequest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline StartStreamSessionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline StartStreamSessionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline StartStreamSessionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;
    bool m_additionalEnvironmentVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalLaunchArgs;
    bool m_additionalLaunchArgsHasBeenSet = false;

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_connectionTimeoutSeconds;
    bool m_connectionTimeoutSecondsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_sessionLengthSeconds;
    bool m_sessionLengthSecondsHasBeenSet = false;

    Aws::String m_signalRequest;
    bool m_signalRequestHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
