/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FileSourceType.h>
#include <aws/bedrock-agent-runtime/model/S3ObjectFile.h>
#include <aws/bedrock-agent-runtime/model/ByteContentFile.h>
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
    AWS_BEDROCKAGENTRUNTIME_API FileSource() = default;
    AWS_BEDROCKAGENTRUNTIME_API FileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source type of the files to attach.</p>
     */
    inline FileSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(FileSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline FileSource& WithSourceType(FileSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The s3 location of the files to attach.</p>
     */
    inline const S3ObjectFile& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3ObjectFile>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3ObjectFile>
    FileSource& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data and the text of the attached files.</p>
     */
    inline const ByteContentFile& GetByteContent() const { return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    template<typename ByteContentT = ByteContentFile>
    void SetByteContent(ByteContentT&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::forward<ByteContentT>(value); }
    template<typename ByteContentT = ByteContentFile>
    FileSource& WithByteContent(ByteContentT&& value) { SetByteContent(std::forward<ByteContentT>(value)); return *this;}
    ///@}
  private:

    FileSourceType m_sourceType{FileSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    S3ObjectFile m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    ByteContentFile m_byteContent;
    bool m_byteContentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
