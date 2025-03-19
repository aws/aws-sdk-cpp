/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/UnprocessedAccount.h>
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
namespace Macie2
{
namespace Model
{
  class CreateInvitationsResult
  {
  public:
    AWS_MACIE2_API CreateInvitationsResult() = default;
    AWS_MACIE2_API CreateInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API CreateInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each account whose invitation hasn't been
     * processed. Each object identifies the account and explains why the invitation
     * hasn't been processed for the account.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    CreateInvitationsResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    CreateInvitationsResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInvitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
