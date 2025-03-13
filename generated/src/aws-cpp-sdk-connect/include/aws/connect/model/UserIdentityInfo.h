/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the identity of a user.</p>  <p>For Amazon
   * Connect instances that are created with the <code>EXISTING_DIRECTORY</code>
   * identity management type, <code>FirstName</code>, <code>LastName</code>, and
   * <code>Email</code> cannot be updated from within Amazon Connect because they are
   * managed by the directory.</p>   <p>The <code>FirstName</code>
   * and <code>LastName</code> length constraints below apply only to instances using
   * SAML for identity management. If you are using Amazon Connect for identity
   * management, the length constraints are 1-255 for <code>FirstName</code>, and
   * 1-256 for <code>LastName</code>. </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserIdentityInfo">AWS
   * API Reference</a></p>
   */
  class UserIdentityInfo
  {
  public:
    AWS_CONNECT_API UserIdentityInfo() = default;
    AWS_CONNECT_API UserIdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserIdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management. Inputs must be in Unicode Normalization Form C (NFC). Text
     * containing characters in a non-NFC form (for example, decomposed characters or
     * combining marks) are not accepted.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    UserIdentityInfo& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management. Inputs must be in Unicode Normalization Form C (NFC). Text
     * containing characters in a non-NFC form (for example, decomposed characters or
     * combining marks) are not accepted.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    UserIdentityInfo& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    UserIdentityInfo& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline const Aws::String& GetSecondaryEmail() const { return m_secondaryEmail; }
    inline bool SecondaryEmailHasBeenSet() const { return m_secondaryEmailHasBeenSet; }
    template<typename SecondaryEmailT = Aws::String>
    void SetSecondaryEmail(SecondaryEmailT&& value) { m_secondaryEmailHasBeenSet = true; m_secondaryEmail = std::forward<SecondaryEmailT>(value); }
    template<typename SecondaryEmailT = Aws::String>
    UserIdentityInfo& WithSecondaryEmail(SecondaryEmailT&& value) { SetSecondaryEmail(std::forward<SecondaryEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's mobile number.</p>
     */
    inline const Aws::String& GetMobile() const { return m_mobile; }
    inline bool MobileHasBeenSet() const { return m_mobileHasBeenSet; }
    template<typename MobileT = Aws::String>
    void SetMobile(MobileT&& value) { m_mobileHasBeenSet = true; m_mobile = std::forward<MobileT>(value); }
    template<typename MobileT = Aws::String>
    UserIdentityInfo& WithMobile(MobileT&& value) { SetMobile(std::forward<MobileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_secondaryEmail;
    bool m_secondaryEmailHasBeenSet = false;

    Aws::String m_mobile;
    bool m_mobileHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
