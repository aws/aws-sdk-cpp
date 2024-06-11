/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ByteContentDoc.h>
#include <aws/bedrock-agent-runtime/model/S3ObjectDoc.h>
#include <aws/bedrock-agent-runtime/model/ExternalSourceType.h>
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
   * <p>The unique external source of the content contained in the wrapper
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ExternalSource">AWS
   * API Reference</a></p>
   */
  class ExternalSource
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource();
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier, contentType, and data of the external source wrapper
     * object.</p>
     */
    inline const ByteContentDoc& GetByteContent() const{ return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    inline void SetByteContent(const ByteContentDoc& value) { m_byteContentHasBeenSet = true; m_byteContent = value; }
    inline void SetByteContent(ByteContentDoc&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::move(value); }
    inline ExternalSource& WithByteContent(const ByteContentDoc& value) { SetByteContent(value); return *this;}
    inline ExternalSource& WithByteContent(ByteContentDoc&& value) { SetByteContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the external source wrapper object.</p>
     */
    inline const S3ObjectDoc& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const S3ObjectDoc& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(S3ObjectDoc&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline ExternalSource& WithS3Location(const S3ObjectDoc& value) { SetS3Location(value); return *this;}
    inline ExternalSource& WithS3Location(S3ObjectDoc&& value) { SetS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the external source wrapper object.</p>
     */
    inline const ExternalSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const ExternalSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(ExternalSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ExternalSource& WithSourceType(const ExternalSourceType& value) { SetSourceType(value); return *this;}
    inline ExternalSource& WithSourceType(ExternalSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}
  private:

    ByteContentDoc m_byteContent;
    bool m_byteContentHasBeenSet = false;

    S3ObjectDoc m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    ExternalSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
