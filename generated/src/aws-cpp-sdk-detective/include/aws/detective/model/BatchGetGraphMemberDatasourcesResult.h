/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MembershipDatasources.h>
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
  class BatchGetGraphMemberDatasourcesResult
  {
  public:
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult() = default;
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API BatchGetGraphMemberDatasourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details on the status of data source packages for members of the behavior
     * graph.</p>
     */
    inline const Aws::Vector<MembershipDatasources>& GetMemberDatasources() const { return m_memberDatasources; }
    template<typename MemberDatasourcesT = Aws::Vector<MembershipDatasources>>
    void SetMemberDatasources(MemberDatasourcesT&& value) { m_memberDatasourcesHasBeenSet = true; m_memberDatasources = std::forward<MemberDatasourcesT>(value); }
    template<typename MemberDatasourcesT = Aws::Vector<MembershipDatasources>>
    BatchGetGraphMemberDatasourcesResult& WithMemberDatasources(MemberDatasourcesT&& value) { SetMemberDatasources(std::forward<MemberDatasourcesT>(value)); return *this;}
    template<typename MemberDatasourcesT = MembershipDatasources>
    BatchGetGraphMemberDatasourcesResult& AddMemberDatasources(MemberDatasourcesT&& value) { m_memberDatasourcesHasBeenSet = true; m_memberDatasources.emplace_back(std::forward<MemberDatasourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Accounts that data source package information could not be retrieved for.</p>
     */
    inline const Aws::Vector<UnprocessedAccount>& GetUnprocessedAccounts() const { return m_unprocessedAccounts; }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    void SetUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts = std::forward<UnprocessedAccountsT>(value); }
    template<typename UnprocessedAccountsT = Aws::Vector<UnprocessedAccount>>
    BatchGetGraphMemberDatasourcesResult& WithUnprocessedAccounts(UnprocessedAccountsT&& value) { SetUnprocessedAccounts(std::forward<UnprocessedAccountsT>(value)); return *this;}
    template<typename UnprocessedAccountsT = UnprocessedAccount>
    BatchGetGraphMemberDatasourcesResult& AddUnprocessedAccounts(UnprocessedAccountsT&& value) { m_unprocessedAccountsHasBeenSet = true; m_unprocessedAccounts.emplace_back(std::forward<UnprocessedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetGraphMemberDatasourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MembershipDatasources> m_memberDatasources;
    bool m_memberDatasourcesHasBeenSet = false;

    Aws::Vector<UnprocessedAccount> m_unprocessedAccounts;
    bool m_unprocessedAccountsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
