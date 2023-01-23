/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/AuthenticationMode.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class ModifyUserRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyUser"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline ModifyUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline ModifyUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline ModifyUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline ModifyUserRequest& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline ModifyUserRequest& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline ModifyUserRequest& WithAccessString(const char* value) { SetAccessString(value); return *this;}


    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline const Aws::String& GetAppendAccessString() const{ return m_appendAccessString; }

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline bool AppendAccessStringHasBeenSet() const { return m_appendAccessStringHasBeenSet; }

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline void SetAppendAccessString(const Aws::String& value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString = value; }

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline void SetAppendAccessString(Aws::String&& value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString = std::move(value); }

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline void SetAppendAccessString(const char* value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString.assign(value); }

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline ModifyUserRequest& WithAppendAccessString(const Aws::String& value) { SetAppendAccessString(value); return *this;}

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline ModifyUserRequest& WithAppendAccessString(Aws::String&& value) { SetAppendAccessString(std::move(value)); return *this;}

    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline ModifyUserRequest& WithAppendAccessString(const char* value) { SetAppendAccessString(value); return *this;}


    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const{ return m_passwords; }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline void SetPasswords(const Aws::Vector<Aws::String>& value) { m_passwordsHasBeenSet = true; m_passwords = value; }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline void SetPasswords(Aws::Vector<Aws::String>&& value) { m_passwordsHasBeenSet = true; m_passwords = std::move(value); }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline ModifyUserRequest& WithPasswords(const Aws::Vector<Aws::String>& value) { SetPasswords(value); return *this;}

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline ModifyUserRequest& WithPasswords(Aws::Vector<Aws::String>&& value) { SetPasswords(std::move(value)); return *this;}

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline ModifyUserRequest& AddPasswords(const Aws::String& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline ModifyUserRequest& AddPasswords(Aws::String&& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(std::move(value)); return *this; }

    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline ModifyUserRequest& AddPasswords(const char* value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }


    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline bool GetNoPasswordRequired() const{ return m_noPasswordRequired; }

    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline bool NoPasswordRequiredHasBeenSet() const { return m_noPasswordRequiredHasBeenSet; }

    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline void SetNoPasswordRequired(bool value) { m_noPasswordRequiredHasBeenSet = true; m_noPasswordRequired = value; }

    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline ModifyUserRequest& WithNoPasswordRequired(bool value) { SetNoPasswordRequired(value); return *this;}


    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }

    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }

    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }

    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }

    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline ModifyUserRequest& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}

    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline ModifyUserRequest& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet = false;

    Aws::String m_appendAccessString;
    bool m_appendAccessStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;

    bool m_noPasswordRequired;
    bool m_noPasswordRequiredHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
