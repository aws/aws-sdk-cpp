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
   * <p>Contains configurations for an output flow node in the flow. You specify the
   * data type expected for the input into the node in the <code>type</code> field
   * and how to return the final output in the <code>expression</code>
   * field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/OutputFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class OutputFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API OutputFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API OutputFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OutputFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
