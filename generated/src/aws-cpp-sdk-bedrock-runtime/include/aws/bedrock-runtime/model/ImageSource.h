/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/bedrock-runtime/model/S3Location.h>
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
    AWS_BEDROCKRUNTIME_API ImageSource() = default;
    AWS_BEDROCKRUNTIME_API ImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw image bytes for the image. If you use an AWS SDK, you don't need to
     * encode the image bytes in base64.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    ImageSource& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an image object in an Amazon S3 bucket. To see which models
     * support S3 uploads, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/conversation-inference-supported-models-features.html">Supported
     * models and features for Converse</a>.</p>
     */
    inline const S3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3Location>
    ImageSource& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
