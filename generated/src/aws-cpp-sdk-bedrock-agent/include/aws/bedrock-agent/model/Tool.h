/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ToolSpecification.h>
#include <aws/bedrock-agent/model/CachePointBlock.h>
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
   * <p>Contains configurations for a tool that a model can use when generating a
   * response. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Use a
   * tool to complete an Amazon Bedrock model response</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/Tool">AWS
   * API Reference</a></p>
   */
  class Tool
  {
  public:
    AWS_BEDROCKAGENT_API Tool() = default;
    AWS_BEDROCKAGENT_API Tool(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Tool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specification for the tool.</p>
     */
    inline const ToolSpecification& GetToolSpec() const { return m_toolSpec; }
    inline bool ToolSpecHasBeenSet() const { return m_toolSpecHasBeenSet; }
    template<typename ToolSpecT = ToolSpecification>
    void SetToolSpec(ToolSpecT&& value) { m_toolSpecHasBeenSet = true; m_toolSpec = std::forward<ToolSpecT>(value); }
    template<typename ToolSpecT = ToolSpecification>
    Tool& WithToolSpec(ToolSpecT&& value) { SetToolSpec(std::forward<ToolSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a cache checkpoint within a tool designation</p>
     */
    inline const CachePointBlock& GetCachePoint() const { return m_cachePoint; }
    inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
    template<typename CachePointT = CachePointBlock>
    void SetCachePoint(CachePointT&& value) { m_cachePointHasBeenSet = true; m_cachePoint = std::forward<CachePointT>(value); }
    template<typename CachePointT = CachePointBlock>
    Tool& WithCachePoint(CachePointT&& value) { SetCachePoint(std::forward<CachePointT>(value)); return *this;}
    ///@}
  private:

    ToolSpecification m_toolSpec;
    bool m_toolSpecHasBeenSet = false;

    CachePointBlock m_cachePoint;
    bool m_cachePointHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
