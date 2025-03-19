/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DETECTIVE_API GetMembersResult() = default;
    AWS_DETECTIVE_API GetMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API GetMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The member account details that Detective is returning in response to the
     * request.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetMemberDetails() const { return m_memberDetails; }
    template<typename MemberDetailsT = Aws::Vector<MemberDetail>>
    void SetMemberDetails(MemberDetailsT&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails = std::forward<MemberDetailsT>(value); }
    template<typename MemberDetailsT = Aws::Vector<MemberDetail>>
    GetMembersResult& WithMemberDetails(MemberDetailsT&& value) { SetMemberDetails(std::forward<MemberDetailsT>(value)); return *this;}
    template<typename MemberDetailsT = MemberDetail>
    GetMembersResult& AddMemberDetails(MemberDetailsT&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails.emplace_back(std::forward<MemberDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The requested member accounts for which Detective was unable to return member
     * details.</p> <p>For each account, provides the reason why the request could not
     * be processed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    GetMembersResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    GetMembersResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMembersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDetail> m_memberDetails;
    bool m_memberDetailsHasBeenSet = false;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
