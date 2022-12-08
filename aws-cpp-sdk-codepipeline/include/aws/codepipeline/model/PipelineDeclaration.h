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
#include <aws/codepipeline/model/StageDeclaration.h>
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


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineDeclaration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline PipelineDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline PipelineDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no <code>actionRoleArn</code>, or to use to assume roles for
     * actions with an <code>actionRoleArn</code>.</p>
     */
    inline PipelineDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline const ArtifactStore& GetArtifactStore() const{ return m_artifactStore; }

    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline bool ArtifactStoreHasBeenSet() const { return m_artifactStoreHasBeenSet; }

    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline void SetArtifactStore(const ArtifactStore& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = value; }

    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline void SetArtifactStore(ArtifactStore&& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = std::move(value); }

    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& WithArtifactStore(const ArtifactStore& value) { SetArtifactStore(value); return *this;}

    /**
     * <p>Represents information about the S3 bucket where artifacts are stored for the
     * pipeline.</p>  <p>You must include either <code>artifactStore</code> or
     * <code>artifactStores</code> in your pipeline, but you cannot use both. If you
     * create a cross-region action in your pipeline, you must use
     * <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& WithArtifactStore(ArtifactStore&& value) { SetArtifactStore(std::move(value)); return *this;}


    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline const Aws::Map<Aws::String, ArtifactStore>& GetArtifactStores() const{ return m_artifactStores; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline bool ArtifactStoresHasBeenSet() const { return m_artifactStoresHasBeenSet; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline void SetArtifactStores(const Aws::Map<Aws::String, ArtifactStore>& value) { m_artifactStoresHasBeenSet = true; m_artifactStores = value; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline void SetArtifactStores(Aws::Map<Aws::String, ArtifactStore>&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores = std::move(value); }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& WithArtifactStores(const Aws::Map<Aws::String, ArtifactStore>& value) { SetArtifactStores(value); return *this;}

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& WithArtifactStores(Aws::Map<Aws::String, ArtifactStore>&& value) { SetArtifactStores(std::move(value)); return *this;}

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(const Aws::String& key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, value); return *this; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(Aws::String&& key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(const Aws::String& key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(Aws::String&& key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(const char* key, ArtifactStore&& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of <code>artifactStore</code> objects and their corresponding AWS
     * Regions. There must be an artifact store for the pipeline Region and for each
     * cross-region action in the pipeline.</p>  <p>You must include either
     * <code>artifactStore</code> or <code>artifactStores</code> in your pipeline, but
     * you cannot use both. If you create a cross-region action in your pipeline, you
     * must use <code>artifactStores</code>.</p> 
     */
    inline PipelineDeclaration& AddArtifactStores(const char* key, const ArtifactStore& value) { m_artifactStoresHasBeenSet = true; m_artifactStores.emplace(key, value); return *this; }


    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline const Aws::Vector<StageDeclaration>& GetStages() const{ return m_stages; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline void SetStages(const Aws::Vector<StageDeclaration>& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline void SetStages(Aws::Vector<StageDeclaration>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& WithStages(const Aws::Vector<StageDeclaration>& value) { SetStages(value); return *this;}

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& WithStages(Aws::Vector<StageDeclaration>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& AddStages(const StageDeclaration& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& AddStages(StageDeclaration&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }


    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is incremented when a pipeline is updated.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is incremented when a pipeline is updated.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is incremented when a pipeline is updated.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is incremented when a pipeline is updated.</p>
     */
    inline PipelineDeclaration& WithVersion(int value) { SetVersion(value); return *this;}

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
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
