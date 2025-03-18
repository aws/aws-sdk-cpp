/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClass.h>
#include <aws/comprehend/model/DocumentLabel.h>
#include <aws/comprehend/model/DocumentTypeListItem.h>
#include <aws/comprehend/model/ErrorsListItem.h>
#include <aws/comprehend/model/WarningsListItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class ClassifyDocumentResult
  {
  public:
    AWS_COMPREHEND_API ClassifyDocumentResult() = default;
    AWS_COMPREHEND_API ClassifyDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ClassifyDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The classes used by the document being analyzed. These are used for models
     * trained in multi-class mode. Individual classes are mutually exclusive and each
     * document is expected to have only a single class assigned to it. For example, an
     * animal can be a dog or a cat, but not both at the same time. </p> <p>For prompt
     * safety classification, the response includes only two classes (SAFE_PROMPT and
     * UNSAFE_PROMPT), along with a confidence score for each class. The value range of
     * the score is zero to one, where one is the highest confidence.</p>
     */
    inline const Aws::Vector<DocumentClass>& GetClasses() const { return m_classes; }
    template<typename ClassesT = Aws::Vector<DocumentClass>>
    void SetClasses(ClassesT&& value) { m_classesHasBeenSet = true; m_classes = std::forward<ClassesT>(value); }
    template<typename ClassesT = Aws::Vector<DocumentClass>>
    ClassifyDocumentResult& WithClasses(ClassesT&& value) { SetClasses(std::forward<ClassesT>(value)); return *this;}
    template<typename ClassesT = DocumentClass>
    ClassifyDocumentResult& AddClasses(ClassesT&& value) { m_classesHasBeenSet = true; m_classes.emplace_back(std::forward<ClassesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels used in the document being analyzed. These are used for
     * multi-label trained models. Individual labels represent different categories
     * that are related in some manner and are not mutually exclusive. For example, a
     * movie can be just an action movie, or it can be an action movie, a science
     * fiction movie, and a comedy, all at the same time. </p>
     */
    inline const Aws::Vector<DocumentLabel>& GetLabels() const { return m_labels; }
    template<typename LabelsT = Aws::Vector<DocumentLabel>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<DocumentLabel>>
    ClassifyDocumentResult& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = DocumentLabel>
    ClassifyDocumentResult& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Extraction information about the document. This field is present in the
     * response only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    ClassifyDocumentResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type for each page in the input document. This field is present
     * in the response only if your request includes the <code>Byte</code> parameter.
     * </p>
     */
    inline const Aws::Vector<DocumentTypeListItem>& GetDocumentType() const { return m_documentType; }
    template<typename DocumentTypeT = Aws::Vector<DocumentTypeListItem>>
    void SetDocumentType(DocumentTypeT&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::forward<DocumentTypeT>(value); }
    template<typename DocumentTypeT = Aws::Vector<DocumentTypeListItem>>
    ClassifyDocumentResult& WithDocumentType(DocumentTypeT&& value) { SetDocumentType(std::forward<DocumentTypeT>(value)); return *this;}
    template<typename DocumentTypeT = DocumentTypeListItem>
    ClassifyDocumentResult& AddDocumentType(DocumentTypeT&& value) { m_documentTypeHasBeenSet = true; m_documentType.emplace_back(std::forward<DocumentTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page-level errors that the system detected while processing the input
     * document. The field is empty if the system encountered no errors.</p>
     */
    inline const Aws::Vector<ErrorsListItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ErrorsListItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ErrorsListItem>>
    ClassifyDocumentResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ErrorsListItem>
    ClassifyDocumentResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Warnings detected while processing the input document. The response includes
     * a warning if there is a mismatch between the input document type and the model
     * type associated with the endpoint that you specified. The response can also
     * include warnings for individual pages that have a mismatch. </p> <p>The field is
     * empty if the system generated no warnings.</p>
     */
    inline const Aws::Vector<WarningsListItem>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<WarningsListItem>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<WarningsListItem>>
    ClassifyDocumentResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = WarningsListItem>
    ClassifyDocumentResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ClassifyDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentClass> m_classes;
    bool m_classesHasBeenSet = false;

    Aws::Vector<DocumentLabel> m_labels;
    bool m_labelsHasBeenSet = false;

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::Vector<DocumentTypeListItem> m_documentType;
    bool m_documentTypeHasBeenSet = false;

    Aws::Vector<ErrorsListItem> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<WarningsListItem> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
