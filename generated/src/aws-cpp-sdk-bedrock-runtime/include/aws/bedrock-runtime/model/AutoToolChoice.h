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
   * <p>The Model automatically decides if a tool should be called or whether to
   * generate text instead. For example, <code>{"auto" : {}}</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AutoToolChoice">AWS
   * API Reference</a></p>
   */
  class AutoToolChoice
  {
  public:
    AWS_BEDROCKRUNTIME_API AutoToolChoice() = default;
    AWS_BEDROCKRUNTIME_API AutoToolChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API AutoToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
