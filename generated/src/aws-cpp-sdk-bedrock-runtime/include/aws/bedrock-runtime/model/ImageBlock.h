/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ImageFormat.h>
#include <aws/bedrock-runtime/model/ImageSource.h>
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
   * <p>Image content for a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ImageBlock">AWS
   * API Reference</a></p>
   */
  class ImageBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ImageBlock();
    AWS_BEDROCKRUNTIME_API ImageBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ImageBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format of the image.</p>
     */
    inline const ImageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the image.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the image.</p>
     */
    inline void SetFormat(const ImageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the image.</p>
     */
    inline void SetFormat(ImageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the image.</p>
     */
    inline ImageBlock& WithFormat(const ImageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the image.</p>
     */
    inline ImageBlock& WithFormat(ImageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The source for the image.</p>
     */
    inline const ImageSource& GetSource() const{ return m_source; }

    /**
     * <p>The source for the image.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source for the image.</p>
     */
    inline void SetSource(const ImageSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source for the image.</p>
     */
    inline void SetSource(ImageSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source for the image.</p>
     */
    inline ImageBlock& WithSource(const ImageSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source for the image.</p>
     */
    inline ImageBlock& WithSource(ImageSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    ImageFormat m_format;
    bool m_formatHasBeenSet = false;

    ImageSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
