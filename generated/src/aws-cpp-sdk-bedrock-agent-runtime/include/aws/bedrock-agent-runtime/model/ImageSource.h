/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/bedrock-agent-runtime/model/S3Location.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The source for an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ImageSource">AWS
   * API Reference</a></p>
   */
  class ImageSource
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ImageSource();
    AWS_BEDROCKAGENTRUNTIME_API ImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The raw image bytes for the image. If you use an Amazon Web Services SDK,
     * you don't need to encode the image bytes in base64.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline ImageSource& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}
    inline ImageSource& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 bucket where the image is stored.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline ImageSource& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}
    inline ImageSource& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
