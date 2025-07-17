/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/RelayAuthentication.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class UpdateRelayRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API UpdateRelayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelay"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const { return m_relayId; }
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }
    template<typename RelayIdT = Aws::String>
    void SetRelayId(RelayIdT&& value) { m_relayIdHasBeenSet = true; m_relayId = std::forward<RelayIdT>(value); }
    template<typename RelayIdT = Aws::String>
    UpdateRelayRequest& WithRelayId(RelayIdT&& value) { SetRelayId(std::forward<RelayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the relay resource.</p>
     */
    inline const Aws::String& GetRelayName() const { return m_relayName; }
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }
    template<typename RelayNameT = Aws::String>
    void SetRelayName(RelayNameT&& value) { m_relayNameHasBeenSet = true; m_relayName = std::forward<RelayNameT>(value); }
    template<typename RelayNameT = Aws::String>
    UpdateRelayRequest& WithRelayName(RelayNameT&& value) { SetRelayName(std::forward<RelayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server address.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    UpdateRelayRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server port.</p>
     */
    inline int GetServerPort() const { return m_serverPort; }
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }
    inline UpdateRelayRequest& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline const RelayAuthentication& GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    template<typename AuthenticationT = RelayAuthentication>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = RelayAuthentication>
    UpdateRelayRequest& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;

    Aws::String m_relayName;
    bool m_relayNameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_serverPort{0};
    bool m_serverPortHasBeenSet = false;

    RelayAuthentication m_authentication;
    bool m_authenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
