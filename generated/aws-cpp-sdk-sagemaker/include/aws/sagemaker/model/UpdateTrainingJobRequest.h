/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProfilerConfigForUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProfilerRuleConfiguration.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateTrainingJobRequest : public SageMakerRequest
  {
  public:
    UpdateTrainingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrainingJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline UpdateTrainingJobRequest& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline UpdateTrainingJobRequest& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline UpdateTrainingJobRequest& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline const ProfilerConfigForUpdate& GetProfilerConfig() const{ return m_profilerConfig; }

    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline bool ProfilerConfigHasBeenSet() const { return m_profilerConfigHasBeenSet; }

    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline void SetProfilerConfig(const ProfilerConfigForUpdate& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = value; }

    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline void SetProfilerConfig(ProfilerConfigForUpdate&& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = std::move(value); }

    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline UpdateTrainingJobRequest& WithProfilerConfig(const ProfilerConfigForUpdate& value) { SetProfilerConfig(value); return *this;}

    /**
     * <p>Configuration information for Debugger system monitoring, framework
     * profiling, and storage paths.</p>
     */
    inline UpdateTrainingJobRequest& WithProfilerConfig(ProfilerConfigForUpdate&& value) { SetProfilerConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline const Aws::Vector<ProfilerRuleConfiguration>& GetProfilerRuleConfigurations() const{ return m_profilerRuleConfigurations; }

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline bool ProfilerRuleConfigurationsHasBeenSet() const { return m_profilerRuleConfigurationsHasBeenSet; }

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline void SetProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = value; }

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline void SetProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = std::move(value); }

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline UpdateTrainingJobRequest& WithProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { SetProfilerRuleConfigurations(value); return *this;}

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline UpdateTrainingJobRequest& WithProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { SetProfilerRuleConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline UpdateTrainingJobRequest& AddProfilerRuleConfigurations(const ProfilerRuleConfiguration& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for Debugger rules for profiling system and
     * framework metrics.</p>
     */
    inline UpdateTrainingJobRequest& AddProfilerRuleConfigurations(ProfilerRuleConfiguration&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet;

    ProfilerConfigForUpdate m_profilerConfig;
    bool m_profilerConfigHasBeenSet;

    Aws::Vector<ProfilerRuleConfiguration> m_profilerRuleConfigurations;
    bool m_profilerRuleConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
