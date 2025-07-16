/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderVendorType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about an OAuth2 credential provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2CredentialProviderItem">AWS
   * API Reference</a></p>
   */
  class Oauth2CredentialProviderItem
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2CredentialProviderItem() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2CredentialProviderItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2CredentialProviderItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Oauth2CredentialProviderItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the OAuth2 credential provider.</p>
     */
    inline CredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
    inline bool CredentialProviderVendorHasBeenSet() const { return m_credentialProviderVendorHasBeenSet; }
    inline void SetCredentialProviderVendor(CredentialProviderVendorType value) { m_credentialProviderVendorHasBeenSet = true; m_credentialProviderVendor = value; }
    inline Oauth2CredentialProviderItem& WithCredentialProviderVendor(CredentialProviderVendorType value) { SetCredentialProviderVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OAuth2 credential provider.</p>
     */
    inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
    inline bool CredentialProviderArnHasBeenSet() const { return m_credentialProviderArnHasBeenSet; }
    template<typename CredentialProviderArnT = Aws::String>
    void SetCredentialProviderArn(CredentialProviderArnT&& value) { m_credentialProviderArnHasBeenSet = true; m_credentialProviderArn = std::forward<CredentialProviderArnT>(value); }
    template<typename CredentialProviderArnT = Aws::String>
    Oauth2CredentialProviderItem& WithCredentialProviderArn(CredentialProviderArnT&& value) { SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OAuth2 credential provider was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Oauth2CredentialProviderItem& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OAuth2 credential provider was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Oauth2CredentialProviderItem& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CredentialProviderVendorType m_credentialProviderVendor{CredentialProviderVendorType::NOT_SET};
    bool m_credentialProviderVendorHasBeenSet = false;

    Aws::String m_credentialProviderArn;
    bool m_credentialProviderArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
