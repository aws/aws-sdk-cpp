/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/UnprocessedAccount.h>
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
namespace Detective
{
namespace Model
{
  class DeleteMembersResult
  {
  public:
    AWS_DETECTIVE_API DeleteMembersResult();
    AWS_DETECTIVE_API DeleteMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API DeleteMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIds = value; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIds = std::move(value); }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline DeleteMembersResult& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline DeleteMembersResult& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline DeleteMembersResult& AddAccountIds(const Aws::String& value) { m_accountIds.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline DeleteMembersResult& AddAccountIds(Aws::String&& value) { m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Web Services account identifiers for the member accounts
     * that Detective successfully removed from the behavior graph.</p>
     */
    inline DeleteMembersResult& AddAccountIds(const char* value) { m_accountIds.push_back(value); return *this; }


    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline DeleteMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline DeleteMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline DeleteMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of member accounts that Detective was not able to remove from the
     * behavior graph. For each member account, provides the reason that the deletion
     * could not be processed.</p>
     */
    inline DeleteMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
