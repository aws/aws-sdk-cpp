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
    AWS_CODEBUILD_API BuildStatusConfig() = default;
    AWS_CODEBUILD_API BuildStatusConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildStatusConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    BuildStatusConfig& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetTargetUrl() const { return m_targetUrl; }
    inline bool TargetUrlHasBeenSet() const { return m_targetUrlHasBeenSet; }
    template<typename TargetUrlT = Aws::String>
    void SetTargetUrl(TargetUrlT&& value) { m_targetUrlHasBeenSet = true; m_targetUrl = std::forward<TargetUrlT>(value); }
    template<typename TargetUrlT = Aws::String>
    BuildStatusConfig& WithTargetUrl(TargetUrlT&& value) { SetTargetUrl(std::forward<TargetUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_targetUrl;
    bool m_targetUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
