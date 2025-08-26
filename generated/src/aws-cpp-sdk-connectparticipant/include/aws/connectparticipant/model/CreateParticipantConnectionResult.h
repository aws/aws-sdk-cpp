/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/Websocket.h>
#include <aws/connectparticipant/model/ConnectionCredentials.h>
#include <aws/connectparticipant/model/WebRTCConnection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectParticipant
{
namespace Model
{
  class CreateParticipantConnectionResult
  {
  public:
    AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionResult() = default;
    AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline const Websocket& GetWebsocket() const { return m_websocket; }
    template<typename WebsocketT = Websocket>
    void SetWebsocket(WebsocketT&& value) { m_websocketHasBeenSet = true; m_websocket = std::forward<WebsocketT>(value); }
    template<typename WebsocketT = Websocket>
    CreateParticipantConnectionResult& WithWebsocket(WebsocketT&& value) { SetWebsocket(std::forward<WebsocketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline const ConnectionCredentials& GetConnectionCredentials() const { return m_connectionCredentials; }
    template<typename ConnectionCredentialsT = ConnectionCredentials>
    void SetConnectionCredentials(ConnectionCredentialsT&& value) { m_connectionCredentialsHasBeenSet = true; m_connectionCredentials = std::forward<ConnectionCredentialsT>(value); }
    template<typename ConnectionCredentialsT = ConnectionCredentials>
    CreateParticipantConnectionResult& WithConnectionCredentials(ConnectionCredentialsT&& value) { SetConnectionCredentials(std::forward<ConnectionCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates the participant's WebRTC connection data required for the client
     * application (mobile application or website) to connect to the call. </p>
     */
    inline const WebRTCConnection& GetWebRTCConnection() const { return m_webRTCConnection; }
    template<typename WebRTCConnectionT = WebRTCConnection>
    void SetWebRTCConnection(WebRTCConnectionT&& value) { m_webRTCConnectionHasBeenSet = true; m_webRTCConnection = std::forward<WebRTCConnectionT>(value); }
    template<typename WebRTCConnectionT = WebRTCConnection>
    CreateParticipantConnectionResult& WithWebRTCConnection(WebRTCConnectionT&& value) { SetWebRTCConnection(std::forward<WebRTCConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateParticipantConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Websocket m_websocket;
    bool m_websocketHasBeenSet = false;

    ConnectionCredentials m_connectionCredentials;
    bool m_connectionCredentialsHasBeenSet = false;

    WebRTCConnection m_webRTCConnection;
    bool m_webRTCConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
