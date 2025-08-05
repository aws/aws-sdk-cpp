/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>

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
   * <p>Indicates that the input exceeds the processing capacity due to the volume or
   * complexity of the logical information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckTooComplexFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckTooComplexFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckTooComplexFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckTooComplexFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckTooComplexFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
