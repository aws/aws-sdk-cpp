/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes details about the application code for a Java-based Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContentDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CodeContentDescription
  {
  public:
    CodeContentDescription();
    CodeContentDescription(Aws::Utils::Json::JsonView jsonValue);
    CodeContentDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_textContentHasBeenSet;

    Aws::String m_codeMD5;
    bool m_codeMD5HasBeenSet;

    long long m_codeSize;
    bool m_codeSizeHasBeenSet;

    S3ApplicationCodeLocationDescription m_s3ApplicationCodeLocationDescription;
    bool m_s3ApplicationCodeLocationDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
