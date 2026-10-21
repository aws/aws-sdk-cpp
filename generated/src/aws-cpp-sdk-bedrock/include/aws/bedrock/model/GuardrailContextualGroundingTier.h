/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailContextualGroundingTierName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Specifies the tier that your guardrail uses for contextual grounding
 * checks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailContextualGroundingTier">AWS
 * API Reference</a></p>
 */
class GuardrailContextualGroundingTier {
 public:
  AWS_BEDROCK_API GuardrailContextualGroundingTier() = default;
  AWS_BEDROCK_API GuardrailContextualGroundingTier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API GuardrailContextualGroundingTier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tier that your guardrail uses for contextual grounding. Valid values
   * include:</p> <ul> <li> <p> <code>CLASSIC</code> tier – Provides established
   * contextual grounding functionality supporting English, French, and Spanish
   * languages.</p> </li> <li> <p> <code>STANDARD</code> tier – Provides a more
   * robust solution than the <code>CLASSIC</code> tier, with support for reasoning,
   * conversational content and more comprehensive language support. This tier
   * requires that your guardrail use <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region.html">cross-Region
   * inference</a>.</p> </li> </ul>
   */
  inline GuardrailContextualGroundingTierName GetTierName() const { return m_tierName; }
  inline bool TierNameHasBeenSet() const { return m_tierNameHasBeenSet; }
  inline void SetTierName(GuardrailContextualGroundingTierName value) {
    m_tierNameHasBeenSet = true;
    m_tierName = value;
  }
  inline GuardrailContextualGroundingTier& WithTierName(GuardrailContextualGroundingTierName value) {
    SetTierName(value);
    return *this;
  }
  ///@}
 private:
  GuardrailContextualGroundingTierName m_tierName{GuardrailContextualGroundingTierName::NOT_SET};
  bool m_tierNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
