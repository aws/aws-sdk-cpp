/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ArtifactStore.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ExecutionMode.h>
#include <aws/codepipeline/model/PipelineType.h>
#include <aws/codepipeline/model/StageDeclaration.h>
#include <aws/codepipeline/model/PipelineVariableDeclaration.h>
#include <aws/codepipeline/model/PipelineTriggerDeclaration.h>
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
   * <p>Represents the structure of actions and stages to be performed in the
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineDeclaration">AWS
   * API Reference</a></p>
   */
  class PipelineDeclaration
  {
  public:
    AWS_CODEPIPELINE_API PipelineDeclaration();
    AWS_CODEPIPELINE_API PipelineDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PipelineDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PipelineDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PipelineDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline PipelineDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PipelineDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PipelineDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline const ArtifactStore& GetArtifactStore() const{ return m_artifactStore; }
    inline bool ArtifactStoreHasBeenSet() const { return m_artifactStoreHasBeenSet; }
    inline void SetArtifactStore(const ArtifactStore& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = value; }
    inline void SetArtifactStore(ArtifactStore&& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = std::move(value); }
    inline PipelineDeclaration& WithArtifactStore(const ArtifactStore& value) { SetArtifactStore(value); return *this;}
    inline PipelineDeclaration& WithArtifactStore(ArtifactStore&& value) { SetArtifactStore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding
     * Amazon Web Services Regions. There must be an artifact store for the pipeline
     * Region and for each cross-region action in the pipeline.</p>  <p>You must
     * include either <code>artifactStore</code> or <code>artifactStores</code> in your
     * pipeline, but you cannot use both. If you create a cross-region action in your
     * pipeline, you must use <code>artifactStores</code>.</p> 
     */
    inline const Aws::Map<Aws::String, ArtifactStore>& GetArtifactStores() const{ return m_artifactStores; }
    inline bool ArtifactStoresHasBeenSet() const { return m_artifactStoresHasBeenSet; }
    inline void SetArtifactStores(const Aws::Map<Aws::String, ArtifactStore>& value) { m_artifactStoresHasBeenSet = true; m_artifactStores = value; }
    inline void SetArtifactStores(Aws::Map<Aws::String, ArtifactStore>&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores = std::move(value); }
    inline PipelineDeclaration& WithArtifactStores(const Aws::Map<Aws::String, ArtifactStore>& value) { SetArtifactStores(value); return *this;}
    inline PipelineDeclaration& WithArtifactStores(Aws::Map<Aws::String, ArtifactStore>&& value) { SetArtifactStores(std::move(value)); return *this;}
    inline PipelineDeclaration& AddArtifactStores(const Aws::String& key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, value); return *this; }
    inline PipelineDeclaration& AddArtifactStores(Aws::String&& key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(std::move(key), value); return *this; }
    inline PipelineDeclaration& AddArtifactStores(const Aws::String& key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, std::move(value)); return *this; }
    inline PipelineDeclaration& AddArtifactStores(Aws::String&& key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(std::move(key), std::move(value)); return *this; }
    inline PipelineDeclaration& AddArtifactStores(const char* key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, std::move(value)); return *this; }
    inline PipelineDeclaration& AddArtifactStores(const char* key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline const Aws::Vector<StageDeclaration>& GetStages() const{ return m_stages; }
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
    inline void SetStages(const Aws::Vector<StageDeclaration>& value) { m_stagesHasBeenSet = true; m_stages = value; }
    inline void SetStages(Aws::Vector<StageDeclaration>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }
    inline PipelineDeclaration& WithStages(const Aws::Vector<StageDeclaration>& value) { SetStages(value); return *this;}
    inline PipelineDeclaration& WithStages(Aws::Vector<StageDeclaration>&& value) { SetStages(std::move(value)); return *this;}
    inline PipelineDeclaration& AddStages(const StageDeclaration& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }
    inline PipelineDeclaration& AddStages(StageDeclaration&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is incremented when a pipeline is updated.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline PipelineDeclaration& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline const ExecutionMode& GetExecutionMode() const{ return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(const ExecutionMode& value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline void SetExecutionMode(ExecutionMode&& value) { m_executionModeHasBeenSet = true; m_executionMode = std::move(value); }
    inline PipelineDeclaration& WithExecutionMode(const ExecutionMode& value) { SetExecutionMode(value); return *this;}
    inline PipelineDeclaration& WithExecutionMode(ExecutionMode&& value) { SetExecutionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline const PipelineType& GetPipelineType() const{ return m_pipelineType; }
    inline bool PipelineTypeHasBeenSet() const { return m_pipelineTypeHasBeenSet; }
    inline void SetPipelineType(const PipelineType& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = value; }
    inline void SetPipelineType(PipelineType&& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = std::move(value); }
    inline PipelineDeclaration& WithPipelineType(const PipelineType& value) { SetPipelineType(value); return *this;}
    inline PipelineDeclaration& WithPipelineType(PipelineType&& value) { SetPipelineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that defines the pipeline variables for a pipeline resource. Variable
     * names can have alphanumeric and underscore characters, and the values must match
     * <code>[A-Za-z0-9@\-_]+</code>.</p>
     */
    inline const Aws::Vector<PipelineVariableDeclaration>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<PipelineVariableDeclaration>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<PipelineVariableDeclaration>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline PipelineDeclaration& WithVariables(const Aws::Vector<PipelineVariableDeclaration>& value) { SetVariables(value); return *this;}
    inline PipelineDeclaration& WithVariables(Aws::Vector<PipelineVariableDeclaration>&& value) { SetVariables(std::move(value)); return *this;}
    inline PipelineDeclaration& AddVariables(const PipelineVariableDeclaration& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline PipelineDeclaration& AddVariables(PipelineVariableDeclaration&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trigger configuration specifying a type of event, such as Git tags, that
     * starts the pipeline.</p>  <p>When a trigger configuration is specified,
     * default change detection for repository and branch commits is disabled.</p>
     * 
     */
    inline const Aws::Vector<PipelineTriggerDeclaration>& GetTriggers() const{ return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    inline void SetTriggers(const Aws::Vector<PipelineTriggerDeclaration>& value) { m_triggersHasBeenSet = true; m_triggers = value; }
    inline void SetTriggers(Aws::Vector<PipelineTriggerDeclaration>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }
    inline PipelineDeclaration& WithTriggers(const Aws::Vector<PipelineTriggerDeclaration>& value) { SetTriggers(value); return *this;}
    inline PipelineDeclaration& WithTriggers(Aws::Vector<PipelineTriggerDeclaration>&& value) { SetTriggers(std::move(value)); return *this;}
    inline PipelineDeclaration& AddTriggers(const PipelineTriggerDeclaration& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }
    inline PipelineDeclaration& AddTriggers(PipelineTriggerDeclaration&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ArtifactStore m_artifactStore;
    bool m_artifactStoreHasBeenSet = false;

    Aws::Map<Aws::String, ArtifactStore> m_artifactStores;
    bool m_artifactStoresHasBeenSet = false;

    Aws::Vector<StageDeclaration> m_stages;
    bool m_stagesHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    ExecutionMode m_executionMode;
    bool m_executionModeHasBeenSet = false;

    PipelineType m_pipelineType;
    bool m_pipelineTypeHasBeenSet = false;

    Aws::Vector<PipelineVariableDeclaration> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::Vector<PipelineTriggerDeclaration> m_triggers;
    bool m_triggersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
