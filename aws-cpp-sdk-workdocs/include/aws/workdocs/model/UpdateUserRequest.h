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
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserType.h>
#include <aws/workdocs/model/StorageRuleType.h>
#include <aws/workdocs/model/LocaleType.h>
#include <aws/workdocs/model/BooleanEnumType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API UpdateUserRequest : public WorkDocsRequest
  {
  public:
    UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateUserRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateUserRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline UpdateUserRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The given name of the user.</p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }

    /**
     * <p>The given name of the user.</p>
     */
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }

    /**
     * <p>The given name of the user.</p>
     */
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }

    /**
     * <p>The given name of the user.</p>
     */
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }

    /**
     * <p>The given name of the user.</p>
     */
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }

    /**
     * <p>The given name of the user.</p>
     */
    inline UpdateUserRequest& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}

    /**
     * <p>The given name of the user.</p>
     */
    inline UpdateUserRequest& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}

    /**
     * <p>The given name of the user.</p>
     */
    inline UpdateUserRequest& WithGivenName(const char* value) { SetGivenName(value); return *this;}


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
    inline UpdateUserRequest& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}

    /**
     * <p>The surname of the user.</p>
     */
    inline UpdateUserRequest& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}

    /**
     * <p>The surname of the user.</p>
     */
    inline UpdateUserRequest& WithSurname(const char* value) { SetSurname(value); return *this;}


    /**
     * <p>The type of the user.</p>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p>The type of the user.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the user.</p>
     */
    inline UpdateUserRequest& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the user.</p>
     */
    inline UpdateUserRequest& WithType(UserType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The amount of storage for the user.</p>
     */
    inline const StorageRuleType& GetStorageRule() const{ return m_storageRule; }

    /**
     * <p>The amount of storage for the user.</p>
     */
    inline bool StorageRuleHasBeenSet() const { return m_storageRuleHasBeenSet; }

    /**
     * <p>The amount of storage for the user.</p>
     */
    inline void SetStorageRule(const StorageRuleType& value) { m_storageRuleHasBeenSet = true; m_storageRule = value; }

    /**
     * <p>The amount of storage for the user.</p>
     */
    inline void SetStorageRule(StorageRuleType&& value) { m_storageRuleHasBeenSet = true; m_storageRule = std::move(value); }

    /**
     * <p>The amount of storage for the user.</p>
     */
    inline UpdateUserRequest& WithStorageRule(const StorageRuleType& value) { SetStorageRule(value); return *this;}

    /**
     * <p>The amount of storage for the user.</p>
     */
    inline UpdateUserRequest& WithStorageRule(StorageRuleType&& value) { SetStorageRule(std::move(value)); return *this;}


    /**
     * <p>The time zone ID of the user.</p>
     */
    inline const Aws::String& GetTimeZoneId() const{ return m_timeZoneId; }

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline bool TimeZoneIdHasBeenSet() const { return m_timeZoneIdHasBeenSet; }

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline void SetTimeZoneId(const Aws::String& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = value; }

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline void SetTimeZoneId(Aws::String&& value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId = std::move(value); }

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline void SetTimeZoneId(const char* value) { m_timeZoneIdHasBeenSet = true; m_timeZoneId.assign(value); }

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline UpdateUserRequest& WithTimeZoneId(const Aws::String& value) { SetTimeZoneId(value); return *this;}

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline UpdateUserRequest& WithTimeZoneId(Aws::String&& value) { SetTimeZoneId(std::move(value)); return *this;}

    /**
     * <p>The time zone ID of the user.</p>
     */
    inline UpdateUserRequest& WithTimeZoneId(const char* value) { SetTimeZoneId(value); return *this;}


    /**
     * <p>The locale of the user.</p>
     */
    inline const LocaleType& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the user.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the user.</p>
     */
    inline void SetLocale(const LocaleType& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the user.</p>
     */
    inline void SetLocale(LocaleType&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the user.</p>
     */
    inline UpdateUserRequest& WithLocale(const LocaleType& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the user.</p>
     */
    inline UpdateUserRequest& WithLocale(LocaleType&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline const BooleanEnumType& GetGrantPoweruserPrivileges() const{ return m_grantPoweruserPrivileges; }

    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline bool GrantPoweruserPrivilegesHasBeenSet() const { return m_grantPoweruserPrivilegesHasBeenSet; }

    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline void SetGrantPoweruserPrivileges(const BooleanEnumType& value) { m_grantPoweruserPrivilegesHasBeenSet = true; m_grantPoweruserPrivileges = value; }

    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline void SetGrantPoweruserPrivileges(BooleanEnumType&& value) { m_grantPoweruserPrivilegesHasBeenSet = true; m_grantPoweruserPrivileges = std::move(value); }

    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline UpdateUserRequest& WithGrantPoweruserPrivileges(const BooleanEnumType& value) { SetGrantPoweruserPrivileges(value); return *this;}

    /**
     * <p>Boolean value to determine whether the user is granted Poweruser
     * privileges.</p>
     */
    inline UpdateUserRequest& WithGrantPoweruserPrivileges(BooleanEnumType&& value) { SetGrantPoweruserPrivileges(std::move(value)); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet;

    Aws::String m_surname;
    bool m_surnameHasBeenSet;

    UserType m_type;
    bool m_typeHasBeenSet;

    StorageRuleType m_storageRule;
    bool m_storageRuleHasBeenSet;

    Aws::String m_timeZoneId;
    bool m_timeZoneIdHasBeenSet;

    LocaleType m_locale;
    bool m_localeHasBeenSet;

    BooleanEnumType m_grantPoweruserPrivileges;
    bool m_grantPoweruserPrivilegesHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
