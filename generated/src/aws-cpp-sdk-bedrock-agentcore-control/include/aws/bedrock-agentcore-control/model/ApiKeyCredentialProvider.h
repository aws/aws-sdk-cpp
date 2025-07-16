/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialLocation.h>
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
   * <p>An API key credential provider for gateway authentication. This structure
   * contains the configuration for authenticating with the target endpoint using an
   * API key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ApiKeyCredentialProvider">AWS
   * API Reference</a></p>
   */
  class ApiKeyCredentialProvider
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ApiKeyCredentialProvider() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ApiKeyCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API ApiKeyCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the API key credential provider. This ARN
     * identifies the provider in Amazon Web Services.</p>
     */
    inline const Aws::String& GetProviderArn() const { return m_providerArn; }
    inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
    template<typename ProviderArnT = Aws::String>
    void SetProviderArn(ProviderArnT&& value) { m_providerArnHasBeenSet = true; m_providerArn = std::forward<ProviderArnT>(value); }
    template<typename ProviderArnT = Aws::String>
    ApiKeyCredentialProvider& WithProviderArn(ProviderArnT&& value) { SetProviderArn(std::forward<ProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the credential parameter for the API key. This parameter name is
     * used when sending the API key to the target endpoint.</p>
     */
    inline const Aws::String& GetCredentialParameterName() const { return m_credentialParameterName; }
    inline bool CredentialParameterNameHasBeenSet() const { return m_credentialParameterNameHasBeenSet; }
    template<typename CredentialParameterNameT = Aws::String>
    void SetCredentialParameterName(CredentialParameterNameT&& value) { m_credentialParameterNameHasBeenSet = true; m_credentialParameterName = std::forward<CredentialParameterNameT>(value); }
    template<typename CredentialParameterNameT = Aws::String>
    ApiKeyCredentialProvider& WithCredentialParameterName(CredentialParameterNameT&& value) { SetCredentialParameterName(std::forward<CredentialParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the API key credential. This prefix is added to the API key
     * when sending it to the target endpoint.</p>
     */
    inline const Aws::String& GetCredentialPrefix() const { return m_credentialPrefix; }
    inline bool CredentialPrefixHasBeenSet() const { return m_credentialPrefixHasBeenSet; }
    template<typename CredentialPrefixT = Aws::String>
    void SetCredentialPrefix(CredentialPrefixT&& value) { m_credentialPrefixHasBeenSet = true; m_credentialPrefix = std::forward<CredentialPrefixT>(value); }
    template<typename CredentialPrefixT = Aws::String>
    ApiKeyCredentialProvider& WithCredentialPrefix(CredentialPrefixT&& value) { SetCredentialPrefix(std::forward<CredentialPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the API key credential. This field specifies where in the
     * request the API key should be placed.</p>
     */
    inline ApiKeyCredentialLocation GetCredentialLocation() const { return m_credentialLocation; }
    inline bool CredentialLocationHasBeenSet() const { return m_credentialLocationHasBeenSet; }
    inline void SetCredentialLocation(ApiKeyCredentialLocation value) { m_credentialLocationHasBeenSet = true; m_credentialLocation = value; }
    inline ApiKeyCredentialProvider& WithCredentialLocation(ApiKeyCredentialLocation value) { SetCredentialLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_providerArn;
    bool m_providerArnHasBeenSet = false;

    Aws::String m_credentialParameterName;
    bool m_credentialParameterNameHasBeenSet = false;

    Aws::String m_credentialPrefix;
    bool m_credentialPrefixHasBeenSet = false;

    ApiKeyCredentialLocation m_credentialLocation{ApiKeyCredentialLocation::NOT_SET};
    bool m_credentialLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
