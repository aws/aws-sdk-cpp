/**
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
    AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionRequest() = default;

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
    inline const Aws::Vector<ConnectionType>& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Vector<ConnectionType>>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Vector<ConnectionType>>
    CreateParticipantConnectionRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    inline CreateParticipantConnectionRequest& AddType(ConnectionType value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a header parameter.</p> <p>The ParticipantToken as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContact.html">StartChatContact</a>
     * API response.</p>
     */
    inline const Aws::String& GetParticipantToken() const { return m_participantToken; }
    inline bool ParticipantTokenHasBeenSet() const { return m_participantTokenHasBeenSet; }
    template<typename ParticipantTokenT = Aws::String>
    void SetParticipantToken(ParticipantTokenT&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::forward<ParticipantTokenT>(value); }
    template<typename ParticipantTokenT = Aws::String>
    CreateParticipantConnectionRequest& WithParticipantToken(ParticipantTokenT&& value) { SetParticipantToken(std::forward<ParticipantTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Connect Participant is used to mark the participant as connected for
     * customer participant in message streaming, as well as for agent or manager
     * participant in non-streaming chats.</p>
     */
    inline bool GetConnectParticipant() const { return m_connectParticipant; }
    inline bool ConnectParticipantHasBeenSet() const { return m_connectParticipantHasBeenSet; }
    inline void SetConnectParticipant(bool value) { m_connectParticipantHasBeenSet = true; m_connectParticipant = value; }
    inline CreateParticipantConnectionRequest& WithConnectParticipant(bool value) { SetConnectParticipant(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectionType> m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet = false;

    bool m_connectParticipant{false};
    bool m_connectParticipantHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
