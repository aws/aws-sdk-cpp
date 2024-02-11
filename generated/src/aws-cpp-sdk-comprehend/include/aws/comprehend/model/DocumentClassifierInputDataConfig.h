/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentClassifierDataFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentClassifierDocumentTypeFormat.h>
#include <aws/comprehend/model/DocumentClassifierDocuments.h>
#include <aws/comprehend/model/DocumentReaderConfig.h>
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
    inline DocumentClassifierInputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

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
    inline DocumentClassifierInputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

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
    inline DocumentClassifierInputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline const Aws::String& GetTestS3Uri() const{ return m_testS3Uri; }

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(const Aws::String& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = value; }

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(Aws::String&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::move(value); }

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline void SetTestS3Uri(const char* value) { m_testS3UriHasBeenSet = true; m_testS3Uri.assign(value); }

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline DocumentClassifierInputDataConfig& WithTestS3Uri(const Aws::String& value) { SetTestS3Uri(value); return *this;}

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline DocumentClassifierInputDataConfig& WithTestS3Uri(Aws::String&& value) { SetTestS3Uri(std::move(value)); return *this;}

    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
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


    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline const DocumentClassifierDocumentTypeFormat& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline void SetDocumentType(const DocumentClassifierDocumentTypeFormat& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline void SetDocumentType(DocumentClassifierDocumentTypeFormat&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDocumentType(const DocumentClassifierDocumentTypeFormat& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDocumentType(DocumentClassifierDocumentTypeFormat&& value) { SetDocumentType(std::move(value)); return *this;}


    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline const DocumentClassifierDocuments& GetDocuments() const{ return m_documents; }

    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline void SetDocuments(const DocumentClassifierDocuments& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline void SetDocuments(DocumentClassifierDocuments&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDocuments(const DocumentClassifierDocuments& value) { SetDocuments(value); return *this;}

    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline DocumentClassifierInputDataConfig& WithDocuments(DocumentClassifierDocuments&& value) { SetDocuments(std::move(value)); return *this;}


    
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const{ return m_documentReaderConfig; }

    
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }

    
    inline void SetDocumentReaderConfig(const DocumentReaderConfig& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = value; }

    
    inline void SetDocumentReaderConfig(DocumentReaderConfig&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::move(value); }

    
    inline DocumentClassifierInputDataConfig& WithDocumentReaderConfig(const DocumentReaderConfig& value) { SetDocumentReaderConfig(value); return *this;}

    
    inline DocumentClassifierInputDataConfig& WithDocumentReaderConfig(DocumentReaderConfig&& value) { SetDocumentReaderConfig(std::move(value)); return *this;}

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

    DocumentClassifierDocumentTypeFormat m_documentType;
    bool m_documentTypeHasBeenSet = false;

    DocumentClassifierDocuments m_documents;
    bool m_documentsHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
