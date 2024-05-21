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


    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline const RelayAuthentication& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline void SetAuthentication(const RelayAuthentication& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline void SetAuthentication(RelayAuthentication&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline UpdateRelayRequest& WithAuthentication(const RelayAuthentication& value) { SetAuthentication(value); return *this;}

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline UpdateRelayRequest& WithAuthentication(RelayAuthentication&& value) { SetAuthentication(std::move(value)); return *this;}


    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(const Aws::String& value) { m_relayIdHasBeenSet = true; m_relayId = value; }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(Aws::String&& value) { m_relayIdHasBeenSet = true; m_relayId = std::move(value); }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline void SetRelayId(const char* value) { m_relayIdHasBeenSet = true; m_relayId.assign(value); }

    /**
     * <p>The unique relay identifier.</p>
     */
    inline UpdateRelayRequest& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}

    /**
     * <p>The unique relay identifier.</p>
     */
    inline UpdateRelayRequest& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}

    /**
     * <p>The unique relay identifier.</p>
     */
    inline UpdateRelayRequest& WithRelayId(const char* value) { SetRelayId(value); return *this;}


    /**
     * <p>The name of the relay resource.</p>
     */
    inline const Aws::String& GetRelayName() const{ return m_relayName; }

    /**
     * <p>The name of the relay resource.</p>
     */
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }

    /**
     * <p>The name of the relay resource.</p>
     */
    inline void SetRelayName(const Aws::String& value) { m_relayNameHasBeenSet = true; m_relayName = value; }

    /**
     * <p>The name of the relay resource.</p>
     */
    inline void SetRelayName(Aws::String&& value) { m_relayNameHasBeenSet = true; m_relayName = std::move(value); }

    /**
     * <p>The name of the relay resource.</p>
     */
    inline void SetRelayName(const char* value) { m_relayNameHasBeenSet = true; m_relayName.assign(value); }

    /**
     * <p>The name of the relay resource.</p>
     */
    inline UpdateRelayRequest& WithRelayName(const Aws::String& value) { SetRelayName(value); return *this;}

    /**
     * <p>The name of the relay resource.</p>
     */
    inline UpdateRelayRequest& WithRelayName(Aws::String&& value) { SetRelayName(std::move(value)); return *this;}

    /**
     * <p>The name of the relay resource.</p>
     */
    inline UpdateRelayRequest& WithRelayName(const char* value) { SetRelayName(value); return *this;}


    /**
     * <p>The destination relay server address.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The destination relay server address.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The destination relay server address.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The destination relay server address.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The destination relay server address.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The destination relay server address.</p>
     */
    inline UpdateRelayRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The destination relay server address.</p>
     */
    inline UpdateRelayRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The destination relay server address.</p>
     */
    inline UpdateRelayRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The destination relay server port.</p>
     */
    inline int GetServerPort() const{ return m_serverPort; }

    /**
     * <p>The destination relay server port.</p>
     */
    inline bool ServerPortHasBeenSet() const { return m_serverPortHasBeenSet; }

    /**
     * <p>The destination relay server port.</p>
     */
    inline void SetServerPort(int value) { m_serverPortHasBeenSet = true; m_serverPort = value; }

    /**
     * <p>The destination relay server port.</p>
     */
    inline UpdateRelayRequest& WithServerPort(int value) { SetServerPort(value); return *this;}

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
