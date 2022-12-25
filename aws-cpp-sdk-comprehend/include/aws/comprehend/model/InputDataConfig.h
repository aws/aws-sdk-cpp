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
    AWS_COMPREHEND_API InputDataConfig();
    AWS_COMPREHEND_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The URI must be in same region as the
     * API endpoint that you are calling. The URI can point to a single input file or
     * it can provide the prefix for a collection of data files. </p> <p>For example,
     * if you use the URI <code>S3://bucketName/prefix</code>, if the prefix is a
     * single file, Amazon Comprehend uses that file as input. If more than one file
     * begins with the prefix, Amazon Comprehend uses all of them as input.</p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline InputDataConfig& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p>Specifies how the text in an input file should be processed:</p> <ul> <li>
     * <p> <code>ONE_DOC_PER_FILE</code> - Each file is considered a separate document.
     * Use this option when you are processing large documents, such as newspaper
     * articles or scientific papers.</p> </li> <li> <p> <code>ONE_DOC_PER_LINE</code>
     * - Each line in a file is considered a separate document. Use this option when
     * you are processing many short documents, such as text messages.</p> </li> </ul>
     */
    inline InputDataConfig& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}


    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const{ return m_documentReaderConfig; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline void SetDocumentReaderConfig(const DocumentReaderConfig& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = value; }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline void SetDocumentReaderConfig(DocumentReaderConfig&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::move(value); }

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline InputDataConfig& WithDocumentReaderConfig(const DocumentReaderConfig& value) { SetDocumentReaderConfig(value); return *this;}

    /**
     * <p>Provides configuration parameters to override the default actions for
     * extracting text from PDF documents and image files.</p>
     */
    inline InputDataConfig& WithDocumentReaderConfig(DocumentReaderConfig&& value) { SetDocumentReaderConfig(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
