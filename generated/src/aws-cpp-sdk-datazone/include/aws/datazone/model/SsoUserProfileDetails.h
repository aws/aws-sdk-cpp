/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The single sign-on details of the user profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SsoUserProfileDetails">AWS
   * API Reference</a></p>
   */
  class SsoUserProfileDetails
  {
  public:
    AWS_DATAZONE_API SsoUserProfileDetails();
    AWS_DATAZONE_API SsoUserProfileDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SsoUserProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline SsoUserProfileDetails& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline SsoUserProfileDetails& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name included in the single sign-on details of the user
     * profile.</p>
     */
    inline SsoUserProfileDetails& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username included in the single sign-on details of the user profile.</p>
     */
    inline SsoUserProfileDetails& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
