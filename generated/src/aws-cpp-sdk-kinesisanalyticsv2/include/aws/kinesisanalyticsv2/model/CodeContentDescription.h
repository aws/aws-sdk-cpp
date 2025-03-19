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
   * <p>Describes details about the code of a Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContentDescription">AWS
   * API Reference</a></p>
   */
  class CodeContentDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CodeContentDescription() = default;
    AWS_KINESISANALYTICSV2_API CodeContentDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContentDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text-format code</p>
     */
    inline const Aws::String& GetTextContent() const { return m_textContent; }
    inline bool TextContentHasBeenSet() const { return m_textContentHasBeenSet; }
    template<typename TextContentT = Aws::String>
    void SetTextContent(TextContentT&& value) { m_textContentHasBeenSet = true; m_textContent = std::forward<TextContentT>(value); }
    template<typename TextContentT = Aws::String>
    CodeContentDescription& WithTextContent(TextContentT&& value) { SetTextContent(std::forward<TextContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum that can be used to validate zip-format code.</p>
     */
    inline const Aws::String& GetCodeMD5() const { return m_codeMD5; }
    inline bool CodeMD5HasBeenSet() const { return m_codeMD5HasBeenSet; }
    template<typename CodeMD5T = Aws::String>
    void SetCodeMD5(CodeMD5T&& value) { m_codeMD5HasBeenSet = true; m_codeMD5 = std::forward<CodeMD5T>(value); }
    template<typename CodeMD5T = Aws::String>
    CodeContentDescription& WithCodeMD5(CodeMD5T&& value) { SetCodeMD5(std::forward<CodeMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes of the application code. Can be used to validate zip-format
     * code.</p>
     */
    inline long long GetCodeSize() const { return m_codeSize; }
    inline bool CodeSizeHasBeenSet() const { return m_codeSizeHasBeenSet; }
    inline void SetCodeSize(long long value) { m_codeSizeHasBeenSet = true; m_codeSize = value; }
    inline CodeContentDescription& WithCodeSize(long long value) { SetCodeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * application code stored in Amazon S3.</p>
     */
    inline const S3ApplicationCodeLocationDescription& GetS3ApplicationCodeLocationDescription() const { return m_s3ApplicationCodeLocationDescription; }
    inline bool S3ApplicationCodeLocationDescriptionHasBeenSet() const { return m_s3ApplicationCodeLocationDescriptionHasBeenSet; }
    template<typename S3ApplicationCodeLocationDescriptionT = S3ApplicationCodeLocationDescription>
    void SetS3ApplicationCodeLocationDescription(S3ApplicationCodeLocationDescriptionT&& value) { m_s3ApplicationCodeLocationDescriptionHasBeenSet = true; m_s3ApplicationCodeLocationDescription = std::forward<S3ApplicationCodeLocationDescriptionT>(value); }
    template<typename S3ApplicationCodeLocationDescriptionT = S3ApplicationCodeLocationDescription>
    CodeContentDescription& WithS3ApplicationCodeLocationDescription(S3ApplicationCodeLocationDescriptionT&& value) { SetS3ApplicationCodeLocationDescription(std::forward<S3ApplicationCodeLocationDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textContent;
    bool m_textContentHasBeenSet = false;

    Aws::String m_codeMD5;
    bool m_codeMD5HasBeenSet = false;

    long long m_codeSize{0};
    bool m_codeSizeHasBeenSet = false;

    S3ApplicationCodeLocationDescription m_s3ApplicationCodeLocationDescription;
    bool m_s3ApplicationCodeLocationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
