﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/ConnectionType.h>
#include <utility>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class CreateParticipantConnectionRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateParticipantConnection"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Type of connection information required. If you need
     * <code>CONNECTION_CREDENTIALS</code> along with marking participant as connected,
     * pass <code>CONNECTION_CREDENTIALS</code> in <code>Type</code>.</p>
     */
    inline const Aws::Vector<ConnectionType>& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::Vector<ConnectionType>& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::Vector<ConnectionType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateParticipantConnectionRequest& WithType(const Aws::Vector<ConnectionType>& value) { SetType(value); return *this;}
    inline CreateParticipantConnectionRequest& WithType(Aws::Vector<ConnectionType>&& value) { SetType(std::move(value)); return *this;}
    inline CreateParticipantConnectionRequest& AddType(const ConnectionType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    inline CreateParticipantConnectionRequest& AddType(ConnectionType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a header parameter.</p> <p>The ParticipantToken as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContact.html">StartChatContact</a>
     * API response.</p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }
    inline bool ParticipantTokenHasBeenSet() const { return m_participantTokenHasBeenSet; }
    inline void SetParticipantToken(const Aws::String& value) { m_participantTokenHasBeenSet = true; m_participantToken = value; }
    inline void SetParticipantToken(Aws::String&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::move(value); }
    inline void SetParticipantToken(const char* value) { m_participantTokenHasBeenSet = true; m_participantToken.assign(value); }
    inline CreateParticipantConnectionRequest& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}
    inline CreateParticipantConnectionRequest& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}
    inline CreateParticipantConnectionRequest& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Connect Participant is used to mark the participant as connected for
     * customer participant in message streaming, as well as for agent or manager
     * participant in non-streaming chats.</p>
     */
    inline bool GetConnectParticipant() const{ return m_connectParticipant; }
    inline bool ConnectParticipantHasBeenSet() const { return m_connectParticipantHasBeenSet; }
    inline void SetConnectParticipant(bool value) { m_connectParticipantHasBeenSet = true; m_connectParticipant = value; }
    inline CreateParticipantConnectionRequest& WithConnectParticipant(bool value) { SetConnectParticipant(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionType> m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    bool m_connectParticipant;
    bool m_connectParticipantHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
