/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains information that defines how the CodeBuild build project reports the
   * build status to the source provider. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildStatusConfig">AWS
   * API Reference</a></p>
   */
  class BuildStatusConfig
  {
  public:
    AWS_CODEBUILD_API BuildStatusConfig();
    AWS_CODEBUILD_API BuildStatusConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildStatusConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>Specifies the context of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>name</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>context</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithContext(const char* value) { SetContext(value); return *this;}


    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline const Aws::String& GetTargetUrl() const{ return m_targetUrl; }

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetTargetUrl(const Aws::String& value) { m_targetUrlHasBeenSet = true; m_targetUrl = value; }

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetTargetUrl(Aws::String&& value) { m_targetUrlHasBeenSet = true; m_targetUrl = std::move(value); }

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline void SetTargetUrl(const char* value) { m_targetUrlHasBeenSet = true; m_targetUrl.assign(value); }

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithTargetUrl(const Aws::String& value) { SetTargetUrl(value); return *this;}

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithTargetUrl(Aws::String&& value) { SetTargetUrl(std::move(value)); return *this;}

    /**
     * <p>Specifies the target url of the build status CodeBuild sends to the source
     * provider. The usage of this parameter depends on the source provider.</p> <dl>
     * <dt>Bitbucket</dt> <dd> <p>This parameter is used for the <code>url</code>
     * parameter in the Bitbucket commit status. For more information, see <a
     * href="https://developer.atlassian.com/bitbucket/api/2/reference/resource/repositories/%7Bworkspace%7D/%7Brepo_slug%7D/commit/%7Bnode%7D/statuses/build">build</a>
     * in the Bitbucket API documentation.</p> </dd> <dt>GitHub/GitHub Enterprise
     * Server</dt> <dd> <p>This parameter is used for the <code>target_url</code>
     * parameter in the GitHub commit status. For more information, see <a
     * href="https://developer.github.com/v3/repos/statuses/#create-a-commit-status">Create
     * a commit status</a> in the GitHub developer guide.</p> </dd> </dl>
     */
    inline BuildStatusConfig& WithTargetUrl(const char* value) { SetTargetUrl(value); return *this;}

  private:

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_targetUrl;
    bool m_targetUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
