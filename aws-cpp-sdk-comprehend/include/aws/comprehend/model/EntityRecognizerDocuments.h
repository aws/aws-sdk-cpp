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
   * <p>Describes the training documents submitted with an entity
   * recognizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerDocuments">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerDocuments
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerDocuments();
    AWS_COMPREHEND_API EntityRecognizerDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the training documents for an entity
     * recognizer are located. The URI must be in the same region as the API endpoint
     * that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline const Aws::String& GetTestS3Uri() const{ return m_testS3Uri; }

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline void SetTestS3Uri(const Aws::String& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = value; }

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline void SetTestS3Uri(Aws::String&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline void SetTestS3Uri(const char* value) { m_testS3UriHasBeenSet = true; m_testS3Uri.assign(value); }

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithTestS3Uri(const Aws::String& value) { SetTestS3Uri(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithTestS3Uri(Aws::String&& value) { SetTestS3Uri(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 location where the test documents for an entity
     * recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling.</p>
     */
    inline EntityRecognizerDocuments& WithTestS3Uri(const char* value) { SetTestS3Uri(value); return *this;}


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
    inline EntityRecognizerDocuments& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline EntityRecognizerDocuments& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
