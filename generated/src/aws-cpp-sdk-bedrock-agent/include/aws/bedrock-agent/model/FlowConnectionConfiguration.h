/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowDataConnectionConfiguration.h>
#include <aws/bedrock-agent/model/FlowConditionalConnectionConfiguration.h>
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
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration() = default;
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of a connection originating from a node that isn't a
     * Condition node.</p>
     */
    inline const FlowDataConnectionConfiguration& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = FlowDataConnectionConfiguration>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = FlowDataConnectionConfiguration>
    FlowConnectionConfiguration& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a connection originating from a Condition node.</p>
     */
    inline const FlowConditionalConnectionConfiguration& GetConditional() const { return m_conditional; }
    inline bool ConditionalHasBeenSet() const { return m_conditionalHasBeenSet; }
    template<typename ConditionalT = FlowConditionalConnectionConfiguration>
    void SetConditional(ConditionalT&& value) { m_conditionalHasBeenSet = true; m_conditional = std::forward<ConditionalT>(value); }
    template<typename ConditionalT = FlowConditionalConnectionConfiguration>
    FlowConnectionConfiguration& WithConditional(ConditionalT&& value) { SetConditional(std::forward<ConditionalT>(value)); return *this;}
    ///@}
  private:

    FlowDataConnectionConfiguration m_data;
    bool m_dataHasBeenSet = false;

    FlowConditionalConnectionConfiguration m_conditional;
    bool m_conditionalHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
