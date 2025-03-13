/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AuthenticationProfileSummary.h>
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
  class ListAuthenticationProfilesResult
  {
  public:
    AWS_CONNECT_API ListAuthenticationProfilesResult() = default;
    AWS_CONNECT_API ListAuthenticationProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAuthenticationProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of a given authentication profile.</p>
     */
    inline const Aws::Vector<AuthenticationProfileSummary>& GetAuthenticationProfileSummaryList() const { return m_authenticationProfileSummaryList; }
    template<typename AuthenticationProfileSummaryListT = Aws::Vector<AuthenticationProfileSummary>>
    void SetAuthenticationProfileSummaryList(AuthenticationProfileSummaryListT&& value) { m_authenticationProfileSummaryListHasBeenSet = true; m_authenticationProfileSummaryList = std::forward<AuthenticationProfileSummaryListT>(value); }
    template<typename AuthenticationProfileSummaryListT = Aws::Vector<AuthenticationProfileSummary>>
    ListAuthenticationProfilesResult& WithAuthenticationProfileSummaryList(AuthenticationProfileSummaryListT&& value) { SetAuthenticationProfileSummaryList(std::forward<AuthenticationProfileSummaryListT>(value)); return *this;}
    template<typename AuthenticationProfileSummaryListT = AuthenticationProfileSummary>
    ListAuthenticationProfilesResult& AddAuthenticationProfileSummaryList(AuthenticationProfileSummaryListT&& value) { m_authenticationProfileSummaryListHasBeenSet = true; m_authenticationProfileSummaryList.emplace_back(std::forward<AuthenticationProfileSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAuthenticationProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAuthenticationProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthenticationProfileSummary> m_authenticationProfileSummaryList;
    bool m_authenticationProfileSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
