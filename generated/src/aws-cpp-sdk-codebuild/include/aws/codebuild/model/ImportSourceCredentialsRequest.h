/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ServerType.h>
#include <aws/codebuild/model/AuthType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ImportSourceCredentialsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ImportSourceCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSourceCredentials"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ImportSourceCredentialsRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is either the access token or the app password. For the
     * <code>authType</code> CODECONNECTIONS, this is the <code>connectionArn</code>.
     * For the <code>authType</code> SECRETS_MANAGER, this is the
     * <code>secretArn</code>.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    ImportSourceCredentialsRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source provider used for this project. </p>
     */
    inline ServerType GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(ServerType value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline ImportSourceCredentialsRequest& WithServerType(ServerType value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * GitLab, GitLab Self Managed, or Bitbucket repository. An OAUTH connection is not
     * supported by the API and must be created using the CodeBuild console.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline ImportSourceCredentialsRequest& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to <code>false</code> to prevent overwriting the repository source
     * credentials. Set to <code>true</code> to overwrite the repository source
     * credentials. The default value is <code>true</code>. </p>
     */
    inline bool GetShouldOverwrite() const { return m_shouldOverwrite; }
    inline bool ShouldOverwriteHasBeenSet() const { return m_shouldOverwriteHasBeenSet; }
    inline void SetShouldOverwrite(bool value) { m_shouldOverwriteHasBeenSet = true; m_shouldOverwrite = value; }
    inline ImportSourceCredentialsRequest& WithShouldOverwrite(bool value) { SetShouldOverwrite(value); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    ServerType m_serverType{ServerType::NOT_SET};
    bool m_serverTypeHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    bool m_shouldOverwrite{false};
    bool m_shouldOverwriteHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
