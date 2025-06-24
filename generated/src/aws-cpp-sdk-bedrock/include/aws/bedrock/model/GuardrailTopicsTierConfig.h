/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/GuardrailTopicsTierName.h>
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
   * <p>The tier that your guardrail uses for denied topic filters. Consider using a
   * tier that balances performance, accuracy, and compatibility with your existing
   * generative AI workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailTopicsTierConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicsTierConfig
  {
  public:
    AWS_BEDROCK_API GuardrailTopicsTierConfig() = default;
    AWS_BEDROCK_API GuardrailTopicsTierConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopicsTierConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tier that your guardrail uses for denied topic filters. Valid values
     * include:</p> <ul> <li> <p> <code>CLASSIC</code> tier – Provides established
     * guardrails functionality supporting English, French, and Spanish languages.</p>
     * </li> <li> <p> <code>STANDARD</code> tier – Provides a more robust solution than
     * the <code>CLASSIC</code> tier and has more comprehensive language support. This
     * tier requires that your guardrail use <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/guardrails-cross-region.html">cross-Region
     * inference</a>.</p> </li> </ul>
     */
    inline GuardrailTopicsTierName GetTierName() const { return m_tierName; }
    inline bool TierNameHasBeenSet() const { return m_tierNameHasBeenSet; }
    inline void SetTierName(GuardrailTopicsTierName value) { m_tierNameHasBeenSet = true; m_tierName = value; }
    inline GuardrailTopicsTierConfig& WithTierName(GuardrailTopicsTierName value) { SetTierName(value); return *this;}
    ///@}
  private:

    GuardrailTopicsTierName m_tierName{GuardrailTopicsTierName::NOT_SET};
    bool m_tierNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
