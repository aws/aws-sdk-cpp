/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ConfluenceAuthType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/ConfluenceHostType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The endpoint information to connect to your Confluence data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ConfluenceSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ConfluenceSourceConfiguration();
    AWS_BEDROCKAGENT_API ConfluenceSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ConfluenceSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported authentication type to authenticate and connect to your
     * Confluence instance.</p>
     */
    inline const ConfluenceAuthType& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const ConfluenceAuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(ConfluenceAuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline ConfluenceSourceConfiguration& WithAuthType(const ConfluenceAuthType& value) { SetAuthType(value); return *this;}
    inline ConfluenceSourceConfiguration& WithAuthType(ConfluenceAuthType&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of an Secrets Manager secret that stores your
     * authentication credentials for your Confluence instance URL. For more
     * information on the key-value pairs that must be included in your secret,
     * depending on your authentication type, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/confluence-data-source-connector.html#configuration-confluence-connector">Confluence
     * connection configuration</a>.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }
    inline ConfluenceSourceConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}
    inline ConfluenceSourceConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}
    inline ConfluenceSourceConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported host type, whether online/cloud or server/on-premises.</p>
     */
    inline const ConfluenceHostType& GetHostType() const{ return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    inline void SetHostType(const ConfluenceHostType& value) { m_hostTypeHasBeenSet = true; m_hostType = value; }
    inline void SetHostType(ConfluenceHostType&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::move(value); }
    inline ConfluenceSourceConfiguration& WithHostType(const ConfluenceHostType& value) { SetHostType(value); return *this;}
    inline ConfluenceSourceConfiguration& WithHostType(ConfluenceHostType&& value) { SetHostType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Confluence host URL or instance URL.</p>
     */
    inline const Aws::String& GetHostUrl() const{ return m_hostUrl; }
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }
    inline void SetHostUrl(const Aws::String& value) { m_hostUrlHasBeenSet = true; m_hostUrl = value; }
    inline void SetHostUrl(Aws::String&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::move(value); }
    inline void SetHostUrl(const char* value) { m_hostUrlHasBeenSet = true; m_hostUrl.assign(value); }
    inline ConfluenceSourceConfiguration& WithHostUrl(const Aws::String& value) { SetHostUrl(value); return *this;}
    inline ConfluenceSourceConfiguration& WithHostUrl(Aws::String&& value) { SetHostUrl(std::move(value)); return *this;}
    inline ConfluenceSourceConfiguration& WithHostUrl(const char* value) { SetHostUrl(value); return *this;}
    ///@}
  private:

    ConfluenceAuthType m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    ConfluenceHostType m_hostType;
    bool m_hostTypeHasBeenSet = false;

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
