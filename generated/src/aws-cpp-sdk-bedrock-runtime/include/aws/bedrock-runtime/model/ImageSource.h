/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The source for an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ImageSource">AWS
   * API Reference</a></p>
   */
  class ImageSource
  {
  public:
    AWS_BEDROCKRUNTIME_API ImageSource();
    AWS_BEDROCKRUNTIME_API ImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }

    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }

    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline ImageSource& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}

    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * base64 encode the image bytes.</p>
     */
    inline ImageSource& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
