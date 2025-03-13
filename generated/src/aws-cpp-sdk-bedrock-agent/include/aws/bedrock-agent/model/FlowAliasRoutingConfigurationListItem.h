/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about a version that the alias maps to.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowAliasRoutingConfigurationListItem">AWS
   * API Reference</a></p>
   */
  class FlowAliasRoutingConfigurationListItem
  {
  public:
    AWS_BEDROCKAGENT_API FlowAliasRoutingConfigurationListItem() = default;
    AWS_BEDROCKAGENT_API FlowAliasRoutingConfigurationListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowAliasRoutingConfigurationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version that the alias maps to.</p>
     */
    inline const Aws::String& GetFlowVersion() const { return m_flowVersion; }
    inline bool FlowVersionHasBeenSet() const { return m_flowVersionHasBeenSet; }
    template<typename FlowVersionT = Aws::String>
    void SetFlowVersion(FlowVersionT&& value) { m_flowVersionHasBeenSet = true; m_flowVersion = std::forward<FlowVersionT>(value); }
    template<typename FlowVersionT = Aws::String>
    FlowAliasRoutingConfigurationListItem& WithFlowVersion(FlowVersionT&& value) { SetFlowVersion(std::forward<FlowVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowVersion;
    bool m_flowVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
