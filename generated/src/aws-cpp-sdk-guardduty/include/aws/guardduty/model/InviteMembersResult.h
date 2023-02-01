/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/UnprocessedAccount.h>
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
  class InviteMembersResult
  {
  public:
    AWS_GUARDDUTY_API InviteMembersResult();
    AWS_GUARDDUTY_API InviteMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API InviteMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline InviteMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline InviteMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline InviteMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline InviteMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
