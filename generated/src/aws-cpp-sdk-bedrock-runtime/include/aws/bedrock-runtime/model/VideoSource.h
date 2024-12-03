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
   * <p>A video source. You can upload a smaller video as a base64-encoded string as
   * long as the encoded file is less than 25MB. You can also transfer videos up to
   * 1GB in size from an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/VideoSource">AWS
   * API Reference</a></p>
   */
  class VideoSource
  {
  public:
    AWS_BEDROCKRUNTIME_API VideoSource();
    AWS_BEDROCKRUNTIME_API VideoSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API VideoSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Video content encoded in base64.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline VideoSource& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}
    inline VideoSource& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of a video object in an S3 bucket.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline VideoSource& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}
    inline VideoSource& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
