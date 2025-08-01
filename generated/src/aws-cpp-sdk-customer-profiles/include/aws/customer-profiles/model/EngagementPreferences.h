/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ContactPreference.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that defines users preferred methods of engagement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EngagementPreferences">AWS
   * API Reference</a></p>
   */
  class EngagementPreferences
  {
  public:
    AWS_CUSTOMERPROFILES_API EngagementPreferences() = default;
    AWS_CUSTOMERPROFILES_API EngagementPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EngagementPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of phone-related contact preferences</p>
     */
    inline const Aws::Vector<ContactPreference>& GetPhone() const { return m_phone; }
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }
    template<typename PhoneT = Aws::Vector<ContactPreference>>
    void SetPhone(PhoneT&& value) { m_phoneHasBeenSet = true; m_phone = std::forward<PhoneT>(value); }
    template<typename PhoneT = Aws::Vector<ContactPreference>>
    EngagementPreferences& WithPhone(PhoneT&& value) { SetPhone(std::forward<PhoneT>(value)); return *this;}
    template<typename PhoneT = ContactPreference>
    EngagementPreferences& AddPhone(PhoneT&& value) { m_phoneHasBeenSet = true; m_phone.emplace_back(std::forward<PhoneT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of email-related contact preferences</p>
     */
    inline const Aws::Vector<ContactPreference>& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::Vector<ContactPreference>>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::Vector<ContactPreference>>
    EngagementPreferences& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    template<typename EmailT = ContactPreference>
    EngagementPreferences& AddEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email.emplace_back(std::forward<EmailT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ContactPreference> m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::Vector<ContactPreference> m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
