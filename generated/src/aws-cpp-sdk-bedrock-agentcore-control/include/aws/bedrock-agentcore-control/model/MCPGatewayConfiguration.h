/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/SearchType.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The configuration for a Model Context Protocol (MCP) gateway. This structure
   * defines how the gateway implements the MCP protocol.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MCPGatewayConfiguration">AWS
   * API Reference</a></p>
   */
  class MCPGatewayConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API MCPGatewayConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API MCPGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API MCPGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported versions of the Model Context Protocol. This field specifies
     * which versions of the protocol the gateway can use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedVersions() const { return m_supportedVersions; }
    inline bool SupportedVersionsHasBeenSet() const { return m_supportedVersionsHasBeenSet; }
    template<typename SupportedVersionsT = Aws::Vector<Aws::String>>
    void SetSupportedVersions(SupportedVersionsT&& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions = std::forward<SupportedVersionsT>(value); }
    template<typename SupportedVersionsT = Aws::Vector<Aws::String>>
    MCPGatewayConfiguration& WithSupportedVersions(SupportedVersionsT&& value) { SetSupportedVersions(std::forward<SupportedVersionsT>(value)); return *this;}
    template<typename SupportedVersionsT = Aws::String>
    MCPGatewayConfiguration& AddSupportedVersions(SupportedVersionsT&& value) { m_supportedVersionsHasBeenSet = true; m_supportedVersions.emplace_back(std::forward<SupportedVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instructions for using the Model Context Protocol gateway. These
     * instructions provide guidance on how to interact with the gateway.</p>
     */
    inline const Aws::String& GetInstructions() const { return m_instructions; }
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
    template<typename InstructionsT = Aws::String>
    void SetInstructions(InstructionsT&& value) { m_instructionsHasBeenSet = true; m_instructions = std::forward<InstructionsT>(value); }
    template<typename InstructionsT = Aws::String>
    MCPGatewayConfiguration& WithInstructions(InstructionsT&& value) { SetInstructions(std::forward<InstructionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search type for the Model Context Protocol gateway. This field specifies
     * how the gateway handles search operations.</p>
     */
    inline SearchType GetSearchType() const { return m_searchType; }
    inline bool SearchTypeHasBeenSet() const { return m_searchTypeHasBeenSet; }
    inline void SetSearchType(SearchType value) { m_searchTypeHasBeenSet = true; m_searchType = value; }
    inline MCPGatewayConfiguration& WithSearchType(SearchType value) { SetSearchType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_supportedVersions;
    bool m_supportedVersionsHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;

    SearchType m_searchType{SearchType::NOT_SET};
    bool m_searchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
