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
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult();
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline const Aws::Vector<AccountAssociationsListElement>& GetLinkedAccounts() const{ return m_linkedAccounts; }

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline void SetLinkedAccounts(const Aws::Vector<AccountAssociationsListElement>& value) { m_linkedAccounts = value; }

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline void SetLinkedAccounts(Aws::Vector<AccountAssociationsListElement>&& value) { m_linkedAccounts = std::move(value); }

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline ListAccountAssociationsResult& WithLinkedAccounts(const Aws::Vector<AccountAssociationsListElement>& value) { SetLinkedAccounts(value); return *this;}

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline ListAccountAssociationsResult& WithLinkedAccounts(Aws::Vector<AccountAssociationsListElement>&& value) { SetLinkedAccounts(std::move(value)); return *this;}

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline ListAccountAssociationsResult& AddLinkedAccounts(const AccountAssociationsListElement& value) { m_linkedAccounts.push_back(value); return *this; }

    /**
     * <p> The list of linked accounts in the payer account. </p>
     */
    inline ListAccountAssociationsResult& AddLinkedAccounts(AccountAssociationsListElement&& value) { m_linkedAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline ListAccountAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline ListAccountAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to get accounts. </p>
     */
    inline ListAccountAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountAssociationsListElement> m_linkedAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
