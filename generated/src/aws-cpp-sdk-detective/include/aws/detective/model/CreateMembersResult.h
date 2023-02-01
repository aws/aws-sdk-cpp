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
  class CreateMembersResult
  {
  public:
    AWS_DETECTIVE_API CreateMembersResult();
    AWS_DETECTIVE_API CreateMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API CreateMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetMembers() const{ return m_members; }

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline void SetMembers(const Aws::Vector<MemberDetail>& value) { m_members = value; }

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline void SetMembers(Aws::Vector<MemberDetail>&& value) { m_members = std::move(value); }

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline CreateMembersResult& WithMembers(const Aws::Vector<MemberDetail>& value) { SetMembers(value); return *this;}

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline CreateMembersResult& WithMembers(Aws::Vector<MemberDetail>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline CreateMembersResult& AddMembers(const MemberDetail& value) { m_members.push_back(value); return *this; }

    /**
     * <p>The set of member account invitation or enablement requests that Detective
     * was able to process. This includes accounts that are being verified, that failed
     * verification, and that passed verification and are being sent an invitation or
     * are being enabled.</p>
     */
    inline CreateMembersResult& AddMembers(MemberDetail&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline void SetUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { m_unprocessedAccounts = value; }

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline void SetUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { m_unprocessedAccounts = std::move(value); }

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline CreateMembersResult& WithUnprocessedAccounts(const Aws::Vector<UnprocessedAccount>& value) { SetUnprocessedAccounts(value); return *this;}

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline CreateMembersResult& WithUnprocessedAccounts(Aws::Vector<UnprocessedAccount>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline CreateMembersResult& AddUnprocessedAccounts(const UnprocessedAccount& value) { m_unprocessedAccounts.push_back(value); return *this; }

    /**
     * <p>The list of accounts for which Detective was unable to process the invitation
     * or enablement request. For each account, the list provides the reason why the
     * request could not be processed. The list includes accounts that are already
     * member accounts in the behavior graph.</p>
     */
    inline CreateMembersResult& AddUnprocessedAccounts(UnprocessedAccount&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MemberDetail> m_members;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
