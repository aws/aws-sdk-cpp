/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteInvitationsResult
  {
  public:
    AWS_GUARDDUTY_API DeleteInvitationsResult() = default;
    AWS_GUARDDUTY_API DeleteInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API DeleteInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain the unprocessed account and a result string
     * that explains why it was unprocessed.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    DeleteInvitationsResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    DeleteInvitationsResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteInvitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
