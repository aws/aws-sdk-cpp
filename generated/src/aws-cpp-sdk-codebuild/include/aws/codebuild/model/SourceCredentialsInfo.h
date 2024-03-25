/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Information about the credentials for a GitHub, GitHub Enterprise, GitLab,
   * GitLab Self Managed, or Bitbucket repository. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SourceCredentialsInfo">AWS
   * API Reference</a></p>
   */
  class SourceCredentialsInfo
  {
  public:
    AWS_CODEBUILD_API SourceCredentialsInfo();
    AWS_CODEBUILD_API SourceCredentialsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API SourceCredentialsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline SourceCredentialsInfo& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    /**
     * <p> The type of source provider. The valid options are GITHUB,
     * GITHUB_ENTERPRISE, GITLAB, GITLAB_SELF_MANAGED, or BITBUCKET. </p>
     */
    inline SourceCredentialsInfo& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline void SetAuthType(const AuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline void SetAuthType(AuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline SourceCredentialsInfo& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p> The type of authentication used by the credentials. Valid options are OAUTH,
     * BASIC_AUTH, PERSONAL_ACCESS_TOKEN, or CODECONNECTIONS. </p>
     */
    inline SourceCredentialsInfo& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline SourceCredentialsInfo& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline SourceCredentialsInfo& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The connection ARN if your serverType type is GITLAB or GITLAB_SELF_MANAGED
     * and your authType is CODECONNECTIONS.</p>
     */
    inline SourceCredentialsInfo& WithResource(const char* value) { SetResource(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;

    AuthType m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
