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

    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline ModifyUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ModifyUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ModifyUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }
    inline ModifyUserRequest& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}
    inline ModifyUserRequest& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}
    inline ModifyUserRequest& WithAccessString(const char* value) { SetAccessString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline const Aws::String& GetAppendAccessString() const{ return m_appendAccessString; }
    inline bool AppendAccessStringHasBeenSet() const { return m_appendAccessStringHasBeenSet; }
    inline void SetAppendAccessString(const Aws::String& value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString = value; }
    inline void SetAppendAccessString(Aws::String&& value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString = std::move(value); }
    inline void SetAppendAccessString(const char* value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString.assign(value); }
    inline ModifyUserRequest& WithAppendAccessString(const Aws::String& value) { SetAppendAccessString(value); return *this;}
    inline ModifyUserRequest& WithAppendAccessString(Aws::String&& value) { SetAppendAccessString(std::move(value)); return *this;}
    inline ModifyUserRequest& WithAppendAccessString(const char* value) { SetAppendAccessString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const{ return m_passwords; }
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }
    inline void SetPasswords(const Aws::Vector<Aws::String>& value) { m_passwordsHasBeenSet = true; m_passwords = value; }
    inline void SetPasswords(Aws::Vector<Aws::String>&& value) { m_passwordsHasBeenSet = true; m_passwords = std::move(value); }
    inline ModifyUserRequest& WithPasswords(const Aws::Vector<Aws::String>& value) { SetPasswords(value); return *this;}
    inline ModifyUserRequest& WithPasswords(Aws::Vector<Aws::String>&& value) { SetPasswords(std::move(value)); return *this;}
    inline ModifyUserRequest& AddPasswords(const Aws::String& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }
    inline ModifyUserRequest& AddPasswords(Aws::String&& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(std::move(value)); return *this; }
    inline ModifyUserRequest& AddPasswords(const char* value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline bool GetNoPasswordRequired() const{ return m_noPasswordRequired; }
    inline bool NoPasswordRequiredHasBeenSet() const { return m_noPasswordRequiredHasBeenSet; }
    inline void SetNoPasswordRequired(bool value) { m_noPasswordRequiredHasBeenSet = true; m_noPasswordRequired = value; }
    inline ModifyUserRequest& WithNoPasswordRequired(bool value) { SetNoPasswordRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }
    inline ModifyUserRequest& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}
    inline ModifyUserRequest& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine for a specific user. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ModifyUserRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyUserRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyUserRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}
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

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
