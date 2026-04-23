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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the metadata of the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UserMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API UserMetadata
  {
  public:
    UserMetadata();
    UserMetadata(Aws::Utils::Json::JsonView jsonValue);
    UserMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the user.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline UserMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline UserMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline UserMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The name of the user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline UserMetadata& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline UserMetadata& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline UserMetadata& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline UserMetadata& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline UserMetadata& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}

    /**
     * <p>The given name of the user before a rename operation.</p>
     */
    inline UserMetadata& WithGivenName(const char* value) { SetGivenName(value); return *this;}


    /**
     * <p>The surname of the user.</p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }

    /**
     * <p>The surname of the user.</p>
     */
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }

    /**
     * <p>The surname of the user.</p>
     */
    inline void SetSurname(const Aws::String& value) { m_surnameHasBeenSet = true; m_surname = value; }

    /**
     * <p>The surname of the user.</p>
     */
    inline void SetSurname(Aws::String&& value) { m_surnameHasBeenSet = true; m_surname = std::move(value); }

    /**
     * <p>The surname of the user.</p>
     */
    inline void SetSurname(const char* value) { m_surnameHasBeenSet = true; m_surname.assign(value); }

    /**
     * <p>The surname of the user.</p>
     */
    inline UserMetadata& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}

    /**
     * <p>The surname of the user.</p>
     */
    inline UserMetadata& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}

    /**
     * <p>The surname of the user.</p>
     */
    inline UserMetadata& WithSurname(const char* value) { SetSurname(value); return *this;}


    /**
     * <p>The email address of the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the user.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the user.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the user.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the user.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the user.</p>
     */
    inline UserMetadata& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the user.</p>
     */
    inline UserMetadata& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the user.</p>
     */
    inline UserMetadata& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet;

    Aws::String m_surname;
    bool m_surnameHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
