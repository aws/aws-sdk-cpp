/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ArtifactStore.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/StageDeclaration.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the structure of actions and stages to be performed in the
   * pipeline.</p>
   */
  class AWS_CODEPIPELINE_API PipelineDeclaration
  {
  public:
    PipelineDeclaration();
    PipelineDeclaration(const Aws::Utils::Json::JsonValue& jsonValue);
    PipelineDeclaration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline PipelineDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline PipelineDeclaration& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the action to be performed.</p>
     */
    inline PipelineDeclaration& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline PipelineDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline PipelineDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for AWS CodePipeline to use to either perform
     * actions with no actionRoleArn, or to use to assume roles for actions with an
     * actionRoleArn.</p>
     */
    inline PipelineDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    
    inline const ArtifactStore& GetArtifactStore() const{ return m_artifactStore; }

    
    inline void SetArtifactStore(const ArtifactStore& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = value; }

    
    inline void SetArtifactStore(ArtifactStore&& value) { m_artifactStoreHasBeenSet = true; m_artifactStore = value; }

    
    inline PipelineDeclaration& WithArtifactStore(const ArtifactStore& value) { SetArtifactStore(value); return *this;}

    
    inline PipelineDeclaration& WithArtifactStore(ArtifactStore&& value) { SetArtifactStore(value); return *this;}

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline const Aws::Vector<StageDeclaration>& GetStages() const{ return m_stages; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline void SetStages(const Aws::Vector<StageDeclaration>& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline void SetStages(Aws::Vector<StageDeclaration>&& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& WithStages(const Aws::Vector<StageDeclaration>& value) { SetStages(value); return *this;}

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& WithStages(Aws::Vector<StageDeclaration>&& value) { SetStages(value); return *this;}

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& AddStages(const StageDeclaration& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>The stage in which to perform the action.</p>
     */
    inline PipelineDeclaration& AddStages(StageDeclaration&& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is automatically incremented when a pipeline is
     * updated.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is automatically incremented when a pipeline is
     * updated.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline. A new pipeline always has a version
     * number of 1. This number is automatically incremented when a pipeline is
     * updated.</p>
     */
    inline PipelineDeclaration& WithVersion(int value) { SetVersion(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
    ArtifactStore m_artifactStore;
    bool m_artifactStoreHasBeenSet;
    Aws::Vector<StageDeclaration> m_stages;
    bool m_stagesHasBeenSet;
    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
