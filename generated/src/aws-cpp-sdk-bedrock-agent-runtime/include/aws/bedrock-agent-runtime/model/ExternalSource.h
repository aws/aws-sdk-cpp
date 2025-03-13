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
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource() = default;
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ExternalSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier, contentType, and data of the external source wrapper
     * object.</p>
     */
    inline const ByteContentDoc& GetByteContent() const { return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    template<typename ByteContentT = ByteContentDoc>
    void SetByteContent(ByteContentT&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::forward<ByteContentT>(value); }
    template<typename ByteContentT = ByteContentDoc>
    ExternalSource& WithByteContent(ByteContentT&& value) { SetByteContent(std::forward<ByteContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the external source wrapper object.</p>
     */
    inline const S3ObjectDoc& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3ObjectDoc>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3ObjectDoc>
    ExternalSource& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the external source wrapper object.</p>
     */
    inline ExternalSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ExternalSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline ExternalSource& WithSourceType(ExternalSourceType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    ByteContentDoc m_byteContent;
    bool m_byteContentHasBeenSet = false;

    S3ObjectDoc m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    ExternalSourceType m_sourceType{ExternalSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
