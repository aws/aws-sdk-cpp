/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ContentBlockDelta.h>
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
   * <p>The content block delta event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockDeltaEvent">AWS
   * API Reference</a></p>
   */
  class ContentBlockDeltaEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlockDeltaEvent();
    AWS_BEDROCKRUNTIME_API ContentBlockDeltaEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockDeltaEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delta for a content block delta event.</p>
     */
    inline const ContentBlockDelta& GetDelta() const{ return m_delta; }
    inline bool DeltaHasBeenSet() const { return m_deltaHasBeenSet; }
    inline void SetDelta(const ContentBlockDelta& value) { m_deltaHasBeenSet = true; m_delta = value; }
    inline void SetDelta(ContentBlockDelta&& value) { m_deltaHasBeenSet = true; m_delta = std::move(value); }
    inline ContentBlockDeltaEvent& WithDelta(const ContentBlockDelta& value) { SetDelta(value); return *this;}
    inline ContentBlockDeltaEvent& WithDelta(ContentBlockDelta&& value) { SetDelta(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block index for a content block delta event. </p>
     */
    inline int GetContentBlockIndex() const{ return m_contentBlockIndex; }
    inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
    inline void SetContentBlockIndex(int value) { m_contentBlockIndexHasBeenSet = true; m_contentBlockIndex = value; }
    inline ContentBlockDeltaEvent& WithContentBlockIndex(int value) { SetContentBlockIndex(value); return *this;}
    ///@}
  private:

    ContentBlockDelta m_delta;
    bool m_deltaHasBeenSet = false;

    int m_contentBlockIndex;
    bool m_contentBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
