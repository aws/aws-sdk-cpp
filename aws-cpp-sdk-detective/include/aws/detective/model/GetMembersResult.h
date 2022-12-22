/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/MemberDetail.h>
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
  class GetMembersResult
  {
  public:
    AWS_DETECTIVE_API GetMembersResult();
    AWS_DETECTIVE_API GetMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API GetMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetMemberDetails() const{ return m_memberDetails; }

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline void SetMemberDetails(const Aws::Vector<MemberDetail>& value) { m_memberDetails = value; }

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline void SetMemberDetails(Aws::Vector<MemberDetail>&& value) { m_memberDetails = std::move(value); }

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline GetMembersResult& WithMemberDetails(const Aws::Vector<MemberDetail>& value) { SetMemberDetails(value); return *this;}

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline GetMembersResult& WithMemberDetails(Aws::Vector<MemberDetail>&& value) { SetMemberDetails(std::move(value)); return *this;}

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline GetMembersResult& AddMemberDetails(const MemberDetail& value) { m_memberDetails.push_back(value); return *this; }

    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline GetMembersResult& AddMemberDetails(MemberDetail&& value) { m_memberDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline GetMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline GetMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline GetMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline GetMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberDetail> m_memberDetails;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
