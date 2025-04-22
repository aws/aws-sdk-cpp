/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Account
{
namespace Model
{
  class GetAccountInformationResult
  {
  public:
    AWS_ACCOUNT_API GetAccountInformationResult() = default;
    AWS_ACCOUNT_API GetAccountInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetAccountInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time the account was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAccountCreatedDate() const { return m_accountCreatedDate; }
    template<typename AccountCreatedDateT = Aws::Utils::DateTime>
    void SetAccountCreatedDate(AccountCreatedDateT&& value) { m_accountCreatedDateHasBeenSet = true; m_accountCreatedDate = std::forward<AccountCreatedDateT>(value); }
    template<typename AccountCreatedDateT = Aws::Utils::DateTime>
    GetAccountInformationResult& WithAccountCreatedDate(AccountCreatedDateT&& value) { SetAccountCreatedDate(std::forward<AccountCreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the 12-digit account ID number of the Amazon Web Services account
     * that you want to access or modify with this operation. To use this parameter,
     * the caller must be an identity in the <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
     * management account</a> or a delegated administrator account. The specified
     * account ID must be a member account in the same organization. The organization
     * must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
     * features enabled</a>, and the organization must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">trusted
     * access</a> enabled for the Account Management service, and optionally a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#delegated-admin">delegated
     * admin</a> account assigned.</p> <p>This operation can only be called from the
     * management account or the delegated administrator account of an organization for
     * a member account.</p>  <p>The management account can't specify its own
     * <code>AccountId</code>.</p> 
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetAccountInformationResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the account.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    GetAccountInformationResult& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_accountCreatedDate{};
    bool m_accountCreatedDateHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
