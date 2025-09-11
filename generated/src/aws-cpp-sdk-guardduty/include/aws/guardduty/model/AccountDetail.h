/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountDetail">AWS
   * API Reference</a></p>
   */
  class AccountDetail
  {
  public:
    AWS_GUARDDUTY_API AccountDetail() = default;
    AWS_GUARDDUTY_API AccountDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The member account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountDetail& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the member account. The following list includes the
     * rules for a valid email address:</p> <ul> <li> <p>The email address must be a
     * minimum of 6 and a maximum of 64 characters long.</p> </li> <li> <p>All
     * characters must be 7-bit ASCII characters.</p> </li> <li> <p>There must be one
     * and only one @ symbol, which separates the local name from the domain name.</p>
     * </li> <li> <p>The local name can't contain any of the following characters:</p>
     * <p>whitespace, " ' ( ) &lt; &gt; [ ] : ' , \ | % &amp;</p> </li> <li> <p>The
     * local name can't begin with a dot (.).</p> </li> <li> <p>The domain name can
     * consist of only the characters [a-z], [A-Z], [0-9], hyphen (-), or dot (.).</p>
     * </li> <li> <p>The domain name can't begin or end with a dot (.) or hyphen
     * (-).</p> </li> <li> <p>The domain name must contain at least one dot. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    AccountDetail& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
