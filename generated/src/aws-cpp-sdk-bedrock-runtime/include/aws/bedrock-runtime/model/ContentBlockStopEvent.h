/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
   * <p>A content block stop event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockStopEvent">AWS
   * API Reference</a></p>
   */
  class ContentBlockStopEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlockStopEvent() = default;
    AWS_BEDROCKRUNTIME_API ContentBlockStopEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The index for a content block.</p>
     */
    inline int GetContentBlockIndex() const { return m_contentBlockIndex; }
    inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
    inline void SetContentBlockIndex(int value) { m_contentBlockIndexHasBeenSet = true; m_contentBlockIndex = value; }
    inline ContentBlockStopEvent& WithContentBlockIndex(int value) { SetContentBlockIndex(value); return *this;}
    ///@}
  private:

    int m_contentBlockIndex{0};
    bool m_contentBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
