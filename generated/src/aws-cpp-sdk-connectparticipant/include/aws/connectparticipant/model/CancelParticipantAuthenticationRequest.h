/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/ConnectParticipantRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

  /**
   */
  class CancelParticipantAuthenticationRequest : public ConnectParticipantRequest
  {
  public:
    AWS_CONNECTPARTICIPANT_API CancelParticipantAuthenticationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelParticipantAuthentication"; }

    AWS_CONNECTPARTICIPANT_API Aws::String SerializePayload() const override;

    AWS_CONNECTPARTICIPANT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>sessionId</code> provided in the
     * <code>authenticationInitiated</code> event.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    CancelParticipantAuthenticationRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication token associated with the participant's connection.</p>
     */
    inline const Aws::String& GetConnectionToken() const { return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    template<typename ConnectionTokenT = Aws::String>
    void SetConnectionToken(ConnectionTokenT&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::forward<ConnectionTokenT>(value); }
    template<typename ConnectionTokenT = Aws::String>
    CancelParticipantAuthenticationRequest& WithConnectionToken(ConnectionTokenT&& value) { SetConnectionToken(std::forward<ConnectionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
