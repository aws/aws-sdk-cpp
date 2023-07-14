/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/Websocket.h>
#include <aws/connectparticipant/model/ConnectionCredentials.h>
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
  class AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionResult
  {
  public:
    CreateParticipantConnectionResult();
    CreateParticipantConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateParticipantConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline const Websocket& GetWebsocket() const{ return m_websocket; }

    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline void SetWebsocket(const Websocket& value) { m_websocket = value; }

    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline void SetWebsocket(Websocket&& value) { m_websocket = std::move(value); }

    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline CreateParticipantConnectionResult& WithWebsocket(const Websocket& value) { SetWebsocket(value); return *this;}

    /**
     * <p>Creates the participant's websocket connection.</p>
     */
    inline CreateParticipantConnectionResult& WithWebsocket(Websocket&& value) { SetWebsocket(std::move(value)); return *this;}


    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline const ConnectionCredentials& GetConnectionCredentials() const{ return m_connectionCredentials; }

    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline void SetConnectionCredentials(const ConnectionCredentials& value) { m_connectionCredentials = value; }

    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline void SetConnectionCredentials(ConnectionCredentials&& value) { m_connectionCredentials = std::move(value); }

    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline CreateParticipantConnectionResult& WithConnectionCredentials(const ConnectionCredentials& value) { SetConnectionCredentials(value); return *this;}

    /**
     * <p>Creates the participant's connection credentials. The authentication token
     * associated with the participant's connection.</p>
     */
    inline CreateParticipantConnectionResult& WithConnectionCredentials(ConnectionCredentials&& value) { SetConnectionCredentials(std::move(value)); return *this;}

  private:

    Websocket m_websocket;

    ConnectionCredentials m_connectionCredentials;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
