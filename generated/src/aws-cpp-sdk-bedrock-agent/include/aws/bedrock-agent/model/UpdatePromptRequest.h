/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptVariant.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdatePromptRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdatePromptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrompt"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the prompt.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePromptRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the prompt.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePromptRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to encrypt the prompt.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    UpdatePromptRequest& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the default variant for the prompt. This value must match the
     * <code>name</code> field in the relevant <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptVariant.html">PromptVariant</a>
     * object.</p>
     */
    inline const Aws::String& GetDefaultVariant() const { return m_defaultVariant; }
    inline bool DefaultVariantHasBeenSet() const { return m_defaultVariantHasBeenSet; }
    template<typename DefaultVariantT = Aws::String>
    void SetDefaultVariant(DefaultVariantT&& value) { m_defaultVariantHasBeenSet = true; m_defaultVariant = std::forward<DefaultVariantT>(value); }
    template<typename DefaultVariantT = Aws::String>
    UpdatePromptRequest& WithDefaultVariant(DefaultVariantT&& value) { SetDefaultVariant(std::forward<DefaultVariantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing details about a variant of the prompt.</p>
     */
    inline const Aws::Vector<PromptVariant>& GetVariants() const { return m_variants; }
    inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }
    template<typename VariantsT = Aws::Vector<PromptVariant>>
    void SetVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants = std::forward<VariantsT>(value); }
    template<typename VariantsT = Aws::Vector<PromptVariant>>
    UpdatePromptRequest& WithVariants(VariantsT&& value) { SetVariants(std::forward<VariantsT>(value)); return *this;}
    template<typename VariantsT = PromptVariant>
    UpdatePromptRequest& AddVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants.emplace_back(std::forward<VariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the prompt.</p>
     */
    inline const Aws::String& GetPromptIdentifier() const { return m_promptIdentifier; }
    inline bool PromptIdentifierHasBeenSet() const { return m_promptIdentifierHasBeenSet; }
    template<typename PromptIdentifierT = Aws::String>
    void SetPromptIdentifier(PromptIdentifierT&& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = std::forward<PromptIdentifierT>(value); }
    template<typename PromptIdentifierT = Aws::String>
    UpdatePromptRequest& WithPromptIdentifier(PromptIdentifierT&& value) { SetPromptIdentifier(std::forward<PromptIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_defaultVariant;
    bool m_defaultVariantHasBeenSet = false;

    Aws::Vector<PromptVariant> m_variants;
    bool m_variantsHasBeenSet = false;

    Aws::String m_promptIdentifier;
    bool m_promptIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
