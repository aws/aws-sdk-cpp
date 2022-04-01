/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobDriver.h>
#include <aws/emr-containers/model/ConfigurationOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class AWS_EMRCONTAINERS_API StartJobRunRequest : public EMRContainersRequest
  {
  public:
    StartJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the job run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job run.</p>
     */
    inline StartJobRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job run.</p>
     */
    inline StartJobRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job run.</p>
     */
    inline StartJobRunRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = value; }

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::move(value); }

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId.assign(value); }

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline StartJobRunRequest& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline StartJobRunRequest& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline StartJobRunRequest& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}


    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline StartJobRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline StartJobRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client idempotency token of the job run request. </p>
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
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline StartJobRunRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline StartJobRunRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline StartJobRunRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


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
     * <p>The tags assigned to job runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline StartJobRunRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
