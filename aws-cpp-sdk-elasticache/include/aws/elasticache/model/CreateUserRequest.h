/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class AWS_ELASTICACHE_API CreateUserRequest : public ElastiCacheRequest
  {
  public:
    CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CreateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline CreateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline CreateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The username of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username of the user.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username of the user.</p>
     */
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username of the user.</p>
     */
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The username of the user.</p>
     */
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Must be Redis. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Must be Redis. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const{ return m_passwords; }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline void SetPasswords(const Aws::Vector<Aws::String>& value) { m_passwordsHasBeenSet = true; m_passwords = value; }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline void SetPasswords(Aws::Vector<Aws::String>&& value) { m_passwordsHasBeenSet = true; m_passwords = std::move(value); }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline CreateUserRequest& WithPasswords(const Aws::Vector<Aws::String>& value) { SetPasswords(value); return *this;}

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline CreateUserRequest& WithPasswords(Aws::Vector<Aws::String>&& value) { SetPasswords(std::move(value)); return *this;}

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline CreateUserRequest& AddPasswords(const Aws::String& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline CreateUserRequest& AddPasswords(Aws::String&& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(std::move(value)); return *this; }

    /**
     * <p>Passwords used for this user account. You can create up to two passwords for
     * each user.</p>
     */
    inline CreateUserRequest& AddPasswords(const char* value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }


    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline CreateUserRequest& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline CreateUserRequest& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}

    /**
     * <p>Access permissions string used for this user account.</p>
     */
    inline CreateUserRequest& WithAccessString(const char* value) { SetAccessString(value); return *this;}


    /**
     * <p>Indicates a password is not required for this user account.</p>
     */
    inline bool GetNoPasswordRequired() const{ return m_noPasswordRequired; }

    /**
     * <p>Indicates a password is not required for this user account.</p>
     */
    inline bool NoPasswordRequiredHasBeenSet() const { return m_noPasswordRequiredHasBeenSet; }

    /**
     * <p>Indicates a password is not required for this user account.</p>
     */
    inline void SetNoPasswordRequired(bool value) { m_noPasswordRequiredHasBeenSet = true; m_noPasswordRequired = value; }

    /**
     * <p>Indicates a password is not required for this user account.</p>
     */
    inline CreateUserRequest& WithNoPasswordRequired(bool value) { SetNoPasswordRequired(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet;

    bool m_noPasswordRequired;
    bool m_noPasswordRequiredHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
