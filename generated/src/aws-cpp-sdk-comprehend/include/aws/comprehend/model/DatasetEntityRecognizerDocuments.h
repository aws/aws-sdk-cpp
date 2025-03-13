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
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments() = default;
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetEntityRecognizerDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the Amazon S3 location where the documents for the dataset are
     * located. </p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    DatasetEntityRecognizerDocuments& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies how the text in an input file should be processed. This is
     * optional, and the default is ONE_DOC_PER_LINE. ONE_DOC_PER_FILE - Each file is
     * considered a separate document. Use this option when you are processing large
     * documents, such as newspaper articles or scientific papers. ONE_DOC_PER_LINE -
     * Each line in a file is considered a separate document. Use this option when you
     * are processing many short documents, such as text messages.</p>
     */
    inline InputFormat GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(InputFormat value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline DatasetEntityRecognizerDocuments& WithInputFormat(InputFormat value) { SetInputFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    InputFormat m_inputFormat{InputFormat::NOT_SET};
    bool m_inputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
