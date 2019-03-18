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
   * The IAM access key details (IAM user information) of a user that engaged in the
   * activity that prompted GuardDuty to generate a finding.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccessKeyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API AccessKeyDetails
  {
  public:
    AccessKeyDetails();
    AccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Access key ID of the user.
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * Access key ID of the user.
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * Access key ID of the user.
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * Access key ID of the user.
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * Access key ID of the user.
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * Access key ID of the user.
     */
    inline AccessKeyDetails& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * Access key ID of the user.
     */
    inline AccessKeyDetails& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * Access key ID of the user.
     */
    inline AccessKeyDetails& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * The principal ID of the user.
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * The principal ID of the user.
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * The principal ID of the user.
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * The principal ID of the user.
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * The principal ID of the user.
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * The principal ID of the user.
     */
    inline AccessKeyDetails& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * The principal ID of the user.
     */
    inline AccessKeyDetails& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * The principal ID of the user.
     */
    inline AccessKeyDetails& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * The name of the user.
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * The name of the user.
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * The name of the user.
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * The name of the user.
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * The name of the user.
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * The name of the user.
     */
    inline AccessKeyDetails& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * The name of the user.
     */
    inline AccessKeyDetails& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * The name of the user.
     */
    inline AccessKeyDetails& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * The type of the user.
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }

    /**
     * The type of the user.
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * The type of the user.
     */
    inline void SetUserType(const Aws::String& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * The type of the user.
     */
    inline void SetUserType(Aws::String&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * The type of the user.
     */
    inline void SetUserType(const char* value) { m_userTypeHasBeenSet = true; m_userType.assign(value); }

    /**
     * The type of the user.
     */
    inline AccessKeyDetails& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}

    /**
     * The type of the user.
     */
    inline AccessKeyDetails& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}

    /**
     * The type of the user.
     */
    inline AccessKeyDetails& WithUserType(const char* value) { SetUserType(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_userType;
    bool m_userTypeHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
