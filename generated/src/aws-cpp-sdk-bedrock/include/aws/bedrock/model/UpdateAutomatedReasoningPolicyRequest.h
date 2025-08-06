/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinition.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class UpdateAutomatedReasoningPolicyRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateAutomatedReasoningPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomatedReasoningPolicy"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy to update.
     * This must be the ARN of a draft policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    UpdateAutomatedReasoningPolicyRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated policy definition containing the formal logic rules, variables,
     * and types.</p>
     */
    inline const AutomatedReasoningPolicyDefinition& GetPolicyDefinition() const { return m_policyDefinition; }
    inline bool PolicyDefinitionHasBeenSet() const { return m_policyDefinitionHasBeenSet; }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    void SetPolicyDefinition(PolicyDefinitionT&& value) { m_policyDefinitionHasBeenSet = true; m_policyDefinition = std::forward<PolicyDefinitionT>(value); }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    UpdateAutomatedReasoningPolicyRequest& WithPolicyDefinition(PolicyDefinitionT&& value) { SetPolicyDefinition(std::forward<PolicyDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAutomatedReasoningPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAutomatedReasoningPolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AutomatedReasoningPolicyDefinition m_policyDefinition;
    bool m_policyDefinitionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
