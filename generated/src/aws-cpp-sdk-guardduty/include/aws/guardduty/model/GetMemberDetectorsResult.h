﻿/**
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
    AWS_GUARDDUTY_API GetMemberDetectorsResult();
    AWS_GUARDDUTY_API GetMemberDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetMemberDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes which data sources are enabled for a member
     * account.</p>
     */
    inline const Aws::Vector<MemberDataSourceConfiguration>& GetMemberDataSourceConfigurations() const{ return m_memberDataSourceConfigurations; }
    inline void SetMemberDataSourceConfigurations(const Aws::Vector<MemberDataSourceConfiguration>& value) { m_memberDataSourceConfigurations = value; }
    inline void SetMemberDataSourceConfigurations(Aws::Vector<MemberDataSourceConfiguration>&& value) { m_memberDataSourceConfigurations = std::move(value); }
    inline GetMemberDetectorsResult& WithMemberDataSourceConfigurations(const Aws::Vector<MemberDataSourceConfiguration>& value) { SetMemberDataSourceConfigurations(value); return *this;}
    inline GetMemberDetectorsResult& WithMemberDataSourceConfigurations(Aws::Vector<MemberDataSourceConfiguration>&& value) { SetMemberDataSourceConfigurations(std::move(value)); return *this;}
    inline GetMemberDetectorsResult& AddMemberDataSourceConfigurations(const MemberDataSourceConfiguration& value) { m_memberDataSourceConfigurations.push_back(value); return *this; }
    inline GetMemberDetectorsResult& AddMemberDataSourceConfigurations(MemberDataSourceConfiguration&& value) { m_memberDataSourceConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of member account IDs that were unable to be processed along with an
     * explanation for why they were not processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }
    inline GetMemberDetectorsResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}
    inline GetMemberDetectorsResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}
    inline GetMemberDetectorsResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }
    inline GetMemberDetectorsResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMemberDetectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMemberDetectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMemberDetectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDataSourceConfiguration> m_memberDataSourceConfigurations;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
