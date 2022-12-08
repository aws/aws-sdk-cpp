/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentClassifierDataFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/AugmentedManifestsListItem.h>
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
   * <p>The input properties for training a document classifier. </p> <p>For more
   * information on how the input file is formatted, see <a
   * href="https://docs.aws.amazon.com/comprehend/latest/dg/prep-classifier-data.html">Preparing
   * training data</a> in the Comprehend Developer Guide. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierInputDataConfig">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierInputDataConfig
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig();
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline const DocumentClassifierDataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline void SetDataFormat(const DocumentClassifierDataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline void SetDataFormat(DocumentClassifierDataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDataFormat(const DocumentClassifierDataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The format of your training data:</p> <ul> <li> <p>
     * <code>COMPREHEND_CSV</code>: A two-column CSV file, where labels are provided in
     * the first column, and documents are provided in the second. If you use this
     * value, you must provide the <code>S3Uri</code> parameter in your request.</p>
     * </li> <li> <p> <code>AUGMENTED_MANIFEST</code>: A labeled dataset that is
     * produced by Amazon SageMaker Ground Truth. This file is in JSON lines format.
     * Each line is a complete JSON object that contains a training document and its
     * associated labels. </p> <p>If you use this value, you must provide the
     * <code>AugmentedManifests</code> parameter in your request.</p> </li> </ul> <p>If
     * you don't specify a value, Amazon Comprehend uses <code>COMPREHEND_CSV</code> as
     * the default.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDataFormat(DocumentClassifierDataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * region as the API endpoint that you are calling. The URI can point to a single
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
     * region as the API endpoint that you are calling. The URI can point to a single
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
     * region as the API endpoint that you are calling. The URI can point to a single
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
     * region as the API endpoint that you are calling. The URI can point to a single
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
     * region as the API endpoint that you are calling. The URI can point to a single
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
     * region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for the input data. The S3 bucket must be in the same
     * region as the API endpoint that you are calling. The URI can point to a single
     * input file or it can provide the prefix for a collection of input files.</p>
     * <p>For example, if you use the URI <code>S3://bucketName/prefix</code>, if the
     * prefix is a single file, Amazon Comprehend uses that file as input. If more than
     * one file begins with the prefix, Amazon Comprehend uses all of them as
     * input.</p> <p>This parameter is required if you set <code>DataFormat</code> to
     * <code>COMPREHEND_CSV</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline const Aws::String& GetTestS3Uri() const{ return m_testS3Uri; }

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(const Aws::String& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = value; }

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(Aws::String&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::move(value); }

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(const char* value) { m_testS3UriHasBeenSet = true; m_testS3Uri.assign(value); }

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline DocumentClassifierInputDataConfig& WithTestS3Uri(const Aws::String& value) { SetTestS3Uri(value); return *this;}

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline DocumentClassifierInputDataConfig& WithTestS3Uri(Aws::String&& value) { SetTestS3Uri(std::move(value)); return *this;}

    /**
     * <p>This specifies the Amazon S3 location where the test annotations for an
     * entity recognizer are located. The URI must be in the same AWS Region as the API
     * endpoint that you are calling. </p>
     */
    inline DocumentClassifierInputDataConfig& WithTestS3Uri(const char* value) { SetTestS3Uri(value); return *this;}


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
    inline DocumentClassifierInputDataConfig& WithLabelDelimiter(const Aws::String& value) { SetLabelDelimiter(value); return *this;}

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline DocumentClassifierInputDataConfig& WithLabelDelimiter(Aws::String&& value) { SetLabelDelimiter(std::move(value)); return *this;}

    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline DocumentClassifierInputDataConfig& WithLabelDelimiter(const char* value) { SetLabelDelimiter(value); return *this;}


    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline const Aws::Vector<AugmentedManifestsListItem>& GetAugmentedManifests() const{ return m_augmentedManifests; }

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline void SetAugmentedManifests(const Aws::Vector<AugmentedManifestsListItem>& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = value; }

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline void SetAugmentedManifests(Aws::Vector<AugmentedManifestsListItem>&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::move(value); }

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& WithAugmentedManifests(const Aws::Vector<AugmentedManifestsListItem>& value) { SetAugmentedManifests(value); return *this;}

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& WithAugmentedManifests(Aws::Vector<AugmentedManifestsListItem>&& value) { SetAugmentedManifests(std::move(value)); return *this;}

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& AddAugmentedManifests(const AugmentedManifestsListItem& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(value); return *this; }

    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline DocumentClassifierInputDataConfig& AddAugmentedManifests(AugmentedManifestsListItem&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.push_back(std::move(value)); return *this; }

  private:

    DocumentClassifierDataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;

    Aws::String m_labelDelimiter;
    bool m_labelDelimiterHasBeenSet = false;

    Aws::Vector<AugmentedManifestsListItem> m_augmentedManifests;
    bool m_augmentedManifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
