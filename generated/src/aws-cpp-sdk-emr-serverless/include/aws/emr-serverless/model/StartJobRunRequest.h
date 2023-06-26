/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class StartJobRunRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API StartJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline StartJobRunRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline StartJobRunRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline StartJobRunRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline StartJobRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline StartJobRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
     */
    inline StartJobRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline StartJobRunRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline StartJobRunRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline StartJobRunRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The job driver for the job run.</p>
     */
    inline const JobDriver& GetJobDriver() const{ return m_jobDriver; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline void SetJobDriver(const JobDriver& value) { m_jobDriverHasBeenSet = true; m_jobDriver = value; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline void SetJobDriver(JobDriver&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::move(value); }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline StartJobRunRequest& WithJobDriver(const JobDriver& value) { SetJobDriver(value); return *this;}

    /**
     * <p>The job driver for the job run.</p>
     */
    inline StartJobRunRequest& WithJobDriver(JobDriver&& value) { SetJobDriver(std::move(value)); return *this;}


    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }

    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }

    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline void SetConfigurationOverrides(const ConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }

    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline void SetConfigurationOverrides(ConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }

    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline StartJobRunRequest& WithConfigurationOverrides(const ConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}

    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline StartJobRunRequest& WithConfigurationOverrides(ConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline StartJobRunRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The maximum duration for the job run to run. If the job run runs beyond this
     * duration, it will be automatically cancelled.</p>
     */
    inline long long GetExecutionTimeoutMinutes() const{ return m_executionTimeoutMinutes; }

    /**
     * <p>The maximum duration for the job run to run. If the job run runs beyond this
     * duration, it will be automatically cancelled.</p>
     */
    inline bool ExecutionTimeoutMinutesHasBeenSet() const { return m_executionTimeoutMinutesHasBeenSet; }

    /**
     * <p>The maximum duration for the job run to run. If the job run runs beyond this
     * duration, it will be automatically cancelled.</p>
     */
    inline void SetExecutionTimeoutMinutes(long long value) { m_executionTimeoutMinutesHasBeenSet = true; m_executionTimeoutMinutes = value; }

    /**
     * <p>The maximum duration for the job run to run. If the job run runs beyond this
     * duration, it will be automatically cancelled.</p>
     */
    inline StartJobRunRequest& WithExecutionTimeoutMinutes(long long value) { SetExecutionTimeoutMinutes(value); return *this;}


    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline StartJobRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline StartJobRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline StartJobRunRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_executionTimeoutMinutes;
    bool m_executionTimeoutMinutesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
