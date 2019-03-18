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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ServerType.h>
#include <aws/codebuild/model/AuthType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about the credentials for a GitHub, GitHub Enterprise, or
   * Bitbucket repository. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SourceCredentialsInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API SourceCredentialsInfo
  {
  public:
    SourceCredentialsInfo();
    SourceCredentialsInfo(Aws::Utils::Json::JsonView jsonValue);
    SourceCredentialsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline SourceCredentialsInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline SourceCredentialsInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the token. </p>
     */
    inline SourceCredentialsInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline SourceCredentialsInfo& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, or BITBUCKET. </p>
     */
    inline SourceCredentialsInfo& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline void SetAuthType(const AuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline void SetAuthType(AuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline SourceCredentialsInfo& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, or PERSONAL_ACCESS_TOKEN. </p>
     */
    inline SourceCredentialsInfo& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet;

    AuthType m_authType;
    bool m_authTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
