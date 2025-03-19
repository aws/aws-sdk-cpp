/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineTriggerProviderType.h>
#include <aws/codepipeline/model/GitConfiguration.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the specified trigger configuration, such as the
   * filter criteria and the source stage for the action that contains the
   * trigger.</p>  <p>This is only supported for the
   * <code>CodeStarSourceConnection</code> action type.</p>   <p>When a
   * trigger configuration is specified, default change detection for repository and
   * branch commits is disabled.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineTriggerDeclaration">AWS
   * API Reference</a></p>
   */
  class PipelineTriggerDeclaration
  {
  public:
    AWS_CODEPIPELINE_API PipelineTriggerDeclaration() = default;
    AWS_CODEPIPELINE_API PipelineTriggerDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineTriggerDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source provider for the event, such as connections configured for a
     * repository with Git tags, for the specified trigger configuration.</p>
     */
    inline PipelineTriggerProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(PipelineTriggerProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline PipelineTriggerDeclaration& WithProviderType(PipelineTriggerProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the filter criteria and the source stage for the repository event
     * that starts the pipeline, such as Git tags.</p>
     */
    inline const GitConfiguration& GetGitConfiguration() const { return m_gitConfiguration; }
    inline bool GitConfigurationHasBeenSet() const { return m_gitConfigurationHasBeenSet; }
    template<typename GitConfigurationT = GitConfiguration>
    void SetGitConfiguration(GitConfigurationT&& value) { m_gitConfigurationHasBeenSet = true; m_gitConfiguration = std::forward<GitConfigurationT>(value); }
    template<typename GitConfigurationT = GitConfiguration>
    PipelineTriggerDeclaration& WithGitConfiguration(GitConfigurationT&& value) { SetGitConfiguration(std::forward<GitConfigurationT>(value)); return *this;}
    ///@}
  private:

    PipelineTriggerProviderType m_providerType{PipelineTriggerProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    GitConfiguration m_gitConfiguration;
    bool m_gitConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
