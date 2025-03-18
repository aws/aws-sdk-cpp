/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/BatchGetDocumentStatusResponseError.h>
#include <aws/kendra/model/Status.h>
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
namespace kendra
{
namespace Model
{
  class BatchGetDocumentStatusResult
  {
  public:
    AWS_KENDRA_API BatchGetDocumentStatusResult() = default;
    AWS_KENDRA_API BatchGetDocumentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchGetDocumentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of documents that Amazon Kendra couldn't get the status for. The list
     * includes the ID of the document and the reason that the status couldn't be
     * found.</p>
     */
    inline const Aws::Vector<BatchGetDocumentStatusResponseError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetDocumentStatusResponseError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetDocumentStatusResponseError>>
    BatchGetDocumentStatusResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetDocumentStatusResponseError>
    BatchGetDocumentStatusResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of documents. The status indicates if the document is waiting to
     * be indexed, is in the process of indexing, has completed indexing, or failed
     * indexing. If a document failed indexing, the status provides the reason why.</p>
     */
    inline const Aws::Vector<Status>& GetDocumentStatusList() const { return m_documentStatusList; }
    template<typename DocumentStatusListT = Aws::Vector<Status>>
    void SetDocumentStatusList(DocumentStatusListT&& value) { m_documentStatusListHasBeenSet = true; m_documentStatusList = std::forward<DocumentStatusListT>(value); }
    template<typename DocumentStatusListT = Aws::Vector<Status>>
    BatchGetDocumentStatusResult& WithDocumentStatusList(DocumentStatusListT&& value) { SetDocumentStatusList(std::forward<DocumentStatusListT>(value)); return *this;}
    template<typename DocumentStatusListT = Status>
    BatchGetDocumentStatusResult& AddDocumentStatusList(DocumentStatusListT&& value) { m_documentStatusListHasBeenSet = true; m_documentStatusList.emplace_back(std::forward<DocumentStatusListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDocumentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetDocumentStatusResponseError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<Status> m_documentStatusList;
    bool m_documentStatusListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
