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
    AWS_ELASTICACHE_API ModifyUserRequest() = default;

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
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    ModifyUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const { return m_accessString; }
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }
    template<typename AccessStringT = Aws::String>
    void SetAccessString(AccessStringT&& value) { m_accessStringHasBeenSet = true; m_accessString = std::forward<AccessStringT>(value); }
    template<typename AccessStringT = Aws::String>
    ModifyUserRequest& WithAccessString(AccessStringT&& value) { SetAccessString(std::forward<AccessStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds additional user permissions to the access string.</p>
     */
    inline const Aws::String& GetAppendAccessString() const { return m_appendAccessString; }
    inline bool AppendAccessStringHasBeenSet() const { return m_appendAccessStringHasBeenSet; }
    template<typename AppendAccessStringT = Aws::String>
    void SetAppendAccessString(AppendAccessStringT&& value) { m_appendAccessStringHasBeenSet = true; m_appendAccessString = std::forward<AppendAccessStringT>(value); }
    template<typename AppendAccessStringT = Aws::String>
    ModifyUserRequest& WithAppendAccessString(AppendAccessStringT&& value) { SetAppendAccessString(std::forward<AppendAccessStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The passwords belonging to the user. You are allowed up to two.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const { return m_passwords; }
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    void SetPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords = std::forward<PasswordsT>(value); }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    ModifyUserRequest& WithPasswords(PasswordsT&& value) { SetPasswords(std::forward<PasswordsT>(value)); return *this;}
    template<typename PasswordsT = Aws::String>
    ModifyUserRequest& AddPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords.emplace_back(std::forward<PasswordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates no password is required for the user.</p>
     */
    inline bool GetNoPasswordRequired() const { return m_noPasswordRequired; }
    inline bool NoPasswordRequiredHasBeenSet() const { return m_noPasswordRequiredHasBeenSet; }
    inline void SetNoPasswordRequired(bool value) { m_noPasswordRequiredHasBeenSet = true; m_noPasswordRequired = value; }
    inline ModifyUserRequest& WithNoPasswordRequired(bool value) { SetNoPasswordRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to authenticate the user.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const { return m_authenticationMode; }
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }
    template<typename AuthenticationModeT = AuthenticationMode>
    void SetAuthenticationMode(AuthenticationModeT&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::forward<AuthenticationModeT>(value); }
    template<typename AuthenticationModeT = AuthenticationMode>
    ModifyUserRequest& WithAuthenticationMode(AuthenticationModeT&& value) { SetAuthenticationMode(std::forward<AuthenticationModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed for a user. The options are valkey or redis.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ModifyUserRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
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

    bool m_noPasswordRequired{false};
    bool m_noPasswordRequiredHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
