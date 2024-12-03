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
    AWS_BEDROCKRUNTIME_API VideoBlock();
    AWS_BEDROCKRUNTIME_API VideoBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API VideoBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The block's format.</p>
     */
    inline const VideoFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const VideoFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(VideoFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline VideoBlock& WithFormat(const VideoFormat& value) { SetFormat(value); return *this;}
    inline VideoBlock& WithFormat(VideoFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block's source.</p>
     */
    inline const VideoSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const VideoSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(VideoSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline VideoBlock& WithSource(const VideoSource& value) { SetSource(value); return *this;}
    inline VideoBlock& WithSource(VideoSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    VideoFormat m_format;
    bool m_formatHasBeenSet = false;

    VideoSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
