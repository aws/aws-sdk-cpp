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
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/codepipeline/model/ActionConfiguration.h>
#include <aws/codepipeline/model/PipelineContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/AWSSessionCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EncryptionKey.h>
#include <aws/codepipeline/model/Artifact.h>

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
   * <p>Represents additional information about a job required for a job worker to
   * complete the job.</p>
   */
  class AWS_CODEPIPELINE_API JobData
  {
  public:
    JobData();
    JobData(const Aws::Utils::Json::JsonValue& jsonValue);
    JobData& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    
    inline JobData& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    
    inline JobData& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(value); return *this;}

    
    inline const ActionConfiguration& GetActionConfiguration() const{ return m_actionConfiguration; }

    
    inline void SetActionConfiguration(const ActionConfiguration& value) { m_actionConfigurationHasBeenSet = true; m_actionConfiguration = value; }

    
    inline void SetActionConfiguration(ActionConfiguration&& value) { m_actionConfigurationHasBeenSet = true; m_actionConfiguration = value; }

    
    inline JobData& WithActionConfiguration(const ActionConfiguration& value) { SetActionConfiguration(value); return *this;}

    
    inline JobData& WithActionConfiguration(ActionConfiguration&& value) { SetActionConfiguration(value); return *this;}

    
    inline const PipelineContext& GetPipelineContext() const{ return m_pipelineContext; }

    
    inline void SetPipelineContext(const PipelineContext& value) { m_pipelineContextHasBeenSet = true; m_pipelineContext = value; }

    
    inline void SetPipelineContext(PipelineContext&& value) { m_pipelineContextHasBeenSet = true; m_pipelineContext = value; }

    
    inline JobData& WithPipelineContext(const PipelineContext& value) { SetPipelineContext(value); return *this;}

    
    inline JobData& WithPipelineContext(PipelineContext&& value) { SetPipelineContext(value); return *this;}

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline const Aws::Vector<Artifact>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline void SetInputArtifacts(const Aws::Vector<Artifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline void SetInputArtifacts(Aws::Vector<Artifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline JobData& WithInputArtifacts(const Aws::Vector<Artifact>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline JobData& WithInputArtifacts(Aws::Vector<Artifact>&& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline JobData& AddInputArtifacts(const Artifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }

    /**
     * <p>The artifact supplied to the job.</p>
     */
    inline JobData& AddInputArtifacts(Artifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }

    /**
     * <p>The output of the job.</p>
     */
    inline const Aws::Vector<Artifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>The output of the job.</p>
     */
    inline void SetOutputArtifacts(const Aws::Vector<Artifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>The output of the job.</p>
     */
    inline void SetOutputArtifacts(Aws::Vector<Artifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>The output of the job.</p>
     */
    inline JobData& WithOutputArtifacts(const Aws::Vector<Artifact>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>The output of the job.</p>
     */
    inline JobData& WithOutputArtifacts(Aws::Vector<Artifact>&& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>The output of the job.</p>
     */
    inline JobData& AddOutputArtifacts(const Artifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }

    /**
     * <p>The output of the job.</p>
     */
    inline JobData& AddOutputArtifacts(Artifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }

    
    inline const AWSSessionCredentials& GetArtifactCredentials() const{ return m_artifactCredentials; }

    
    inline void SetArtifactCredentials(const AWSSessionCredentials& value) { m_artifactCredentialsHasBeenSet = true; m_artifactCredentials = value; }

    
    inline void SetArtifactCredentials(AWSSessionCredentials&& value) { m_artifactCredentialsHasBeenSet = true; m_artifactCredentials = value; }

    
    inline JobData& WithArtifactCredentials(const AWSSessionCredentials& value) { SetArtifactCredentials(value); return *this;}

    
    inline JobData& WithArtifactCredentials(AWSSessionCredentials&& value) { SetArtifactCredentials(value); return *this;}

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline JobData& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline JobData& WithContinuationToken(Aws::String&& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline JobData& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}

    
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    
    inline JobData& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    
    inline JobData& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(value); return *this;}

  private:
    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet;
    ActionConfiguration m_actionConfiguration;
    bool m_actionConfigurationHasBeenSet;
    PipelineContext m_pipelineContext;
    bool m_pipelineContextHasBeenSet;
    Aws::Vector<Artifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet;
    Aws::Vector<Artifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet;
    AWSSessionCredentials m_artifactCredentials;
    bool m_artifactCredentialsHasBeenSet;
    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet;
    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
