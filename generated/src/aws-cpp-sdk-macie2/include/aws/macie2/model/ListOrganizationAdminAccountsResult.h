/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AdminAccount.h>
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
namespace Macie2
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_MACIE2_API ListOrganizationAdminAccountsResult();
    AWS_MACIE2_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const{ return m_adminAccounts; }

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline void SetAdminAccounts(const Aws::Vector<AdminAccount>& value) { m_adminAccounts = value; }

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline void SetAdminAccounts(Aws::Vector<AdminAccount>&& value) { m_adminAccounts = std::move(value); }

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(const Aws::Vector<AdminAccount>& value) { SetAdminAccounts(value); return *this;}

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(Aws::Vector<AdminAccount>&& value) { SetAdminAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(const AdminAccount& value) { m_adminAccounts.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each delegated Amazon Macie administrator
     * account for the organization. Only one of these accounts can have a status of
     * ENABLED.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccount&& value) { m_adminAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AdminAccount> m_adminAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
