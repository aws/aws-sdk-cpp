/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ContentBlockStart.h>
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
   * <p>Content block start event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ContentBlockStartEvent">AWS
   * API Reference</a></p>
   */
  class ContentBlockStartEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API ContentBlockStartEvent();
    AWS_BEDROCKRUNTIME_API ContentBlockStartEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ContentBlockStartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Start information about a content block start event. </p>
     */
    inline const ContentBlockStart& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const ContentBlockStart& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(ContentBlockStart&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline ContentBlockStartEvent& WithStart(const ContentBlockStart& value) { SetStart(value); return *this;}
    inline ContentBlockStartEvent& WithStart(ContentBlockStart&& value) { SetStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index for a content block start event.</p>
     */
    inline int GetContentBlockIndex() const{ return m_contentBlockIndex; }
    inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }
    inline void SetContentBlockIndex(int value) { m_contentBlockIndexHasBeenSet = true; m_contentBlockIndex = value; }
    inline ContentBlockStartEvent& WithContentBlockIndex(int value) { SetContentBlockIndex(value); return *this;}
    ///@}
  private:

    ContentBlockStart m_start;
    bool m_startHasBeenSet = false;

    int m_contentBlockIndex;
    bool m_contentBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
