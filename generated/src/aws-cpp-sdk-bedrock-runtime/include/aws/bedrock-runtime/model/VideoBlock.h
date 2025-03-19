/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/VideoFormat.h>
#include <aws/bedrock-runtime/model/VideoSource.h>
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
   * <p>A video block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/VideoBlock">AWS
   * API Reference</a></p>
   */
  class VideoBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API VideoBlock() = default;
    AWS_BEDROCKRUNTIME_API VideoBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API VideoBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The block's format.</p>
     */
    inline VideoFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(VideoFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline VideoBlock& WithFormat(VideoFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block's source.</p>
     */
    inline const VideoSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = VideoSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = VideoSource>
    VideoBlock& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    VideoFormat m_format{VideoFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    VideoSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
