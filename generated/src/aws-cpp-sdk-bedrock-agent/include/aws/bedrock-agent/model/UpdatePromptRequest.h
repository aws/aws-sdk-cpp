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
    AWS_BEDROCKAGENT_API UpdatePromptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrompt"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to encrypt the prompt.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const{ return m_customerEncryptionKeyArn; }
    inline bool CustomerEncryptionKeyArnHasBeenSet() const { return m_customerEncryptionKeyArnHasBeenSet; }
    inline void SetCustomerEncryptionKeyArn(const Aws::String& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = value; }
    inline void SetCustomerEncryptionKeyArn(Aws::String&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::move(value); }
    inline void SetCustomerEncryptionKeyArn(const char* value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn.assign(value); }
    inline UpdatePromptRequest& WithCustomerEncryptionKeyArn(const Aws::String& value) { SetCustomerEncryptionKeyArn(value); return *this;}
    inline UpdatePromptRequest& WithCustomerEncryptionKeyArn(Aws::String&& value) { SetCustomerEncryptionKeyArn(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithCustomerEncryptionKeyArn(const char* value) { SetCustomerEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the default variant for the prompt. This value must match the
     * <code>name</code> field in the relevant <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptVariant.html">PromptVariant</a>
     * object.</p>
     */
    inline const Aws::String& GetDefaultVariant() const{ return m_defaultVariant; }
    inline bool DefaultVariantHasBeenSet() const { return m_defaultVariantHasBeenSet; }
    inline void SetDefaultVariant(const Aws::String& value) { m_defaultVariantHasBeenSet = true; m_defaultVariant = value; }
    inline void SetDefaultVariant(Aws::String&& value) { m_defaultVariantHasBeenSet = true; m_defaultVariant = std::move(value); }
    inline void SetDefaultVariant(const char* value) { m_defaultVariantHasBeenSet = true; m_defaultVariant.assign(value); }
    inline UpdatePromptRequest& WithDefaultVariant(const Aws::String& value) { SetDefaultVariant(value); return *this;}
    inline UpdatePromptRequest& WithDefaultVariant(Aws::String&& value) { SetDefaultVariant(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithDefaultVariant(const char* value) { SetDefaultVariant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the prompt.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePromptRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePromptRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the prompt.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdatePromptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePromptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the prompt.</p>
     */
    inline const Aws::String& GetPromptIdentifier() const{ return m_promptIdentifier; }
    inline bool PromptIdentifierHasBeenSet() const { return m_promptIdentifierHasBeenSet; }
    inline void SetPromptIdentifier(const Aws::String& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = value; }
    inline void SetPromptIdentifier(Aws::String&& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = std::move(value); }
    inline void SetPromptIdentifier(const char* value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier.assign(value); }
    inline UpdatePromptRequest& WithPromptIdentifier(const Aws::String& value) { SetPromptIdentifier(value); return *this;}
    inline UpdatePromptRequest& WithPromptIdentifier(Aws::String&& value) { SetPromptIdentifier(std::move(value)); return *this;}
    inline UpdatePromptRequest& WithPromptIdentifier(const char* value) { SetPromptIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing details about a variant of the prompt.</p>
     */
    inline const Aws::Vector<PromptVariant>& GetVariants() const{ return m_variants; }
    inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }
    inline void SetVariants(const Aws::Vector<PromptVariant>& value) { m_variantsHasBeenSet = true; m_variants = value; }
    inline void SetVariants(Aws::Vector<PromptVariant>&& value) { m_variantsHasBeenSet = true; m_variants = std::move(value); }
    inline UpdatePromptRequest& WithVariants(const Aws::Vector<PromptVariant>& value) { SetVariants(value); return *this;}
    inline UpdatePromptRequest& WithVariants(Aws::Vector<PromptVariant>&& value) { SetVariants(std::move(value)); return *this;}
    inline UpdatePromptRequest& AddVariants(const PromptVariant& value) { m_variantsHasBeenSet = true; m_variants.push_back(value); return *this; }
    inline UpdatePromptRequest& AddVariants(PromptVariant&& value) { m_variantsHasBeenSet = true; m_variants.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_defaultVariant;
    bool m_defaultVariantHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_promptIdentifier;
    bool m_promptIdentifierHasBeenSet = false;

    Aws::Vector<PromptVariant> m_variants;
    bool m_variantsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
