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
  class StopMonitoringMembersResult
  {
  public:
    AWS_GUARDDUTY_API StopMonitoringMembersResult();
    AWS_GUARDDUTY_API StopMonitoringMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API StopMonitoringMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline StopMonitoringMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline StopMonitoringMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline StopMonitoringMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain an accountId for each account that could not
     * be processed, and a result string that indicates why the account was not
     * processed. </p>
     */
    inline StopMonitoringMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
