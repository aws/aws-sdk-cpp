/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/DelegatedAdminAccount.h>
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
namespace Inspector2
{
namespace Model
{
  class ListDelegatedAdminAccountsResult
  {
  public:
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult() = default;
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListDelegatedAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the Amazon Inspector delegated administrator of your
     * organization.</p>
     */
    inline const Aws::Vector<DelegatedAdminAccount>& GetDelegatedAdminAccounts() const { return m_delegatedAdminAccounts; }
    template<typename DelegatedAdminAccountsT = Aws::Vector<DelegatedAdminAccount>>
    void SetDelegatedAdminAccounts(DelegatedAdminAccountsT&& value) { m_delegatedAdminAccountsHasBeenSet = true; m_delegatedAdminAccounts = std::forward<DelegatedAdminAccountsT>(value); }
    template<typename DelegatedAdminAccountsT = Aws::Vector<DelegatedAdminAccount>>
    ListDelegatedAdminAccountsResult& WithDelegatedAdminAccounts(DelegatedAdminAccountsT&& value) { SetDelegatedAdminAccounts(std::forward<DelegatedAdminAccountsT>(value)); return *this;}
    template<typename DelegatedAdminAccountsT = DelegatedAdminAccount>
    ListDelegatedAdminAccountsResult& AddDelegatedAdminAccounts(DelegatedAdminAccountsT&& value) { m_delegatedAdminAccountsHasBeenSet = true; m_delegatedAdminAccounts.emplace_back(std::forward<DelegatedAdminAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDelegatedAdminAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDelegatedAdminAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DelegatedAdminAccount> m_delegatedAdminAccounts;
    bool m_delegatedAdminAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
