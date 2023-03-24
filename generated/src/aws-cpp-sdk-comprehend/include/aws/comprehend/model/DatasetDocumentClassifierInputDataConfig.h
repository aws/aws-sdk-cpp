/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the dataset input data configuration for a document classifier
   * model.</p> <p>For more information on how the input file is formatted, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/prep-classifier-data.html">Preparing
   * training data</a> in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetDocumentClassifierInputDataConfig">AWS
   * API Reference</a></p>
   */
  class DatasetDocumentClassifierInputDataConfig
  {
  public:
    AWS_COMPREHEND_API DatasetDocumentClassifierInputDataConfig();
    AWS_COMPREHEND_API DatasetDocumentClassifierInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetDocumentClassifierInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * Region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline const Aws::String& GetLabelDelimiter() const{ return m_labelDelimiter; }

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline bool LabelDelimiterHasBeenSet() const { return m_labelDelimiterHasBeenSet; }

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline void SetLabelDelimiter(const Aws::String& value) { m_labelDelimiterHasBeenSet = true; m_labelDelimiter = value; }

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline void SetLabelDelimiter(Aws::String&& value) { m_labelDelimiterHasBeenSet = true; m_labelDelimiter = std::move(value); }

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline void SetLabelDelimiter(const char* value) { m_labelDelimiterHasBeenSet = true; m_labelDelimiter.assign(value); }

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithLabelDelimiter(const Aws::String& value) { SetLabelDelimiter(value); return *this;}

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithLabelDelimiter(Aws::String&& value) { SetLabelDelimiter(std::move(value)); return *this;}

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline DatasetDocumentClassifierInputDataConfig& WithLabelDelimiter(const char* value) { SetLabelDelimiter(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_labelDelimiter;
    bool m_labelDelimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
