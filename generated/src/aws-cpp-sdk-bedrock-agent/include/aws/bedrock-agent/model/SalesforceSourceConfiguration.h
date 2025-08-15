/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/SalesforceAuthType.h>
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
   * <p>The endpoint information to connect to your Salesforce data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SalesforceSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SalesforceSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API SalesforceSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SalesforceSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Salesforce host URL or instance URL.</p>
     */
    inline const Aws::String& GetHostUrl() const { return m_hostUrl; }
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }
    template<typename HostUrlT = Aws::String>
    void SetHostUrl(HostUrlT&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::forward<HostUrlT>(value); }
    template<typename HostUrlT = Aws::String>
    SalesforceSourceConfiguration& WithHostUrl(HostUrlT&& value) { SetHostUrl(std::forward<HostUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication type to authenticate and connect to your
     * Salesforce instance.</p>
     */
    inline SalesforceAuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(SalesforceAuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline SalesforceSourceConfiguration& WithAuthType(SalesforceAuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of an Secrets Manager secret that stores your
     * authentication credentials for your Salesforce instance URL. For more
     * information on the key-value pairs that must be included in your secret,
     * depending on your authentication type, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/salesforce-data-source-connector.html#configuration-salesforce-connector">Salesforce
     * connection configuration</a>.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    template<typename CredentialsSecretArnT = Aws::String>
    void SetCredentialsSecretArn(CredentialsSecretArnT&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value); }
    template<typename CredentialsSecretArnT = Aws::String>
    SalesforceSourceConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) { SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet = false;

    SalesforceAuthType m_authType{SalesforceAuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
