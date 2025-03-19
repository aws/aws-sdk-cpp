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
   * <p>Contains configurations for an iterator node in a flow. Takes an input that
   * is an array and iteratively sends each item of the array as an output to the
   * following node. The size of the array is also returned in the output.</p> <p>The
   * output flow node at the end of the flow iteration will return a response for
   * each member of the array. To return only one response, you can include a
   * collector node downstream from the iterator node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IteratorFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class IteratorFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API IteratorFlowNodeConfiguration() = default;
    AWS_BEDROCKAGENT_API IteratorFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IteratorFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
