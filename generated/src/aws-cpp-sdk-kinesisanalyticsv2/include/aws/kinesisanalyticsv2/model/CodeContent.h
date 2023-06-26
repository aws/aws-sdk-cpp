/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * code, for a Flink-based Kinesis Data Analytics application. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContent">AWS
   * API Reference</a></p>
   */
  class CodeContent
  {
  public:
    AWS_KINESISANALYTICSV2_API CodeContent();
    AWS_KINESISANALYTICSV2_API CodeContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline const Aws::String& GetTextContent() const{ return m_textContent; }

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetTextContent(const Aws::String& value) { m_textContentHasBeenSet = true; m_textContent = value; }

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetTextContent(Aws::String&& value) { m_textContentHasBeenSet = true; m_textContent = std::move(value); }

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline void SetTextContent(const char* value) { m_textContentHasBeenSet = true; m_textContent.assign(value); }

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline CodeContent& WithTextContent(const Aws::String& value) { SetTextContent(value); return *this;}

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline CodeContent& WithTextContent(Aws::String&& value) { SetTextContent(std::move(value)); return *this;}

    /**
     * <p>The text-format code for a Flink-based Kinesis Data Analytics
     * application.</p>
     */
    inline CodeContent& WithTextContent(const char* value) { SetTextContent(value); return *this;}


    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFileContent() const{ return m_zipFileContent; }

    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline bool ZipFileContentHasBeenSet() const { return m_zipFileContentHasBeenSet; }

    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline void SetZipFileContent(const Aws::Utils::ByteBuffer& value) { m_zipFileContentHasBeenSet = true; m_zipFileContent = value; }

    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline void SetZipFileContent(Aws::Utils::ByteBuffer&& value) { m_zipFileContentHasBeenSet = true; m_zipFileContent = std::move(value); }

    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithZipFileContent(const Aws::Utils::ByteBuffer& value) { SetZipFileContent(value); return *this;}

    /**
     * <p>The zip-format code for a Flink-based Kinesis Data Analytics application.</p>
     */
    inline CodeContent& WithZipFileContent(Aws::Utils::ByteBuffer&& value) { SetZipFileContent(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline const S3ContentLocation& GetS3ContentLocation() const{ return m_s3ContentLocation; }

    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }

    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline void SetS3ContentLocation(const S3ContentLocation& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = value; }

    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline void SetS3ContentLocation(S3ContentLocation&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::move(value); }

    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline CodeContent& WithS3ContentLocation(const S3ContentLocation& value) { SetS3ContentLocation(value); return *this;}

    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline CodeContent& WithS3ContentLocation(S3ContentLocation&& value) { SetS3ContentLocation(std::move(value)); return *this;}

  private:

    Aws::String m_textContent;
    bool m_textContentHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFileContent;
    bool m_zipFileContentHasBeenSet = false;

    S3ContentLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
