/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowConditionalConnectionConfiguration.h>
#include <aws/bedrock-agent/model/FlowDataConnectionConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The configuration of the connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowConnectionConfiguration">AWS
   * API Reference</a></p>
   */
  class FlowConnectionConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration();
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of a connection originating from a Condition node.</p>
     */
    inline const FlowConditionalConnectionConfiguration& GetConditional() const{ return m_conditional; }
    inline bool ConditionalHasBeenSet() const { return m_conditionalHasBeenSet; }
    inline void SetConditional(const FlowConditionalConnectionConfiguration& value) { m_conditionalHasBeenSet = true; m_conditional = value; }
    inline void SetConditional(FlowConditionalConnectionConfiguration&& value) { m_conditionalHasBeenSet = true; m_conditional = std::move(value); }
    inline FlowConnectionConfiguration& WithConditional(const FlowConditionalConnectionConfiguration& value) { SetConditional(value); return *this;}
    inline FlowConnectionConfiguration& WithConditional(FlowConditionalConnectionConfiguration&& value) { SetConditional(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a connection originating from a node that isn't a
     * Condition node.</p>
     */
    inline const FlowDataConnectionConfiguration& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const FlowDataConnectionConfiguration& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(FlowDataConnectionConfiguration&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline FlowConnectionConfiguration& WithData(const FlowDataConnectionConfiguration& value) { SetData(value); return *this;}
    inline FlowConnectionConfiguration& WithData(FlowDataConnectionConfiguration&& value) { SetData(std::move(value)); return *this;}
    ///@}
  private:

    FlowConditionalConnectionConfiguration m_conditional;
    bool m_conditionalHasBeenSet = false;

    FlowDataConnectionConfiguration m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
