/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ExternalSourceType.h>
#include <aws/bedrock/model/S3ObjectDoc.h>
#include <aws/bedrock/model/ByteContentDoc.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The unique external source of the content contained in the wrapper
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ExternalSource">AWS
   * API Reference</a></p>
   */
  class ExternalSource
  {
  public:
    AWS_BEDROCK_API ExternalSource();
    AWS_BEDROCK_API ExternalSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ExternalSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The identifier, content type, and data of the external source wrapper
     * object.</p>
     */
    inline const ByteContentDoc& GetByteContent() const{ return m_byteContent; }
    inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
    inline void SetByteContent(const ByteContentDoc& value) { m_byteContentHasBeenSet = true; m_byteContent = value; }
    inline void SetByteContent(ByteContentDoc&& value) { m_byteContentHasBeenSet = true; m_byteContent = std::move(value); }
    inline ExternalSource& WithByteContent(const ByteContentDoc& value) { SetByteContent(value); return *this;}
    inline ExternalSource& WithByteContent(ByteContentDoc&& value) { SetByteContent(std::move(value)); return *this;}
    ///@}
  private:

    ExternalSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    S3ObjectDoc m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    ByteContentDoc m_byteContent;
    bool m_byteContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
