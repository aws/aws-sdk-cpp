/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Member.h>
#include <aws/securityhub/model/Result.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetMembersResult
  {
  public:
    AWS_SECURITYHUB_API GetMembersResult();
    AWS_SECURITYHUB_API GetMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline GetMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline GetMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline GetMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }

    /**
     * <p>The list of details about the Security Hub member accounts.</p>
     */
    inline GetMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline const Aws::Vector<Result>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<Result>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<Result>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline GetMembersResult& WithUnprocessedAccounts(const Aws::Vector<Result>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline GetMembersResult& WithUnprocessedAccounts(Aws::Vector<Result>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline GetMembersResult& AddUnprocessedAccounts(const Result& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Web Services accounts that could not be processed. For
     * each account, the list includes the account ID and the email address.</p>
     */
    inline GetMembersResult& AddUnprocessedAccounts(Result&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Member> m_members;

    Aws::Vector<Result> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
