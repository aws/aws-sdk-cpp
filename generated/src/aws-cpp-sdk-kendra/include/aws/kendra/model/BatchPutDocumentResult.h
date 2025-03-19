/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/BatchPutDocumentResponseFailedDocument.h>
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
  class BatchPutDocumentResult
  {
  public:
    AWS_KENDRA_API BatchPutDocumentResult() = default;
    AWS_KENDRA_API BatchPutDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API BatchPutDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of documents that were not added to the index because the document
     * failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index.</p> <p>If there was
     * an error adding a document to an index the error is reported in your Amazon Web
     * Services CloudWatch log. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/cloudwatch-logs.html">Monitoring
     * Amazon Kendra with Amazon CloudWatch logs</a>.</p>
     */
    inline const Aws::Vector<BatchPutDocumentResponseFailedDocument>& GetFailedDocuments() const { return m_failedDocuments; }
    template<typename FailedDocumentsT = Aws::Vector<BatchPutDocumentResponseFailedDocument>>
    void SetFailedDocuments(FailedDocumentsT&& value) { m_failedDocumentsHasBeenSet = true; m_failedDocuments = std::forward<FailedDocumentsT>(value); }
    template<typename FailedDocumentsT = Aws::Vector<BatchPutDocumentResponseFailedDocument>>
    BatchPutDocumentResult& WithFailedDocuments(FailedDocumentsT&& value) { SetFailedDocuments(std::forward<FailedDocumentsT>(value)); return *this;}
    template<typename FailedDocumentsT = BatchPutDocumentResponseFailedDocument>
    BatchPutDocumentResult& AddFailedDocuments(FailedDocumentsT&& value) { m_failedDocumentsHasBeenSet = true; m_failedDocuments.emplace_back(std::forward<FailedDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutDocumentResponseFailedDocument> m_failedDocuments;
    bool m_failedDocumentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
