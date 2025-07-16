/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderType.h>
#include <aws/bedrock-agentcore-control/model/CredentialProvider.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The configuration for a credential provider. This structure defines how the
   * gateway authenticates with the target endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CredentialProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class CredentialProviderConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CredentialProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of credential provider. This field specifies which authentication
     * method the gateway uses.</p>
     */
    inline CredentialProviderType GetCredentialProviderType() const { return m_credentialProviderType; }
    inline bool CredentialProviderTypeHasBeenSet() const { return m_credentialProviderTypeHasBeenSet; }
    inline void SetCredentialProviderType(CredentialProviderType value) { m_credentialProviderTypeHasBeenSet = true; m_credentialProviderType = value; }
    inline CredentialProviderConfiguration& WithCredentialProviderType(CredentialProviderType value) { SetCredentialProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credential provider. This field contains the specific configuration for
     * the credential provider type.</p>
     */
    inline const CredentialProvider& GetCredentialProvider() const { return m_credentialProvider; }
    inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }
    template<typename CredentialProviderT = CredentialProvider>
    void SetCredentialProvider(CredentialProviderT&& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = std::forward<CredentialProviderT>(value); }
    template<typename CredentialProviderT = CredentialProvider>
    CredentialProviderConfiguration& WithCredentialProvider(CredentialProviderT&& value) { SetCredentialProvider(std::forward<CredentialProviderT>(value)); return *this;}
    ///@}
  private:

    CredentialProviderType m_credentialProviderType{CredentialProviderType::NOT_SET};
    bool m_credentialProviderTypeHasBeenSet = false;

    CredentialProvider m_credentialProvider;
    bool m_credentialProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
