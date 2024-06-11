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
    AWS_COMPREHEND_API ClassifyDocumentResult();
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
    inline const Aws::Vector<DocumentClass>& GetClasses() const{ return m_classes; }
    inline void SetClasses(const Aws::Vector<DocumentClass>& value) { m_classes = value; }
    inline void SetClasses(Aws::Vector<DocumentClass>&& value) { m_classes = std::move(value); }
    inline ClassifyDocumentResult& WithClasses(const Aws::Vector<DocumentClass>& value) { SetClasses(value); return *this;}
    inline ClassifyDocumentResult& WithClasses(Aws::Vector<DocumentClass>&& value) { SetClasses(std::move(value)); return *this;}
    inline ClassifyDocumentResult& AddClasses(const DocumentClass& value) { m_classes.push_back(value); return *this; }
    inline ClassifyDocumentResult& AddClasses(DocumentClass&& value) { m_classes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels used in the document being analyzed. These are used for
     * multi-label trained models. Individual labels represent different categories
     * that are related in some manner and are not mutually exclusive. For example, a
     * movie can be just an action movie, or it can be an action movie, a science
     * fiction movie, and a comedy, all at the same time. </p>
     */
    inline const Aws::Vector<DocumentLabel>& GetLabels() const{ return m_labels; }
    inline void SetLabels(const Aws::Vector<DocumentLabel>& value) { m_labels = value; }
    inline void SetLabels(Aws::Vector<DocumentLabel>&& value) { m_labels = std::move(value); }
    inline ClassifyDocumentResult& WithLabels(const Aws::Vector<DocumentLabel>& value) { SetLabels(value); return *this;}
    inline ClassifyDocumentResult& WithLabels(Aws::Vector<DocumentLabel>&& value) { SetLabels(std::move(value)); return *this;}
    inline ClassifyDocumentResult& AddLabels(const DocumentLabel& value) { m_labels.push_back(value); return *this; }
    inline ClassifyDocumentResult& AddLabels(DocumentLabel&& value) { m_labels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Extraction information about the document. This field is present in the
     * response only if your request includes the <code>Byte</code> parameter. </p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline ClassifyDocumentResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline ClassifyDocumentResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type for each page in the input document. This field is present
     * in the response only if your request includes the <code>Byte</code> parameter.
     * </p>
     */
    inline const Aws::Vector<DocumentTypeListItem>& GetDocumentType() const{ return m_documentType; }
    inline void SetDocumentType(const Aws::Vector<DocumentTypeListItem>& value) { m_documentType = value; }
    inline void SetDocumentType(Aws::Vector<DocumentTypeListItem>&& value) { m_documentType = std::move(value); }
    inline ClassifyDocumentResult& WithDocumentType(const Aws::Vector<DocumentTypeListItem>& value) { SetDocumentType(value); return *this;}
    inline ClassifyDocumentResult& WithDocumentType(Aws::Vector<DocumentTypeListItem>&& value) { SetDocumentType(std::move(value)); return *this;}
    inline ClassifyDocumentResult& AddDocumentType(const DocumentTypeListItem& value) { m_documentType.push_back(value); return *this; }
    inline ClassifyDocumentResult& AddDocumentType(DocumentTypeListItem&& value) { m_documentType.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Page-level errors that the system detected while processing the input
     * document. The field is empty if the system encountered no errors.</p>
     */
    inline const Aws::Vector<ErrorsListItem>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<ErrorsListItem>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<ErrorsListItem>&& value) { m_errors = std::move(value); }
    inline ClassifyDocumentResult& WithErrors(const Aws::Vector<ErrorsListItem>& value) { SetErrors(value); return *this;}
    inline ClassifyDocumentResult& WithErrors(Aws::Vector<ErrorsListItem>&& value) { SetErrors(std::move(value)); return *this;}
    inline ClassifyDocumentResult& AddErrors(const ErrorsListItem& value) { m_errors.push_back(value); return *this; }
    inline ClassifyDocumentResult& AddErrors(ErrorsListItem&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Warnings detected while processing the input document. The response includes
     * a warning if there is a mismatch between the input document type and the model
     * type associated with the endpoint that you specified. The response can also
     * include warnings for individual pages that have a mismatch. </p> <p>The field is
     * empty if the system generated no warnings.</p>
     */
    inline const Aws::Vector<WarningsListItem>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<WarningsListItem>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<WarningsListItem>&& value) { m_warnings = std::move(value); }
    inline ClassifyDocumentResult& WithWarnings(const Aws::Vector<WarningsListItem>& value) { SetWarnings(value); return *this;}
    inline ClassifyDocumentResult& WithWarnings(Aws::Vector<WarningsListItem>&& value) { SetWarnings(std::move(value)); return *this;}
    inline ClassifyDocumentResult& AddWarnings(const WarningsListItem& value) { m_warnings.push_back(value); return *this; }
    inline ClassifyDocumentResult& AddWarnings(WarningsListItem&& value) { m_warnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ClassifyDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ClassifyDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ClassifyDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentClass> m_classes;

    Aws::Vector<DocumentLabel> m_labels;

    DocumentMetadata m_documentMetadata;

    Aws::Vector<DocumentTypeListItem> m_documentType;

    Aws::Vector<ErrorsListItem> m_errors;

    Aws::Vector<WarningsListItem> m_warnings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
