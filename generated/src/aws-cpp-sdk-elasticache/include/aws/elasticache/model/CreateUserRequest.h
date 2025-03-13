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
#include <aws/elasticache/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

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
    CreateUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    CreateUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options are valkey or redis. </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateUserRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passwords used for this user. You can create up to two passwords for each
     * user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const { return m_passwords; }
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    void SetPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords = std::forward<PasswordsT>(value); }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    CreateUserRequest& WithPasswords(PasswordsT&& value) { SetPasswords(std::forward<PasswordsT>(value)); return *this;}
    template<typename PasswordsT = Aws::String>
    CreateUserRequest& AddPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords.emplace_back(std::forward<PasswordsT>(value)); return *this; }
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
    CreateUserRequest& WithAccessString(AccessStringT&& value) { SetAccessString(std::forward<AccessStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates a password is not required for this user.</p>
     */
    inline bool GetNoPasswordRequired() const { return m_noPasswordRequired; }
    inline bool NoPasswordRequiredHasBeenSet() const { return m_noPasswordRequiredHasBeenSet; }
    inline void SetNoPasswordRequired(bool value) { m_noPasswordRequiredHasBeenSet = true; m_noPasswordRequired = value; }
    inline CreateUserRequest& WithNoPasswordRequired(bool value) { SetNoPasswordRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateUserRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateUserRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateUserRequest& WithAuthenticationMode(AuthenticationModeT&& value) { SetAuthenticationMode(std::forward<AuthenticationModeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet = false;

    bool m_noPasswordRequired{false};
    bool m_noPasswordRequiredHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
