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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/codepipeline/model/ActionConfiguration.h>
#include <aws/codepipeline/model/PipelineContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/AWSSessionCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/EncryptionKey.h>
#include <aws/codepipeline/model/Artifact.h>
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
   * <p>Represents information about the job data for a partner action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ThirdPartyJobData">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ThirdPartyJobData
  {
  public:
    ThirdPartyJobData();
    ThirdPartyJobData(Aws::Utils::Json::JsonView jsonValue);
    ThirdPartyJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents information about an action type.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::move(value); }

    /**
     * <p>Represents information about an action type.</p>
     */
    inline ThirdPartyJobData& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}

    /**
     * <p>Represents information about an action type.</p>
     */
    inline ThirdPartyJobData& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(std::move(value)); return *this;}


    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline const ActionConfiguration& GetActionConfiguration() const{ return m_actionConfiguration; }

    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline bool ActionConfigurationHasBeenSet() const { return m_actionConfigurationHasBeenSet; }

    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline void SetActionConfiguration(const ActionConfiguration& value) { m_actionConfigurationHasBeenSet = true; m_actionConfiguration = value; }

    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline void SetActionConfiguration(ActionConfiguration&& value) { m_actionConfigurationHasBeenSet = true; m_actionConfiguration = std::move(value); }

    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline ThirdPartyJobData& WithActionConfiguration(const ActionConfiguration& value) { SetActionConfiguration(value); return *this;}

    /**
     * <p>Represents information about an action configuration.</p>
     */
    inline ThirdPartyJobData& WithActionConfiguration(ActionConfiguration&& value) { SetActionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline const PipelineContext& GetPipelineContext() const{ return m_pipelineContext; }

    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline bool PipelineContextHasBeenSet() const { return m_pipelineContextHasBeenSet; }

    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline void SetPipelineContext(const PipelineContext& value) { m_pipelineContextHasBeenSet = true; m_pipelineContext = value; }

    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline void SetPipelineContext(PipelineContext&& value) { m_pipelineContextHasBeenSet = true; m_pipelineContext = std::move(value); }

    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline ThirdPartyJobData& WithPipelineContext(const PipelineContext& value) { SetPipelineContext(value); return *this;}

    /**
     * <p>Represents information about a pipeline to a job worker.</p> <note> <p>Does
     * not include <code>pipelineArn</code> and <code>pipelineExecutionId</code> for
     * ThirdParty jobs.</p> </note>
     */
    inline ThirdPartyJobData& WithPipelineContext(PipelineContext&& value) { SetPipelineContext(std::move(value)); return *this;}


    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline const Aws::Vector<Artifact>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline void SetInputArtifacts(const Aws::Vector<Artifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline void SetInputArtifacts(Aws::Vector<Artifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline ThirdPartyJobData& WithInputArtifacts(const Aws::Vector<Artifact>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline ThirdPartyJobData& WithInputArtifacts(Aws::Vector<Artifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline ThirdPartyJobData& AddInputArtifacts(const Artifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }

    /**
     * <p>The name of the artifact that will be worked upon by the action, if any. This
     * name might be system-generated, such as "MyApp", or might be defined by the user
     * when the action is created. The input artifact name must match the name of an
     * output artifact generated by an action in an earlier action or stage of the
     * pipeline.</p>
     */
    inline ThirdPartyJobData& AddInputArtifacts(Artifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline const Aws::Vector<Artifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline void SetOutputArtifacts(const Aws::Vector<Artifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline void SetOutputArtifacts(Aws::Vector<Artifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline ThirdPartyJobData& WithOutputArtifacts(const Aws::Vector<Artifact>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline ThirdPartyJobData& WithOutputArtifacts(Aws::Vector<Artifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline ThirdPartyJobData& AddOutputArtifacts(const Artifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }

    /**
     * <p>The name of the artifact that will be the result of the action, if any. This
     * name might be system-generated, such as "MyBuiltApp", or might be defined by the
     * user when the action is created.</p>
     */
    inline ThirdPartyJobData& AddOutputArtifacts(Artifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline const AWSSessionCredentials& GetArtifactCredentials() const{ return m_artifactCredentials; }

    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline bool ArtifactCredentialsHasBeenSet() const { return m_artifactCredentialsHasBeenSet; }

    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline void SetArtifactCredentials(const AWSSessionCredentials& value) { m_artifactCredentialsHasBeenSet = true; m_artifactCredentials = value; }

    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline void SetArtifactCredentials(AWSSessionCredentials&& value) { m_artifactCredentialsHasBeenSet = true; m_artifactCredentials = std::move(value); }

    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline ThirdPartyJobData& WithArtifactCredentials(const AWSSessionCredentials& value) { SetArtifactCredentials(value); return *this;}

    /**
     * <p>Represents an AWS session credentials object. These credentials are temporary
     * credentials that are issued by AWS Secure Token Service (STS). They can be used
     * to access input and output artifacts in the Amazon S3 bucket used to store
     * artifact for the pipeline in AWS CodePipeline. </p>
     */
    inline ThirdPartyJobData& WithArtifactCredentials(AWSSessionCredentials&& value) { SetArtifactCredentials(std::move(value)); return *this;}


    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::move(value); }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline ThirdPartyJobData& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline ThirdPartyJobData& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}

    /**
     * <p>A system-generated token, such as a AWS CodeDeploy deployment ID, that a job
     * requires in order to continue the job asynchronously.</p>
     */
    inline ThirdPartyJobData& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}


    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline ThirdPartyJobData& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The encryption key used to encrypt and decrypt data in the artifact store for
     * the pipeline, such as an AWS Key Management Service (AWS KMS) key. This is
     * optional and might not be present.</p>
     */
    inline ThirdPartyJobData& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}

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
