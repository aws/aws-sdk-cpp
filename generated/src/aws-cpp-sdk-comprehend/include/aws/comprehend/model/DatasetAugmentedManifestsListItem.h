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
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem();
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetAugmentedManifestsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

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
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

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
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

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
    inline DatasetAugmentedManifestsListItem& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}

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
    inline DatasetAugmentedManifestsListItem& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}

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
    inline DatasetAugmentedManifestsListItem& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

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
    inline DatasetAugmentedManifestsListItem& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

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
    inline DatasetAugmentedManifestsListItem& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline const Aws::String& GetAnnotationDataS3Uri() const{ return m_annotationDataS3Uri; }

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline bool AnnotationDataS3UriHasBeenSet() const { return m_annotationDataS3UriHasBeenSet; }

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline void SetAnnotationDataS3Uri(const Aws::String& value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri = value; }

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline void SetAnnotationDataS3Uri(Aws::String&& value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri = std::move(value); }

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline void SetAnnotationDataS3Uri(const char* value) { m_annotationDataS3UriHasBeenSet = true; m_annotationDataS3Uri.assign(value); }

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithAnnotationDataS3Uri(const Aws::String& value) { SetAnnotationDataS3Uri(value); return *this;}

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithAnnotationDataS3Uri(Aws::String&& value) { SetAnnotationDataS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix to the annotation files that are referred in the augmented
     * manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithAnnotationDataS3Uri(const char* value) { SetAnnotationDataS3Uri(value); return *this;}


    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline const Aws::String& GetSourceDocumentsS3Uri() const{ return m_sourceDocumentsS3Uri; }

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline bool SourceDocumentsS3UriHasBeenSet() const { return m_sourceDocumentsS3UriHasBeenSet; }

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline void SetSourceDocumentsS3Uri(const Aws::String& value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri = value; }

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline void SetSourceDocumentsS3Uri(Aws::String&& value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri = std::move(value); }

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline void SetSourceDocumentsS3Uri(const char* value) { m_sourceDocumentsS3UriHasBeenSet = true; m_sourceDocumentsS3Uri.assign(value); }

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithSourceDocumentsS3Uri(const Aws::String& value) { SetSourceDocumentsS3Uri(value); return *this;}

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithSourceDocumentsS3Uri(Aws::String&& value) { SetSourceDocumentsS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix to the source files (PDFs) that are referred to in the
     * augmented manifest file.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithSourceDocumentsS3Uri(const char* value) { SetSourceDocumentsS3Uri(value); return *this;}


    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline const AugmentedManifestsDocumentTypeFormat& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline void SetDocumentType(const AugmentedManifestsDocumentTypeFormat& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline void SetDocumentType(AugmentedManifestsDocumentTypeFormat&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithDocumentType(const AugmentedManifestsDocumentTypeFormat& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The type of augmented manifest. If you don't specify, the default is
     * PlainTextDocument. </p> <p> <code>PLAIN_TEXT_DOCUMENT</code> A document type
     * that represents any unicode text that is encoded in UTF-8.</p>
     */
    inline DatasetAugmentedManifestsListItem& WithDocumentType(AugmentedManifestsDocumentTypeFormat&& value) { SetDocumentType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

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
