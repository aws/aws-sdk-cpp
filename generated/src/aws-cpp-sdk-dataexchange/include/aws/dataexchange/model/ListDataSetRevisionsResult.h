/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/RevisionEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListDataSetRevisionsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult() = default;
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSetRevisionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline const Aws::Vector<RevisionEntry>& GetRevisions() const { return m_revisions; }
    template<typename RevisionsT = Aws::Vector<RevisionEntry>>
    void SetRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions = std::forward<RevisionsT>(value); }
    template<typename RevisionsT = Aws::Vector<RevisionEntry>>
    ListDataSetRevisionsResult& WithRevisions(RevisionsT&& value) { SetRevisions(std::forward<RevisionsT>(value)); return *this;}
    template<typename RevisionsT = RevisionEntry>
    ListDataSetRevisionsResult& AddRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions.emplace_back(std::forward<RevisionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSetRevisionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RevisionEntry> m_revisions;
    bool m_revisionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
