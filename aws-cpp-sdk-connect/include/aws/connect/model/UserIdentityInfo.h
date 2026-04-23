/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A <code>UserIdentityInfo</code> object that contains information about the
   * user's identity, including email address, first name, and last
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserIdentityInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API UserIdentityInfo
  {
  public:
    UserIdentityInfo();
    UserIdentityInfo(Aws::Utils::Json::JsonView jsonValue);
    UserIdentityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name used in the user account. This is required if you are using
     * Amazon Connect or SAML for identity management.</p>
     */
    inline UserIdentityInfo& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address added to the user account. If you are using SAML for
     * identity management and include this parameter, an
     * <code>InvalidRequestException</code> is returned.</p>
     */
    inline UserIdentityInfo& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
