/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>The model must request at least one tool (no text is generated). For example,
 * <code>{"any" : {}}</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Call a
 * tool with the Converse API</a> in the Amazon Bedrock User Guide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AnyToolChoice">AWS
 * API Reference</a></p>
 */
class AnyToolChoice {
 public:
  AWS_BEDROCKRUNTIME_API AnyToolChoice() = default;
  AWS_BEDROCKRUNTIME_API AnyToolChoice(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API AnyToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
