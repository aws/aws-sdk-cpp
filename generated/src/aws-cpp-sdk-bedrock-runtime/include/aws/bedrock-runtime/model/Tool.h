/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ToolSpecification.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Information about a tool that you can use with the Converse API. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Tool
   * use (function calling)</a> in the Amazon Bedrock User Guide.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/Tool">AWS
   * API Reference</a></p>
   */
  class Tool
  {
  public:
    AWS_BEDROCKRUNTIME_API Tool();
    AWS_BEDROCKRUNTIME_API Tool(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Tool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specfication for the tool.</p>
     */
    inline const ToolSpecification& GetToolSpec() const{ return m_toolSpec; }
    inline bool ToolSpecHasBeenSet() const { return m_toolSpecHasBeenSet; }
    inline void SetToolSpec(const ToolSpecification& value) { m_toolSpecHasBeenSet = true; m_toolSpec = value; }
    inline void SetToolSpec(ToolSpecification&& value) { m_toolSpecHasBeenSet = true; m_toolSpec = std::move(value); }
    inline Tool& WithToolSpec(const ToolSpecification& value) { SetToolSpec(value); return *this;}
    inline Tool& WithToolSpec(ToolSpecification&& value) { SetToolSpec(std::move(value)); return *this;}
    ///@}
  private:

    ToolSpecification m_toolSpec;
    bool m_toolSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
