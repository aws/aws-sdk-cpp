/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FMS
{
namespace Model
{
  class ListMemberAccountsResult
  {
  public:
    AWS_FMS_API ListMemberAccountsResult() = default;
    AWS_FMS_API ListMemberAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListMemberAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of account IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberAccounts() const { return m_memberAccounts; }
    template<typename MemberAccountsT = Aws::Vector<Aws::String>>
    void SetMemberAccounts(MemberAccountsT&& value) { m_memberAccountsHasBeenSet = true; m_memberAccounts = std::forward<MemberAccountsT>(value); }
    template<typename MemberAccountsT = Aws::Vector<Aws::String>>
    ListMemberAccountsResult& WithMemberAccounts(MemberAccountsT&& value) { SetMemberAccounts(std::forward<MemberAccountsT>(value)); return *this;}
    template<typename MemberAccountsT = Aws::String>
    ListMemberAccountsResult& AddMemberAccounts(MemberAccountsT&& value) { m_memberAccountsHasBeenSet = true; m_memberAccounts.emplace_back(std::forward<MemberAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMemberAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMemberAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_memberAccounts;
    bool m_memberAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
