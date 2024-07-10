/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ByteContentFile.h>
#include <aws/bedrock-agent-runtime/model/S3ObjectFile.h>
#include <aws/bedrock-agent-runtime/model/FileSourceType.h>
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
   * <p>The source file of the content contained in the wrapper object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FileSource">AWS
   * API Reference</a></p>
   */
  class FileSource
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FileSource();
    AWS_BEDROCKAGENTRUNTIME_API FileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data and the text of the attached files.</p>
     */
    inline const ByteContentFile& GetByteContent() const{ return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    inline void SetByteContent(const ByteContentFile& value) { m_byteContentHasBeenSet = true; m_byteContent = value; }
    inline void SetByteContent(ByteContentFile&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::move(value); }
    inline FileSource& WithByteContent(const ByteContentFile& value) { SetByteContent(value); return *this;}
    inline FileSource& WithByteContent(ByteContentFile&& value) { SetByteContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The s3 location of the files to attach.</p>
     */
    inline const S3ObjectFile& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const S3ObjectFile& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(S3ObjectFile&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline FileSource& WithS3Location(const S3ObjectFile& value) { SetS3Location(value); return *this;}
    inline FileSource& WithS3Location(S3ObjectFile&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the files to attach.</p>
     */
    inline const FileSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const FileSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(FileSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline FileSource& WithSourceType(const FileSourceType& value) { SetSourceType(value); return *this;}
    inline FileSource& WithSourceType(FileSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}
  private:

    ByteContentFile m_byteContent;
    bool m_byteContentHasBeenSet = false;

    S3ObjectFile m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    FileSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
