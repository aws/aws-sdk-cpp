/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/model/RelayAuthentication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MAILMANAGER_API UpdateRelayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelay"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline const RelayAuthentication& GetAuthentication() const{ return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(const RelayAuthentication& value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline void SetAuthentication(RelayAuthentication&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }
    inline UpdateRelayRequest& WithAuthentication(const RelayAuthentication& value) { SetAuthentication(value); return *this;}
    inline UpdateRelayRequest& WithAuthentication(RelayAuthentication&& value) { SetAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }
    inline void SetRelayId(const Aws::String& value) { m_relayIdHasBeenSet = true; m_relayId = value; }
    inline void SetRelayId(Aws::String&& value) { m_relayIdHasBeenSet = true; m_relayId = std::move(value); }
    inline void SetRelayId(const char* value) { m_relayIdHasBeenSet = true; m_relayId.assign(value); }
    inline UpdateRelayRequest& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}
    inline UpdateRelayRequest& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}
    inline UpdateRelayRequest& WithRelayId(const char* value) { SetRelayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the relay resource.</p>
     */
    inline const Aws::String& GetRelayName() const{ return m_relayName; }
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }
    inline void SetRelayName(const Aws::String& value) { m_relayNameHasBeenSet = true; m_relayName = value; }
    inline void SetRelayName(Aws::String&& value) { m_relayNameHasBeenSet = true; m_relayName = std::move(value); }
    inline void SetRelayName(const char* value) { m_relayNameHasBeenSet = true; m_relayName.assign(value); }
    inline UpdateRelayRequest& WithRelayName(const Aws::String& value) { SetRelayName(value); return *this;}
    inline UpdateRelayRequest& WithRelayName(Aws::String&& value) { SetRelayName(std::move(value)); return *this;}
    inline UpdateRelayRequest& WithRelayName(const char* value) { SetRelayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server address.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline UpdateRelayRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline UpdateRelayRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline UpdateRelayRequest& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination relay server port.</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }
    inline UpdateRelayRequest& WithServerPort(int value) { SetServerPort(value); return *this;}
    ///@}
  private:

    RelayAuthentication m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;

    Aws::String m_relayName;
    bool m_relayNameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_serverPort;
    bool m_serverPortHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
