/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/InputFormat.h>
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
   * <p>Describes the documents submitted with a dataset for an entity recognizer
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetEntityRecognizerDocuments">AWS
   * API Reference</a></p>
   */
  class DatasetEntityRecognizerDocuments
  {
  public:
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments();
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline DatasetEntityRecognizerDocuments& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline DatasetEntityRecognizerDocuments& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline DatasetEntityRecognizerDocuments& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline DatasetEntityRecognizerDocuments& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline DatasetEntityRecognizerDocuments& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
