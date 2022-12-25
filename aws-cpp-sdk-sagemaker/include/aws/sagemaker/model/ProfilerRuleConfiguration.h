/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration information for profiling rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProfilerRuleConfiguration">AWS
   * API Reference</a></p>
   */
  class ProfilerRuleConfiguration
  {
  public:
    AWS_SAGEMAKER_API ProfilerRuleConfiguration();
    AWS_SAGEMAKER_API ProfilerRuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProfilerRuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline const Aws::String& GetRuleConfigurationName() const{ return m_ruleConfigurationName; }

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline bool RuleConfigurationNameHasBeenSet() const { return m_ruleConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline void SetRuleConfigurationName(const Aws::String& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = value; }

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline void SetRuleConfigurationName(Aws::String&& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = std::move(value); }

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline void SetRuleConfigurationName(const char* value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName.assign(value); }

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleConfigurationName(const Aws::String& value) { SetRuleConfigurationName(value); return *this;}

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleConfigurationName(Aws::String&& value) { SetRuleConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleConfigurationName(const char* value) { SetRuleConfigurationName(value); return *this;}


    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline ProfilerRuleConfiguration& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline ProfilerRuleConfiguration& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline ProfilerRuleConfiguration& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline ProfilerRuleConfiguration& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline ProfilerRuleConfiguration& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline ProfilerRuleConfiguration& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline const Aws::String& GetRuleEvaluatorImage() const{ return m_ruleEvaluatorImage; }

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline bool RuleEvaluatorImageHasBeenSet() const { return m_ruleEvaluatorImageHasBeenSet; }

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline void SetRuleEvaluatorImage(const Aws::String& value) { m_ruleEvaluatorImageHasBeenSet = true; m_ruleEvaluatorImage = value; }

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline void SetRuleEvaluatorImage(Aws::String&& value) { m_ruleEvaluatorImageHasBeenSet = true; m_ruleEvaluatorImage = std::move(value); }

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline void SetRuleEvaluatorImage(const char* value) { m_ruleEvaluatorImageHasBeenSet = true; m_ruleEvaluatorImage.assign(value); }

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleEvaluatorImage(const Aws::String& value) { SetRuleEvaluatorImage(value); return *this;}

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleEvaluatorImage(Aws::String&& value) { SetRuleEvaluatorImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleEvaluatorImage(const char* value) { SetRuleEvaluatorImage(value); return *this;}


    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline const ProcessingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline void SetInstanceType(const ProcessingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline void SetInstanceType(ProcessingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline ProfilerRuleConfiguration& WithInstanceType(const ProcessingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline ProfilerRuleConfiguration& WithInstanceType(ProcessingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The size, in GB, of the ML storage volume attached to the processing
     * instance.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to the processing
     * instance.</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to the processing
     * instance.</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size, in GB, of the ML storage volume attached to the processing
     * instance.</p>
     */
    inline ProfilerRuleConfiguration& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuleParameters() const{ return m_ruleParameters; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline bool RuleParametersHasBeenSet() const { return m_ruleParametersHasBeenSet; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline void SetRuleParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters = value; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline void SetRuleParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters = std::move(value); }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRuleParameters(value); return *this;}

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& WithRuleParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRuleParameters(std::move(value)); return *this;}

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(const Aws::String& key, const Aws::String& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(key, value); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(Aws::String&& key, const Aws::String& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(const Aws::String& key, Aws::String&& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(Aws::String&& key, Aws::String&& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(const char* key, Aws::String&& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(Aws::String&& key, const char* value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline ProfilerRuleConfiguration& AddRuleParameters(const char* key, const char* value) { m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_ruleConfigurationName;
    bool m_ruleConfigurationNameHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_ruleEvaluatorImage;
    bool m_ruleEvaluatorImageHasBeenSet = false;

    ProcessingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_ruleParameters;
    bool m_ruleParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
