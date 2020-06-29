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
  class AWS_CONNECTPARTICIPANT_API CreateParticipantConnectionRequest : public ConnectParticipantRequest
  {
  public:
    CreateParticipantConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateParticipantConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Type of connection information required.</p>
     */
    inline const Aws::Vector<ConnectionType>& GetType() const{ return m_type; }

    /**
     * <p>Type of connection information required.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of connection information required.</p>
     */
    inline void SetType(const Aws::Vector<ConnectionType>& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of connection information required.</p>
     */
    inline void SetType(Aws::Vector<ConnectionType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of connection information required.</p>
     */
    inline CreateParticipantConnectionRequest& WithType(const Aws::Vector<ConnectionType>& value) { SetType(value); return *this;}

    /**
     * <p>Type of connection information required.</p>
     */
    inline CreateParticipantConnectionRequest& WithType(Aws::Vector<ConnectionType>&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Type of connection information required.</p>
     */
    inline CreateParticipantConnectionRequest& AddType(const ConnectionType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }

    /**
     * <p>Type of connection information required.</p>
     */
    inline CreateParticipantConnectionRequest& AddType(ConnectionType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }


    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline bool ParticipantTokenHasBeenSet() const { return m_participantTokenHasBeenSet; }

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline void SetParticipantToken(const Aws::String& value) { m_participantTokenHasBeenSet = true; m_participantToken = value; }

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline void SetParticipantToken(Aws::String&& value) { m_participantTokenHasBeenSet = true; m_participantToken = std::move(value); }

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline void SetParticipantToken(const char* value) { m_participantTokenHasBeenSet = true; m_participantToken.assign(value); }

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline CreateParticipantConnectionRequest& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline CreateParticipantConnectionRequest& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}

    /**
     * <p>Participant Token as obtained from <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartChatContactResponse.html">StartChatContact</a>
     * API response.</p>
     */
    inline CreateParticipantConnectionRequest& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}

  private:

    Aws::Vector<ConnectionType> m_type;
    bool m_typeHasBeenSet;

    Aws::String m_participantToken;
    bool m_participantTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
