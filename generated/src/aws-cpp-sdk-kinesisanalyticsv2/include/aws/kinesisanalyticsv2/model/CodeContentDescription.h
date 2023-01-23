/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/S3ApplicationCodeLocationDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes details about the code of a Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContentDescription">AWS
   * API Reference</a></p>
   */
  class CodeContentDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CodeContentDescription();
    AWS_KINESISANALYTICSV2_API CodeContentDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContentDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text-format code</p>
     */
    inline const Aws::String& GetTextContent() const{ return m_textContent; }

    /**
     * <p>The text-format code</p>
     */
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }

    /**
     * <p>The text-format code</p>
     */
    inline void SetTextContent(const Aws::String& value) { m_textContentHasBeenSet = true; m_textContent = value; }

    /**
     * <p>The text-format code</p>
     */
    inline void SetTextContent(Aws::String&& value) { m_textContentHasBeenSet = true; m_textContent = std::move(value); }

    /**
     * <p>The text-format code</p>
     */
    inline void SetTextContent(const char* value) { m_textContentHasBeenSet = true; m_textContent.assign(value); }

    /**
     * <p>The text-format code</p>
     */
    inline CodeContentDescription& WithTextContent(const Aws::String& value) { SetTextContent(value); return *this;}

    /**
     * <p>The text-format code</p>
     */
    inline CodeContentDescription& WithTextContent(Aws::String&& value) { SetTextContent(std::move(value)); return *this;}

    /**
     * <p>The text-format code</p>
     */
    inline CodeContentDescription& WithTextContent(const char* value) { SetTextContent(value); return *this;}


    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline const Aws::String& GetCodeMD5() const{ return m_codeMD5; }

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline bool CodeMD5HasBeenSet() const { return m_codeMD5HasBeenSet; }

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline void SetCodeMD5(const Aws::String& value) { m_codeMD5HasBeenSet = true; m_codeMD5 = value; }

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline void SetCodeMD5(Aws::String&& value) { m_codeMD5HasBeenSet = true; m_codeMD5 = std::move(value); }

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline void SetCodeMD5(const char* value) { m_codeMD5HasBeenSet = true; m_codeMD5.assign(value); }

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline CodeContentDescription& WithCodeMD5(const Aws::String& value) { SetCodeMD5(value); return *this;}

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline CodeContentDescription& WithCodeMD5(Aws::String&& value) { SetCodeMD5(std::move(value)); return *this;}

    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline CodeContentDescription& WithCodeMD5(const char* value) { SetCodeMD5(value); return *this;}


    /**
     * <p>The size in bytes of the application code. Can be used to validate zip-format
     * code.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size in bytes of the application code. Can be used to validate zip-format
     * code.</p>
     */
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }

    /**
     * <p>The size in bytes of the application code. Can be used to validate zip-format
     * code.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }

    /**
     * <p>The size in bytes of the application code. Can be used to validate zip-format
     * code.</p>
     */
    inline CodeContentDescription& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline const S3ApplicationCodeLocationDescription& GetS3ApplicationCodeLocationDescription() const{ return m_s3ApplicationCodeLocationDescription; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline bool S3ApplicationCodeLocationDescriptionHasBeenSet() const { return m_s3ApplicationCodeLocationDescriptionHasBeenSet; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline void SetS3ApplicationCodeLocationDescription(const S3ApplicationCodeLocationDescription& value) { m_s3ApplicationCodeLocationDescriptionHasBeenSet = true; m_s3ApplicationCodeLocationDescription = value; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline void SetS3ApplicationCodeLocationDescription(S3ApplicationCodeLocationDescription&& value) { m_s3ApplicationCodeLocationDescriptionHasBeenSet = true; m_s3ApplicationCodeLocationDescription = std::move(value); }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline CodeContentDescription& WithS3ApplicationCodeLocationDescription(const S3ApplicationCodeLocationDescription& value) { SetS3ApplicationCodeLocationDescription(value); return *this;}

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline CodeContentDescription& WithS3ApplicationCodeLocationDescription(S3ApplicationCodeLocationDescription&& value) { SetS3ApplicationCodeLocationDescription(std::move(value)); return *this;}

  private:

    Aws::String m_textContent;
    bool m_textContentHasBeenSet = false;

    Aws::String m_codeMD5;
    bool m_codeMD5HasBeenSet = false;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet = false;

    S3ApplicationCodeLocationDescription m_s3ApplicationCodeLocationDescription;
    bool m_s3ApplicationCodeLocationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
