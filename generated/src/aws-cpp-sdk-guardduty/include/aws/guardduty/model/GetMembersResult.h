﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Member.h>
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
  class GetMembersResult
  {
  public:
    AWS_GUARDDUTY_API GetMembersResult();
    AWS_GUARDDUTY_API GetMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of members.</p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }
    inline GetMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}
    inline GetMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}
    inline GetMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }
    inline GetMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }
    inline GetMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}
    inline GetMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}
    inline GetMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }
    inline GetMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Member> m_members;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
