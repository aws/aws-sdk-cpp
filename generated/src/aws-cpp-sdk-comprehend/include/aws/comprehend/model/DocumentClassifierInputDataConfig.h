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
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig() = default;
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline DocumentClassifierDataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DocumentClassifierDataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline DocumentClassifierInputDataConfig& WithDataFormat(DocumentClassifierDataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    DocumentClassifierInputDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the Amazon S3 location that contains the test annotations for
     * the document classifier. The URI must be in the same Amazon Web Services Region
     * as the API endpoint that you are calling. </p>
     */
    inline const Aws::String& GetTestS3Uri() const { return m_testS3Uri; }
    inline bool TestS3UriHasBeenSet() const { return m_testS3UriHasBeenSet; }
    template<typename TestS3UriT = Aws::String>
    void SetTestS3Uri(TestS3UriT&& value) { m_testS3UriHasBeenSet = true; m_testS3Uri = std::forward<TestS3UriT>(value); }
    template<typename TestS3UriT = Aws::String>
    DocumentClassifierInputDataConfig& WithTestS3Uri(TestS3UriT&& value) { SetTestS3Uri(std::forward<TestS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the delimiter used to separate each label for training a
     * multi-label classifier. The default delimiter between labels is a pipe (|). You
     * can use a different character as a delimiter (if it's an allowed character) by
     * specifying it under Delimiter for labels. If the training documents use a
     * delimiter other than the default or the delimiter you specify, the labels on
     * that line will be combined to make a single unique label, such as
     * LABELLABELLABEL.</p>
     */
    inline const Aws::String& GetLabelDelimiter() const { return m_labelDelimiter; }
    inline bool LabelDelimiterHasBeenSet() const { return m_labelDelimiterHasBeenSet; }
    template<typename LabelDelimiterT = Aws::String>
    void SetLabelDelimiter(LabelDelimiterT&& value) { m_labelDelimiterHasBeenSet = true; m_labelDelimiter = std::forward<LabelDelimiterT>(value); }
    template<typename LabelDelimiterT = Aws::String>
    DocumentClassifierInputDataConfig& WithLabelDelimiter(LabelDelimiterT&& value) { SetLabelDelimiter(std::forward<LabelDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of augmented manifest files that provide training data for your custom
     * model. An augmented manifest file is a labeled dataset that is produced by
     * Amazon SageMaker Ground Truth.</p> <p>This parameter is required if you set
     * <code>DataFormat</code> to <code>AUGMENTED_MANIFEST</code>.</p>
     */
    inline const Aws::Vector<AugmentedManifestsListItem>& GetAugmentedManifests() const { return m_augmentedManifests; }
    inline bool AugmentedManifestsHasBeenSet() const { return m_augmentedManifestsHasBeenSet; }
    template<typename AugmentedManifestsT = Aws::Vector<AugmentedManifestsListItem>>
    void SetAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests = std::forward<AugmentedManifestsT>(value); }
    template<typename AugmentedManifestsT = Aws::Vector<AugmentedManifestsListItem>>
    DocumentClassifierInputDataConfig& WithAugmentedManifests(AugmentedManifestsT&& value) { SetAugmentedManifests(std::forward<AugmentedManifestsT>(value)); return *this;}
    template<typename AugmentedManifestsT = AugmentedManifestsListItem>
    DocumentClassifierInputDataConfig& AddAugmentedManifests(AugmentedManifestsT&& value) { m_augmentedManifestsHasBeenSet = true; m_augmentedManifests.emplace_back(std::forward<AugmentedManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of input documents for training the model. Provide plain-text
     * documents to create a plain-text model, and provide semi-structured documents to
     * create a native document model.</p>
     */
    inline DocumentClassifierDocumentTypeFormat GetDocumentType() const { return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(DocumentClassifierDocumentTypeFormat value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline DocumentClassifierInputDataConfig& WithDocumentType(DocumentClassifierDocumentTypeFormat value) { SetDocumentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the training documents. This parameter is required in a
     * request to create a native document model.</p>
     */
    inline const DocumentClassifierDocuments& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = DocumentClassifierDocuments>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = DocumentClassifierDocuments>
    DocumentClassifierInputDataConfig& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentReaderConfig& GetDocumentReaderConfig() const { return m_documentReaderConfig; }
    inline bool DocumentReaderConfigHasBeenSet() const { return m_documentReaderConfigHasBeenSet; }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    void SetDocumentReaderConfig(DocumentReaderConfigT&& value) { m_documentReaderConfigHasBeenSet = true; m_documentReaderConfig = std::forward<DocumentReaderConfigT>(value); }
    template<typename DocumentReaderConfigT = DocumentReaderConfig>
    DocumentClassifierInputDataConfig& WithDocumentReaderConfig(DocumentReaderConfigT&& value) { SetDocumentReaderConfig(std::forward<DocumentReaderConfigT>(value)); return *this;}
    ///@}
  private:

    DocumentClassifierDataFormat m_dataFormat{DocumentClassifierDataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_testS3Uri;
    bool m_testS3UriHasBeenSet = false;

    Aws::String m_labelDelimiter;
    bool m_labelDelimiterHasBeenSet = false;

    Aws::Vector<AugmentedManifestsListItem> m_augmentedManifests;
    bool m_augmentedManifestsHasBeenSet = false;

    DocumentClassifierDocumentTypeFormat m_documentType{DocumentClassifierDocumentTypeFormat::NOT_SET};
    bool m_documentTypeHasBeenSet = false;

    DocumentClassifierDocuments m_documents;
    bool m_documentsHasBeenSet = false;

    DocumentReaderConfig m_documentReaderConfig;
    bool m_documentReaderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
