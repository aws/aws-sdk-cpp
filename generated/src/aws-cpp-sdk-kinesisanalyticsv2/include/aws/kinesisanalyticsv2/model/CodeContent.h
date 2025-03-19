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
   * code, for a Managed Service for Apache Flink application. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContent">AWS
   * API Reference</a></p>
   */
  class CodeContent
  {
  public:
    AWS_KINESISANALYTICSV2_API CodeContent() = default;
    AWS_KINESISANALYTICSV2_API CodeContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text-format code for a Managed Service for Apache Flink application.</p>
     */
    inline const Aws::String& GetTextContent() const { return m_textContent; }
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }
    template<typename TextContentT = Aws::String>
    void SetTextContent(TextContentT&& value) { m_textContentHasBeenSet = true; m_textContent = std::forward<TextContentT>(value); }
    template<typename TextContentT = Aws::String>
    CodeContent& WithTextContent(TextContentT&& value) { SetTextContent(std::forward<TextContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zip-format code for a Managed Service for Apache Flink application.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFileContent() const { return m_zipFileContent; }
    inline bool ZipFileContentHasBeenSet() const { return m_zipFileContentHasBeenSet; }
    template<typename ZipFileContentT = Aws::Utils::ByteBuffer>
    void SetZipFileContent(ZipFileContentT&& value) { m_zipFileContentHasBeenSet = true; m_zipFileContent = std::forward<ZipFileContentT>(value); }
    template<typename ZipFileContentT = Aws::Utils::ByteBuffer>
    CodeContent& WithZipFileContent(ZipFileContentT&& value) { SetZipFileContent(std::forward<ZipFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon S3 bucket that contains the application
     * code.</p>
     */
    inline const S3ContentLocation& GetS3ContentLocation() const { return m_s3ContentLocation; }
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }
    template<typename S3ContentLocationT = S3ContentLocation>
    void SetS3ContentLocation(S3ContentLocationT&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::forward<S3ContentLocationT>(value); }
    template<typename S3ContentLocationT = S3ContentLocation>
    CodeContent& WithS3ContentLocation(S3ContentLocationT&& value) { SetS3ContentLocation(std::forward<S3ContentLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textContent;
    bool m_textContentHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFileContent{};
    bool m_zipFileContentHasBeenSet = false;

    S3ContentLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
