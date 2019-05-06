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
  class AWS_CODEBUILD_API ImportSourceCredentialsRequest : public CodeBuildRequest
  {
  public:
    ImportSourceCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSourceCredentials"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline ImportSourceCredentialsRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline ImportSourceCredentialsRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p> The Bitbucket username when the <code>authType</code> is BASIC_AUTH. This
     * parameter is not valid for other types of source providers or connections. </p>
     */
    inline ImportSourceCredentialsRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline ImportSourceCredentialsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline ImportSourceCredentialsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p> For GitHub or GitHub Enterprise, this is the personal access token. For
     * Bitbucket, this is the app password. </p>
     */
    inline ImportSourceCredentialsRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p> The source provider used for this project. </p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }

    /**
     * <p> The source provider used for this project. </p>
     */
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }

    /**
     * <p> The source provider used for this project. </p>
     */
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    /**
     * <p> The source provider used for this project. </p>
     */
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    /**
     * <p> The source provider used for this project. </p>
     */
    inline ImportSourceCredentialsRequest& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    /**
     * <p> The source provider used for this project. </p>
     */
    inline ImportSourceCredentialsRequest& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline void SetAuthType(const AuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline void SetAuthType(AuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline ImportSourceCredentialsRequest& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p> The type of authentication used to connect to a GitHub, GitHub Enterprise,
     * or Bitbucket repository. An OAUTH connection is not supported by the API and
     * must be created using the AWS CodeBuild console. </p>
     */
    inline ImportSourceCredentialsRequest& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet;

    AuthType m_authType;
    bool m_authTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
