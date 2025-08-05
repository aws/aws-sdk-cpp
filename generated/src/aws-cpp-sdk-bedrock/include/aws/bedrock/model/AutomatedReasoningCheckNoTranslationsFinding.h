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
   * <p>Indicates that no relevant logical information could be extracted from the
   * input for validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckNoTranslationsFinding">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckNoTranslationsFinding
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckNoTranslationsFinding() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckNoTranslationsFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckNoTranslationsFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
