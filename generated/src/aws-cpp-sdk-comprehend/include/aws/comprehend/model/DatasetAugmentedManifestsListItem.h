/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetAugmentedManifestsListItem">AWS
   * API Reference</a></p>
   */
  class DatasetAugmentedManifestsListItem
  {
  public:
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem() = default;
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    DatasetAugmentedManifestsListItem& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    template<typename AttributeNamesT = Aws::String>
    DatasetAugmentedManifestsListItem& AddAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    DatasetAugmentedManifestsListItem& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline const Aws::String& GetAnnotationDataS3Uri() const { return m_annotationDataS3Uri; }
    inline bool AnnotationDataS3UriHasBeenSet() const { return m_annotationDataS3UriHasBeenSet; }
    template<typename AnnotationDataS3UriT = Aws::String>
    void SetAnnotationDataS3Uri(AnnotationDataS3UriT&& value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri = std::forward<AnnotationDataS3UriT>(value); }
    template<typename AnnotationDataS3UriT = Aws::String>
    DatasetAugmentedManifestsListItem& WithAnnotationDataS3Uri(AnnotationDataS3UriT&& value) { SetAnnotationDataS3Uri(std::forward<AnnotationDataS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline const Aws::String& GetSourceDocumentsS3Uri() const { return m_sourceDocumentsS3Uri; }
    inline bool SourceDocumentsS3UriHasBeenSet() const { return m_sourceDocumentsS3UriHasBeenSet; }
    template<typename SourceDocumentsS3UriT = Aws::String>
    void SetSourceDocumentsS3Uri(SourceDocumentsS3UriT&& value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri = std::forward<SourceDocumentsS3UriT>(value); }
    template<typename SourceDocumentsS3UriT = Aws::String>
    DatasetAugmentedManifestsListItem& WithSourceDocumentsS3Uri(SourceDocumentsS3UriT&& value) { SetSourceDocumentsS3Uri(std::forward<SourceDocumentsS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline AugmentedManifestsDocumentTypeFormat GetDocumentType() const { return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    inline void SetDocumentType(AugmentedManifestsDocumentTypeFormat value) { m_documentTypeHasBeenSet = true; m_documentType = value; }
    inline DatasetAugmentedManifestsListItem& WithDocumentType(AugmentedManifestsDocumentTypeFormat value) { SetDocumentType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_annotationDataS3Uri;
    bool m_annotationDataS3UriHasBeenSet = false;

    Aws::String m_sourceDocumentsS3Uri;
    bool m_sourceDocumentsS3UriHasBeenSet = false;

    AugmentedManifestsDocumentTypeFormat m_documentType{AugmentedManifestsDocumentTypeFormat::NOT_SET};
    bool m_documentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
