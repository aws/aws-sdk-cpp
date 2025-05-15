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
   * <p>Contains configurations for the input node of a DoWhile loop in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/LoopInputFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class LoopInputFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API LoopInputFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API LoopInputFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API LoopInputFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
