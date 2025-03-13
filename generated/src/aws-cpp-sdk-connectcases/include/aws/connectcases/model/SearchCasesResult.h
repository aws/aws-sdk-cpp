/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/SearchCasesResponseItem.h>
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
namespace ConnectCases
{
namespace Model
{
  class SearchCasesResult
  {
  public:
    AWS_CONNECTCASES_API SearchCasesResult() = default;
    AWS_CONNECTCASES_API SearchCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API SearchCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of case documents where each case contains the properties
     * <code>CaseId</code> and <code>Fields</code> where each field is a complex union
     * structure. </p>
     */
    inline const Aws::Vector<SearchCasesResponseItem>& GetCases() const { return m_cases; }
    template<typename CasesT = Aws::Vector<SearchCasesResponseItem>>
    void SetCases(CasesT&& value) { m_casesHasBeenSet = true; m_cases = std::forward<CasesT>(value); }
    template<typename CasesT = Aws::Vector<SearchCasesResponseItem>>
    SearchCasesResult& WithCases(CasesT&& value) { SetCases(std::forward<CasesT>(value)); return *this;}
    template<typename CasesT = SearchCasesResponseItem>
    SearchCasesResult& AddCases(CasesT&& value) { m_casesHasBeenSet = true; m_cases.emplace_back(std::forward<CasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchCasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchCasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchCasesResponseItem> m_cases;
    bool m_casesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
