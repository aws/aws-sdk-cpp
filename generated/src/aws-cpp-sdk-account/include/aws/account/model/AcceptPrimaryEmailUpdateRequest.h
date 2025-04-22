/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class AcceptPrimaryEmailUpdateRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API AcceptPrimaryEmailUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptPrimaryEmailUpdate"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


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
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AcceptPrimaryEmailUpdateRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OTP code sent to the <code>PrimaryEmail</code> specified on the
     * <code>StartPrimaryEmailUpdate</code> API call.</p>
     */
    inline const Aws::String& GetOtp() const { return m_otp; }
    inline bool OtpHasBeenSet() const { return m_otpHasBeenSet; }
    template<typename OtpT = Aws::String>
    void SetOtp(OtpT&& value) { m_otpHasBeenSet = true; m_otp = std::forward<OtpT>(value); }
    template<typename OtpT = Aws::String>
    AcceptPrimaryEmailUpdateRequest& WithOtp(OtpT&& value) { SetOtp(std::forward<OtpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new primary email address for use with the specified account. This must
     * match the <code>PrimaryEmail</code> from the
     * <code>StartPrimaryEmailUpdate</code> API call.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const { return m_primaryEmail; }
    inline bool PrimaryEmailHasBeenSet() const { return m_primaryEmailHasBeenSet; }
    template<typename PrimaryEmailT = Aws::String>
    void SetPrimaryEmail(PrimaryEmailT&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::forward<PrimaryEmailT>(value); }
    template<typename PrimaryEmailT = Aws::String>
    AcceptPrimaryEmailUpdateRequest& WithPrimaryEmail(PrimaryEmailT&& value) { SetPrimaryEmail(std::forward<PrimaryEmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_otp;
    bool m_otpHasBeenSet = false;

    Aws::String m_primaryEmail;
    bool m_primaryEmailHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
