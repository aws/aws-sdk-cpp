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
   * <p>Contains information about the identity of a user.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserIdentityInfo">AWS
   * API Reference</a></p>
   */
  class UserIdentityInfo
  {
  public:
    AWS_CONNECT_API UserIdentityInfo();
    AWS_CONNECT_API UserIdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserIdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name. This is required if you are using Amazon Connect or SAML for
     * identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address. If you are using SAML for identity management and include
     * this parameter, an error is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline const Aws::String& GetSecondaryEmail() const{ return m_secondaryEmail; }

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline bool SecondaryEmailHasBeenSet() const { return m_secondaryEmailHasBeenSet; }

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline void SetSecondaryEmail(const Aws::String& value) { m_secondaryEmailHasBeenSet = true; m_secondaryEmail = value; }

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline void SetSecondaryEmail(Aws::String&& value) { m_secondaryEmailHasBeenSet = true; m_secondaryEmail = std::move(value); }

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline void SetSecondaryEmail(const char* value) { m_secondaryEmailHasBeenSet = true; m_secondaryEmail.assign(value); }

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline UserIdentityInfo& WithSecondaryEmail(const Aws::String& value) { SetSecondaryEmail(value); return *this;}

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline UserIdentityInfo& WithSecondaryEmail(Aws::String&& value) { SetSecondaryEmail(std::move(value)); return *this;}

    /**
     * <p>The user's secondary email address. If you provide a secondary email, the
     * user receives email notifications - other than password reset notifications - to
     * this email address instead of to their primary email address.</p> <p>Pattern:
     * <code>(?=^.{0,265}$)[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,63}</code> </p>
     */
    inline UserIdentityInfo& WithSecondaryEmail(const char* value) { SetSecondaryEmail(value); return *this;}


    /**
     * <p>The user's mobile number.</p>
     */
    inline const Aws::String& GetMobile() const{ return m_mobile; }

    /**
     * <p>The user's mobile number.</p>
     */
    inline bool MobileHasBeenSet() const { return m_mobileHasBeenSet; }

    /**
     * <p>The user's mobile number.</p>
     */
    inline void SetMobile(const Aws::String& value) { m_mobileHasBeenSet = true; m_mobile = value; }

    /**
     * <p>The user's mobile number.</p>
     */
    inline void SetMobile(Aws::String&& value) { m_mobileHasBeenSet = true; m_mobile = std::move(value); }

    /**
     * <p>The user's mobile number.</p>
     */
    inline void SetMobile(const char* value) { m_mobileHasBeenSet = true; m_mobile.assign(value); }

    /**
     * <p>The user's mobile number.</p>
     */
    inline UserIdentityInfo& WithMobile(const Aws::String& value) { SetMobile(value); return *this;}

    /**
     * <p>The user's mobile number.</p>
     */
    inline UserIdentityInfo& WithMobile(Aws::String&& value) { SetMobile(std::move(value)); return *this;}

    /**
     * <p>The user's mobile number.</p>
     */
    inline UserIdentityInfo& WithMobile(const char* value) { SetMobile(value); return *this;}

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
