/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/Split.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/AugmentedManifestsDocumentTypeFormat.h>
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
   * <p>An augmented manifest file that provides training data for your custom model.
   * An augmented manifest file is a labeled dataset that is produced by Amazon
   * SageMaker Ground Truth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/AugmentedManifestsListItem">AWS
   * API Reference</a></p>
   */
  class AugmentedManifestsListItem
  {
  public:
    AWS_COMPREHEND_API AugmentedManifestsListItem();
    AWS_COMPREHEND_API AugmentedManifestsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API AugmentedManifestsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline AugmentedManifestsListItem& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline AugmentedManifestsListItem& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline AugmentedManifestsListItem& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purpose of the data you've provided in the augmented manifest. You can
     * either train or test this data. If you don't specify, the default is train.</p>
     * <p>TRAIN - all of the documents in the manifest will be used for training. If no
     * test documents are provided, Amazon Comprehend will automatically reserve a
     * portion of the training documents for testing.</p> <p> TEST - all of the
     * documents in the manifest will be used for testing.</p>
     */
    inline const Split& GetSplit() const{ return m_split; }
    inline bool SplitHasBeenSet() const { return m_splitHasBeenSet; }
    inline void SetSplit(const Split& value) { m_splitHasBeenSet = true; m_split = value; }
    inline void SetSplit(Split&& value) { m_splitHasBeenSet = true; m_split = std::move(value); }
    inline AugmentedManifestsListItem& WithSplit(const Split& value) { SetSplit(value); return *this;}
    inline AugmentedManifestsListItem& WithSplit(Split&& value) { SetSplit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON attribute that contains the annotations for your training documents.
     * The number of attribute names that you specify depends on whether your augmented
     * manifest file is the output of a single labeling job or a chained labeling
     * job.</p> <p>If your file is the output of a single labeling job, specify the
     * LabelAttributeName key that was used when the job was created in Ground
     * Truth.</p> <p>If your file is the output of a chained labeling job, specify the
     * LabelAttributeName key for one or more jobs in the chain. Each
     * LabelAttributeName key provides the annotations from an individual job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }
    inline AugmentedManifestsListItem& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}
    inline AugmentedManifestsListItem& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}
    inline AugmentedManifestsListItem& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    inline AugmentedManifestsListItem& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }
    inline AugmentedManifestsListItem& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline const Aws::String& GetAnnotationDataS3Uri() const{ return m_annotationDataS3Uri; }
    inline bool AnnotationDataS3UriHasBeenSet() const { return m_annotationDataS3UriHasBeenSet; }
    inline void SetAnnotationDataS3Uri(const Aws::String& value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri = value; }
    inline void SetAnnotationDataS3Uri(Aws::String&& value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri = std::move(value); }
    inline void SetAnnotationDataS3Uri(const char* value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri.assign(value); }
    inline AugmentedManifestsListItem& WithAnnotationDataS3Uri(const Aws::String& value) { SetAnnotationDataS3Uri(value); return *this;}
    inline AugmentedManifestsListItem& WithAnnotationDataS3Uri(Aws::String&& value) { SetAnnotationDataS3Uri(std::move(value)); return *this;}
    inline AugmentedManifestsListItem& WithAnnotationDataS3Uri(const char* value) { SetAnnotationDataS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline const Aws::String& GetSourceDocumentsS3Uri() const{ return m_sourceDocumentsS3Uri; }
    inline bool SourceDocumentsS3UriHasBeenSet() const { return m_sourceDocumentsS3UriHasBeenSet; }
    inline void SetSourceDocumentsS3Uri(const Aws::String& value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri = value; }
    inline void SetSourceDocumentsS3Uri(Aws::String&& value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri = std::move(value); }
    inline void SetSourceDocumentsS3Uri(const char* value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri.assign(value); }
    inline AugmentedManifestsListItem& WithSourceDocumentsS3Uri(const Aws::String& value) { SetSourceDocumentsS3Uri(value); return *this;}
    inline AugmentedManifestsListItem& WithSourceDocumentsS3Uri(Aws::String&& value) { SetSourceDocumentsS3Uri(std::move(value)); return *this;}
    inline AugmentedManifestsListItem& WithSourceDocumentsS3Uri(const char* value) { SetSourceDocumentsS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of augmented manifest. PlainTextDocument or SemiStructuredDocument.
     * If you don't specify, the default is PlainTextDocument. </p> <ul> <li> <p>
     * <code>PLAIN_TEXT_DOCUMENT</code> A document type that represents any unicode
     * text that is encoded in UTF-8.</p> </li> <li> <p>
     * <code>SEMI_STRUCTURED_DOCUMENT</code> A document type with positional and
     * structural context, like a PDF. For training with Amazon Comprehend, only PDFs
     * are supported. For inference, Amazon Comprehend support PDFs, DOCX and TXT.</p>
     * </li> </ul>
     */
    inline const AugmentedManifestsDocumentTypeFormat& GetDocumentType() const{ return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(const AugmentedManifestsDocumentTypeFormat& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline void SetDocumentType(AugmentedManifestsDocumentTypeFormat&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }
    inline AugmentedManifestsListItem& WithDocumentType(const AugmentedManifestsDocumentTypeFormat& value) { SetDocumentType(value); return *this;}
    inline AugmentedManifestsListItem& WithDocumentType(AugmentedManifestsDocumentTypeFormat&& value) { SetDocumentType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Split m_split;
    bool m_splitHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::String m_annotationDataS3Uri;
    bool m_annotationDataS3UriHasBeenSet = false;

    Aws::String m_sourceDocumentsS3Uri;
    bool m_sourceDocumentsS3UriHasBeenSet = false;

    AugmentedManifestsDocumentTypeFormat m_documentType;
    bool m_documentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
