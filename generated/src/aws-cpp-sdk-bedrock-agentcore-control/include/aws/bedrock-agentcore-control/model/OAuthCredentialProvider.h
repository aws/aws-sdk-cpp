/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>An OAuth credential provider for gateway authentication. This structure
   * contains the configuration for authenticating with the target endpoint using
   * OAuth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OAuthCredentialProvider">AWS
   * API Reference</a></p>
   */
  class OAuthCredentialProvider
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API OAuthCredentialProvider() = default;
    AWS_BEDROCKAGENTCORECONTROL_API OAuthCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API OAuthCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OAuth credential provider. This ARN
     * identifies the provider in Amazon Web Services.</p>
     */
    inline const Aws::String& GetProviderArn() const { return m_providerArn; }
    inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
    template<typename ProviderArnT = Aws::String>
    void SetProviderArn(ProviderArnT&& value) { m_providerArnHasBeenSet = true; m_providerArn = std::forward<ProviderArnT>(value); }
    template<typename ProviderArnT = Aws::String>
    OAuthCredentialProvider& WithProviderArn(ProviderArnT&& value) { SetProviderArn(std::forward<ProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth scopes for the credential provider. These scopes define the level
     * of access requested from the OAuth provider.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    OAuthCredentialProvider& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    OAuthCredentialProvider& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom parameters for the OAuth credential provider. These parameters
     * provide additional configuration for the OAuth authentication process.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
    inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
    template<typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomParameters(CustomParametersT&& value) { m_customParametersHasBeenSet = true; m_customParameters = std::forward<CustomParametersT>(value); }
    template<typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
    OAuthCredentialProvider& WithCustomParameters(CustomParametersT&& value) { SetCustomParameters(std::forward<CustomParametersT>(value)); return *this;}
    template<typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
    OAuthCredentialProvider& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
      m_customParametersHasBeenSet = true; m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_providerArn;
    bool m_providerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customParameters;
    bool m_customParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
