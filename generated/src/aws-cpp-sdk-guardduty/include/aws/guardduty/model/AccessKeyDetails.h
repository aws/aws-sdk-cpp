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
   * <p>Contains information about the access keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccessKeyDetails">AWS
   * API Reference</a></p>
   */
  class AccessKeyDetails
  {
  public:
    AWS_GUARDDUTY_API AccessKeyDetails();
    AWS_GUARDDUTY_API AccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access key ID of the user.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The access key ID of the user.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The access key ID of the user.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The access key ID of the user.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The access key ID of the user.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The access key ID of the user.</p>
     */
    inline AccessKeyDetails& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID of the user.</p>
     */
    inline AccessKeyDetails& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The access key ID of the user.</p>
     */
    inline AccessKeyDetails& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The principal ID of the user.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID of the user.</p>
     */
    inline AccessKeyDetails& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline AccessKeyDetails& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID of the user.</p>
     */
    inline AccessKeyDetails& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline AccessKeyDetails& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline AccessKeyDetails& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline AccessKeyDetails& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The type of the user.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }

    /**
     * <p>The type of the user.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetUserType(const Aws::String& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetUserType(Aws::String&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>The type of the user.</p>
     */
    inline void SetUserType(const char* value) { m_userTypeHasBeenSet = true; m_userType.assign(value); }

    /**
     * <p>The type of the user.</p>
     */
    inline AccessKeyDetails& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}

    /**
     * <p>The type of the user.</p>
     */
    inline AccessKeyDetails& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}

    /**
     * <p>The type of the user.</p>
     */
    inline AccessKeyDetails& WithUserType(const char* value) { SetUserType(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userType;
    bool m_userTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
