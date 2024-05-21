/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/model/RelayAuthentication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class CreateRelayRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateRelayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelay"; }

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
    inline CreateRelayRequest& WithAuthentication(const RelayAuthentication& value) { SetAuthentication(value); return *this;}

    /**
     * <p>Authentication for the relay destination server—specify the secretARN where
     * the SMTP credentials are stored.</p>
     */
    inline CreateRelayRequest& WithAuthentication(RelayAuthentication&& value) { SetAuthentication(std::move(value)); return *this;}


    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline CreateRelayRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline CreateRelayRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline CreateRelayRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline const Aws::String& GetRelayName() const{ return m_relayName; }

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline void SetRelayName(const Aws::String& value) { m_relayNameHasBeenSet = true; m_relayName = value; }

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline void SetRelayName(Aws::String&& value) { m_relayNameHasBeenSet = true; m_relayName = std::move(value); }

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline void SetRelayName(const char* value) { m_relayNameHasBeenSet = true; m_relayName.assign(value); }

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline CreateRelayRequest& WithRelayName(const Aws::String& value) { SetRelayName(value); return *this;}

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline CreateRelayRequest& WithRelayName(Aws::String&& value) { SetRelayName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the relay resource.</p>
     */
    inline CreateRelayRequest& WithRelayName(const char* value) { SetRelayName(value); return *this;}


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
    inline CreateRelayRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The destination relay server address.</p>
     */
    inline CreateRelayRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The destination relay server address.</p>
     */
    inline CreateRelayRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


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
    inline CreateRelayRequest& WithServerPort(int value) { SetServerPort(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateRelayRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateRelayRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateRelayRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateRelayRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    RelayAuthentication m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_relayName;
    bool m_relayNameHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_serverPort;
    bool m_serverPortHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
