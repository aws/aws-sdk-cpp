/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ReferenceSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListContactReferencesResult
  {
  public:
    AWS_CONNECT_API ListContactReferencesResult() = default;
    AWS_CONNECT_API ListContactReferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactReferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flows.</p>
     */
    inline const Aws::Vector<ReferenceSummary>& GetReferenceSummaryList() const { return m_referenceSummaryList; }
    template<typename ReferenceSummaryListT = Aws::Vector<ReferenceSummary>>
    void SetReferenceSummaryList(ReferenceSummaryListT&& value) { m_referenceSummaryListHasBeenSet = true; m_referenceSummaryList = std::forward<ReferenceSummaryListT>(value); }
    template<typename ReferenceSummaryListT = Aws::Vector<ReferenceSummary>>
    ListContactReferencesResult& WithReferenceSummaryList(ReferenceSummaryListT&& value) { SetReferenceSummaryList(std::forward<ReferenceSummaryListT>(value)); return *this;}
    template<typename ReferenceSummaryListT = ReferenceSummary>
    ListContactReferencesResult& AddReferenceSummaryList(ReferenceSummaryListT&& value) { m_referenceSummaryListHasBeenSet = true; m_referenceSummaryList.emplace_back(std::forward<ReferenceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContactReferencesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactReferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReferenceSummary> m_referenceSummaryList;
    bool m_referenceSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
