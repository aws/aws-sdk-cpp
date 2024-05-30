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


    /**
     * <p>Start information about a content block start event. </p>
     */
    inline const ContentBlockStart& GetStart() const{ return m_start; }

    /**
     * <p>Start information about a content block start event. </p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Start information about a content block start event. </p>
     */
    inline void SetStart(const ContentBlockStart& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Start information about a content block start event. </p>
     */
    inline void SetStart(ContentBlockStart&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>Start information about a content block start event. </p>
     */
    inline ContentBlockStartEvent& WithStart(const ContentBlockStart& value) { SetStart(value); return *this;}

    /**
     * <p>Start information about a content block start event. </p>
     */
    inline ContentBlockStartEvent& WithStart(ContentBlockStart&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The index for a content block start event.</p>
     */
    inline int GetContentBlockIndex() const{ return m_contentBlockIndex; }

    /**
     * <p>The index for a content block start event.</p>
     */
    inline bool ContentBlockIndexHasBeenSet() const { return m_contentBlockIndexHasBeenSet; }

    /**
     * <p>The index for a content block start event.</p>
     */
    inline void SetContentBlockIndex(int value) { m_contentBlockIndexHasBeenSet = true; m_contentBlockIndex = value; }

    /**
     * <p>The index for a content block start event.</p>
     */
    inline ContentBlockStartEvent& WithContentBlockIndex(int value) { SetContentBlockIndex(value); return *this;}

  private:

    ContentBlockStart m_start;
    bool m_startHasBeenSet = false;

    int m_contentBlockIndex;
    bool m_contentBlockIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
