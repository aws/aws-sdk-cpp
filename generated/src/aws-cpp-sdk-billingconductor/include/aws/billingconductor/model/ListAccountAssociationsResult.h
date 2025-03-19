/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/AccountAssociationsListElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListAccountAssociationsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult() = default;
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline const Aws::Vector<AccountAssociationsListElement>& GetLinkedAccounts() const { return m_linkedAccounts; }
    template<typename LinkedAccountsT = Aws::Vector<AccountAssociationsListElement>>
    void SetLinkedAccounts(LinkedAccountsT&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts = std::forward<LinkedAccountsT>(value); }
    template<typename LinkedAccountsT = Aws::Vector<AccountAssociationsListElement>>
    ListAccountAssociationsResult& WithLinkedAccounts(LinkedAccountsT&& value) { SetLinkedAccounts(std::forward<LinkedAccountsT>(value)); return *this;}
    template<typename LinkedAccountsT = AccountAssociationsListElement>
    ListAccountAssociationsResult& AddLinkedAccounts(LinkedAccountsT&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts.emplace_back(std::forward<LinkedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccountAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccountAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssociationsListElement> m_linkedAccounts;
    bool m_linkedAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
