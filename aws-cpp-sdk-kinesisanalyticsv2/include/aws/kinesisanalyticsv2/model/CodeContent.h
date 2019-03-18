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
#include <aws/core/utils/Array.h>
#include <aws/kinesisanalyticsv2/model/S3ContentLocation.h>
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
   * <p>Specifies either the application code, or the location of the application
   * code, for a Java-based Amazon Kinesis Data Analytics application. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContent">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CodeContent
  {
  public:
    CodeContent();
    CodeContent(Aws::Utils::Json::JsonView jsonValue);
    CodeContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline const Aws::String& GetTextContent() const{ return m_textContent; }

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetTextContent(const Aws::String& value) { m_textContentHasBeenSet = true; m_textContent = value; }

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetTextContent(Aws::String&& value) { m_textContentHasBeenSet = true; m_textContent = std::move(value); }

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetTextContent(const char* value) { m_textContentHasBeenSet = true; m_textContent.assign(value); }

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithTextContent(const Aws::String& value) { SetTextContent(value); return *this;}

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithTextContent(Aws::String&& value) { SetTextContent(std::move(value)); return *this;}

    /**
     * <p>The text-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithTextContent(const char* value) { SetTextContent(value); return *this;}


    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFileContent() const{ return m_zipFileContent; }

    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline bool ZipFileContentHasBeenSet() const { return m_zipFileContentHasBeenSet; }

    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetZipFileContent(const Aws::Utils::ByteBuffer& value) { m_zipFileContentHasBeenSet = true; m_zipFileContent = value; }

    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline void SetZipFileContent(Aws::Utils::ByteBuffer&& value) { m_zipFileContentHasBeenSet = true; m_zipFileContent = std::move(value); }

    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithZipFileContent(const Aws::Utils::ByteBuffer& value) { SetZipFileContent(value); return *this;}

    /**
     * <p>The zip-format code for a Java-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithZipFileContent(Aws::Utils::ByteBuffer&& value) { SetZipFileContent(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline const S3ContentLocation& GetS3ContentLocation() const{ return m_s3ContentLocation; }

    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }

    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline void SetS3ContentLocation(const S3ContentLocation& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = value; }

    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline void SetS3ContentLocation(S3ContentLocation&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::move(value); }

    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline CodeContent& WithS3ContentLocation(const S3ContentLocation& value) { SetS3ContentLocation(value); return *this;}

    /**
     * <p>Information about the Amazon S3 bucket containing the application code.</p>
     */
    inline CodeContent& WithS3ContentLocation(S3ContentLocation&& value) { SetS3ContentLocation(std::move(value)); return *this;}

  private:

    Aws::String m_textContent;
    bool m_textContentHasBeenSet;

    Aws::Utils::ByteBuffer m_zipFileContent;
    bool m_zipFileContentHasBeenSet;

    S3ContentLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
