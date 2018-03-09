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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PresignedUrlConfig.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobExecutionsRolloutConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateJobRequest : public IoTRequest
  {
  public:
    CreateJobRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline CreateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline CreateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>A job identifier which must be unique for your AWS account. We recommend
     * using a UUID. Alpha-numeric characters, "-" and "_" are valid for use here.</p>
     */
    inline CreateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of things and thing groups to which the job should be sent.</p>
     */
    inline CreateJobRequest& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>An S3 link to the job document.</p>
     */
    inline const Aws::String& GetDocumentSource() const{ return m_documentSource; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const Aws::String& value) { m_documentSourceHasBeenSet = true; m_documentSource = value; }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(Aws::String&& value) { m_documentSourceHasBeenSet = true; m_documentSource = std::move(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline void SetDocumentSource(const char* value) { m_documentSourceHasBeenSet = true; m_documentSource.assign(value); }

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline CreateJobRequest& WithDocumentSource(const Aws::String& value) { SetDocumentSource(value); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline CreateJobRequest& WithDocumentSource(Aws::String&& value) { SetDocumentSource(std::move(value)); return *this;}

    /**
     * <p>An S3 link to the job document.</p>
     */
    inline CreateJobRequest& WithDocumentSource(const char* value) { SetDocumentSource(value); return *this;}


    /**
     * <p>The job document.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The job document.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The job document.</p>
     */
    inline CreateJobRequest& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The job document.</p>
     */
    inline CreateJobRequest& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The job document.</p>
     */
    inline CreateJobRequest& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A short text description of the job.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline const PresignedUrlConfig& GetPresignedUrlConfig() const{ return m_presignedUrlConfig; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(const PresignedUrlConfig& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = value; }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline void SetPresignedUrlConfig(PresignedUrlConfig&& value) { m_presignedUrlConfigHasBeenSet = true; m_presignedUrlConfig = std::move(value); }

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline CreateJobRequest& WithPresignedUrlConfig(const PresignedUrlConfig& value) { SetPresignedUrlConfig(value); return *this;}

    /**
     * <p>Configuration information for pre-signed S3 URLs.</p>
     */
    inline CreateJobRequest& WithPresignedUrlConfig(PresignedUrlConfig&& value) { SetPresignedUrlConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>
     */
    inline CreateJobRequest& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>
     */
    inline CreateJobRequest& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline const JobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRolloutConfig(const JobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>Allows you to create a staged rollout of the job.</p>
     */
    inline CreateJobRequest& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>Parameters for the job document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDocumentParameters() const{ return m_documentParameters; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline void SetDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_documentParametersHasBeenSet = true; m_documentParameters = value; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline void SetDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::move(value); }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& WithDocumentParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetDocumentParameters(value); return *this;}

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& WithDocumentParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetDocumentParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(const Aws::String& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, const Aws::String& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(const Aws::String& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(const char* key, Aws::String&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(Aws::String&& key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameters for the job document.</p>
     */
    inline CreateJobRequest& AddDocumentParameters(const char* key, const char* value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet;

    Aws::String m_documentSource;
    bool m_documentSourceHasBeenSet;

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    PresignedUrlConfig m_presignedUrlConfig;
    bool m_presignedUrlConfigHasBeenSet;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet;

    JobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_documentParameters;
    bool m_documentParametersHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
