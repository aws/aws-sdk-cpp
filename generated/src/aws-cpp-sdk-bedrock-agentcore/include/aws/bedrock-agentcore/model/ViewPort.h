/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>The configuration that defines the dimensions of a browser viewport in a
   * browser session. The viewport determines the visible area of web content and
   * affects how web pages are rendered and displayed. Proper viewport configuration
   * ensures that web content is displayed correctly for the agent's browsing
   * tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ViewPort">AWS
   * API Reference</a></p>
   */
  class ViewPort
  {
  public:
    AWS_BEDROCKAGENTCORE_API ViewPort() = default;
    AWS_BEDROCKAGENTCORE_API ViewPort(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API ViewPort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The width of the viewport in pixels. This value determines the horizontal
     * dimension of the visible area. Valid values range from 800 to 1920 pixels.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline ViewPort& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the viewport in pixels. This value determines the vertical
     * dimension of the visible area. Valid values range from 600 to 1080 pixels.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline ViewPort& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}
  private:

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
