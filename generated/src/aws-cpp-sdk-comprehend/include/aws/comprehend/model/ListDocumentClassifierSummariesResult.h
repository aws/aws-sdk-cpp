/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DocumentClassifierSummary.h>
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
  class ListDocumentClassifierSummariesResult
  {
  public:
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult() = default;
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDocumentClassifierSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of summaries of document classifiers.</p>
     */
    inline const Aws::Vector<DocumentClassifierSummary>& GetDocumentClassifierSummariesList() const { return m_documentClassifierSummariesList; }
    template<typename DocumentClassifierSummariesListT = Aws::Vector<DocumentClassifierSummary>>
    void SetDocumentClassifierSummariesList(DocumentClassifierSummariesListT&& value) { m_documentClassifierSummariesListHasBeenSet = true; m_documentClassifierSummariesList = std::forward<DocumentClassifierSummariesListT>(value); }
    template<typename DocumentClassifierSummariesListT = Aws::Vector<DocumentClassifierSummary>>
    ListDocumentClassifierSummariesResult& WithDocumentClassifierSummariesList(DocumentClassifierSummariesListT&& value) { SetDocumentClassifierSummariesList(std::forward<DocumentClassifierSummariesListT>(value)); return *this;}
    template<typename DocumentClassifierSummariesListT = DocumentClassifierSummary>
    ListDocumentClassifierSummariesResult& AddDocumentClassifierSummariesList(DocumentClassifierSummariesListT&& value) { m_documentClassifierSummariesListHasBeenSet = true; m_documentClassifierSummariesList.emplace_back(std::forward<DocumentClassifierSummariesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDocumentClassifierSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDocumentClassifierSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DocumentClassifierSummary> m_documentClassifierSummariesList;
    bool m_documentClassifierSummariesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
