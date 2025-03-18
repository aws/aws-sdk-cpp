/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Defines tools, at least one of which must be requested by the model. No text
   * is generated but the results of tool use are sent back to the model to help
   * generate a response. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Use a
   * tool to complete an Amazon Bedrock model response</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AnyToolChoice">AWS
   * API Reference</a></p>
   */
  class AnyToolChoice
  {
  public:
    AWS_BEDROCKAGENT_API AnyToolChoice() = default;
    AWS_BEDROCKAGENT_API AnyToolChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AnyToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
