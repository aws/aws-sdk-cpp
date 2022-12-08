/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/MemberDataSourceConfiguration.h>
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
  class GetMemberDetectorsResult
  {
  public:
    AWS_GUARDDUTY_API GetMemberDetectorsResult();
    AWS_GUARDDUTY_API GetMemberDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetMemberDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline const Aws::Vector<MemberDataSourceConfiguration>& GetMemberDataSourceConfigurations() const{ return m_memberDataSourceConfigurations; }

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline void SetMemberDataSourceConfigurations(const Aws::Vector<MemberDataSourceConfiguration>& value) { m_memberDataSourceConfigurations = value; }

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline void SetMemberDataSourceConfigurations(Aws::Vector<MemberDataSourceConfiguration>&& value) { m_memberDataSourceConfigurations = std::move(value); }

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline GetMemberDetectorsResult& WithMemberDataSourceConfigurations(const Aws::Vector<MemberDataSourceConfiguration>& value) { SetMemberDataSourceConfigurations(value); return *this;}

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline GetMemberDetectorsResult& WithMemberDataSourceConfigurations(Aws::Vector<MemberDataSourceConfiguration>&& value) { SetMemberDataSourceConfigurations(std::move(value)); return *this;}

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline GetMemberDetectorsResult& AddMemberDataSourceConfigurations(const MemberDataSourceConfiguration& value) { m_memberDataSourceConfigurations.push_back(value); return *this; }

    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline GetMemberDetectorsResult& AddMemberDataSourceConfigurations(MemberDataSourceConfiguration&& value) { m_memberDataSourceConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline GetMemberDetectorsResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline GetMemberDetectorsResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline GetMemberDetectorsResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline GetMemberDetectorsResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberDataSourceConfiguration> m_memberDataSourceConfigurations;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
