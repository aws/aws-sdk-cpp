/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AdminAccount.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult();
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const{ return m_adminAccounts; }

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline void SetAdminAccounts(const Aws::Vector<AdminAccount>& value) { m_adminAccounts = value; }

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline void SetAdminAccounts(Aws::Vector<AdminAccount>&& value) { m_adminAccounts = std::move(value); }

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(const Aws::Vector<AdminAccount>& value) { SetAdminAccounts(value); return *this;}

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(Aws::Vector<AdminAccount>&& value) { SetAdminAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(const AdminAccount& value) { m_adminAccounts.push_back(value); return *this; }

    /**
     * <p>A list of accounts configured as GuardDuty delegated administrators.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccount&& value) { m_adminAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AdminAccount> m_adminAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
