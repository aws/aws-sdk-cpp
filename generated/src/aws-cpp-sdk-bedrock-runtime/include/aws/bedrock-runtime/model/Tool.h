/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/CachePointBlock.h>
#include <aws/bedrock-runtime/model/SystemTool.h>
#include <aws/bedrock-runtime/model/ToolSpecification.h>

#include <utility>

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
 * <p>Information about a tool that you can use with the Converse API. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Call a
 * tool with the Converse API</a> in the Amazon Bedrock User Guide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/Tool">AWS
 * API Reference</a></p>
 */
class Tool {
 public:
  AWS_BEDROCKRUNTIME_API Tool() = default;
  AWS_BEDROCKRUNTIME_API Tool(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Tool& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The specfication for the tool. </p>
   */
  inline const ToolSpecification& GetToolSpec() const { return m_toolSpec; }
  inline bool ToolSpecHasBeenSet() const { return m_toolSpecHasBeenSet; }
  template <typename ToolSpecT = ToolSpecification>
  void SetToolSpec(ToolSpecT&& value) {
    m_toolSpecHasBeenSet = true;
    m_toolSpec = std::forward<ToolSpecT>(value);
  }
  template <typename ToolSpecT = ToolSpecification>
  Tool& WithToolSpec(ToolSpecT&& value) {
    SetToolSpec(std::forward<ToolSpecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the system-defined tool that you want use.</p>
   */
  inline const SystemTool& GetSystemTool() const { return m_systemTool; }
  inline bool SystemToolHasBeenSet() const { return m_systemToolHasBeenSet; }
  template <typename SystemToolT = SystemTool>
  void SetSystemTool(SystemToolT&& value) {
    m_systemToolHasBeenSet = true;
    m_systemTool = std::forward<SystemToolT>(value);
  }
  template <typename SystemToolT = SystemTool>
  Tool& WithSystemTool(SystemToolT&& value) {
    SetSystemTool(std::forward<SystemToolT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CachePoint to include in the tool configuration.</p>
   */
  inline const CachePointBlock& GetCachePoint() const { return m_cachePoint; }
  inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
  template <typename CachePointT = CachePointBlock>
  void SetCachePoint(CachePointT&& value) {
    m_cachePointHasBeenSet = true;
    m_cachePoint = std::forward<CachePointT>(value);
  }
  template <typename CachePointT = CachePointBlock>
  Tool& WithCachePoint(CachePointT&& value) {
    SetCachePoint(std::forward<CachePointT>(value));
    return *this;
  }
  ///@}
 private:
  ToolSpecification m_toolSpec;

  SystemTool m_systemTool;

  CachePointBlock m_cachePoint;
  bool m_toolSpecHasBeenSet = false;
  bool m_systemToolHasBeenSet = false;
  bool m_cachePointHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
