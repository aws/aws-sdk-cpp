/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/InputFormat.h>
#include <aws/comprehend/model/DocumentReaderConfig.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The input properties for an inference job. The document reader config field
   * applies only to non-text inputs for custom analysis.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_COMPREHEND_API InputDataConfig() = default;
    AWS_COMPREHEND_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same Region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    InputDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline InputFormat GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(InputFormat value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline InputDataConfig& WithInputFormat(InputFormat value) { SetInputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const { return m_documentReaderConfig; }
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    void SetDocumentReaderConfig(DocumentReaderConfigT&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::forward<DocumentReaderConfigT>(value); }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    InputDataConfig& WithDocumentReaderConfig(DocumentReaderConfigT&& value) { SetDocumentReaderConfig(std::forward<DocumentReaderConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    InputFormat m_inputFormat{InputFormat::NOT_SET};
    bool m_inputFormatHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
