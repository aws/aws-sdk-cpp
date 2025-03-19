/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityProfileSummary.h>
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
  class ListSecurityProfilesResult
  {
  public:
    AWS_CONNECT_API ListSecurityProfilesResult() = default;
    AWS_CONNECT_API ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the security profiles.</p>
     */
    inline const Aws::Vector<SecurityProfileSummary>& GetSecurityProfileSummaryList() const { return m_securityProfileSummaryList; }
    template<typename SecurityProfileSummaryListT = Aws::Vector<SecurityProfileSummary>>
    void SetSecurityProfileSummaryList(SecurityProfileSummaryListT&& value) { m_securityProfileSummaryListHasBeenSet = true; m_securityProfileSummaryList = std::forward<SecurityProfileSummaryListT>(value); }
    template<typename SecurityProfileSummaryListT = Aws::Vector<SecurityProfileSummary>>
    ListSecurityProfilesResult& WithSecurityProfileSummaryList(SecurityProfileSummaryListT&& value) { SetSecurityProfileSummaryList(std::forward<SecurityProfileSummaryListT>(value)); return *this;}
    template<typename SecurityProfileSummaryListT = SecurityProfileSummary>
    ListSecurityProfilesResult& AddSecurityProfileSummaryList(SecurityProfileSummaryListT&& value) { m_securityProfileSummaryListHasBeenSet = true; m_securityProfileSummaryList.emplace_back(std::forward<SecurityProfileSummaryListT>(value)); return *this; }
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
    ListSecurityProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityProfileSummary> m_securityProfileSummaryList;
    bool m_securityProfileSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
