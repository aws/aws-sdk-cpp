/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GUARDDUTY_API GetMemberDetectorsResult() = default;
    AWS_GUARDDUTY_API GetMemberDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetMemberDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline const Aws::Vector<MemberDataSourceConfiguration>& GetMemberDataSourceConfigurations() const { return m_memberDataSourceConfigurations; }
    template<typename MemberDataSourceConfigurationsT = Aws::Vector<MemberDataSourceConfiguration>>
    void SetMemberDataSourceConfigurations(MemberDataSourceConfigurationsT&& value) { m_memberDataSourceConfigurationsHasBeenSet = true; m_memberDataSourceConfigurations = std::forward<MemberDataSourceConfigurationsT>(value); }
    template<typename MemberDataSourceConfigurationsT = Aws::Vector<MemberDataSourceConfiguration>>
    GetMemberDetectorsResult& WithMemberDataSourceConfigurations(MemberDataSourceConfigurationsT&& value) { SetMemberDataSourceConfigurations(std::forward<MemberDataSourceConfigurationsT>(value)); return *this;}
    template<typename MemberDataSourceConfigurationsT = MemberDataSourceConfiguration>
    GetMemberDetectorsResult& AddMemberDataSourceConfigurations(MemberDataSourceConfigurationsT&& value) { m_memberDataSourceConfigurationsHasBeenSet = true; m_memberDataSourceConfigurations.emplace_back(std::forward<MemberDataSourceConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    GetMemberDetectorsResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    GetMemberDetectorsResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMemberDetectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDataSourceConfiguration> m_memberDataSourceConfigurations;
    bool m_memberDataSourceConfigurationsHasBeenSet = false;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
