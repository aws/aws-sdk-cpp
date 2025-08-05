/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Indicates that the input exceeds the processing capacity due to the volume or
   * complexity of the logical information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningTooComplexFinding">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningTooComplexFinding
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTooComplexFinding() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTooComplexFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningTooComplexFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
