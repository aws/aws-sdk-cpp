/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>References a specific automated reasoning policy rule that was applied during
   * evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckRule">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckRule
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckRule() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the automated reasoning rule.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AutomatedReasoningCheckRule& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the automated reasoning policy version that contains this
     * rule.</p>
     */
    inline const Aws::String& GetPolicyVersionArn() const { return m_policyVersionArn; }
    inline bool PolicyVersionArnHasBeenSet() const { return m_policyVersionArnHasBeenSet; }
    template<typename PolicyVersionArnT = Aws::String>
    void SetPolicyVersionArn(PolicyVersionArnT&& value) { m_policyVersionArnHasBeenSet = true; m_policyVersionArn = std::forward<PolicyVersionArnT>(value); }
    template<typename PolicyVersionArnT = Aws::String>
    AutomatedReasoningCheckRule& WithPolicyVersionArn(PolicyVersionArnT&& value) { SetPolicyVersionArn(std::forward<PolicyVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_policyVersionArn;
    bool m_policyVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
