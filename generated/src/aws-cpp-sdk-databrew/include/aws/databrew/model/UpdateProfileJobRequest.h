/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/databrew/model/ProfileConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/EncryptionMode.h>
#include <aws/databrew/model/LogSubscription.h>
#include <aws/databrew/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/JobSample.h>
#include <aws/databrew/model/ValidationConfiguration.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateProfileJobRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateProfileJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfileJob"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline const ProfileConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline void SetConfiguration(const ProfileConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline void SetConfiguration(ProfileConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline UpdateProfileJobRequest& WithConfiguration(const ProfileConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Configuration for profile jobs. Used to select columns, do evaluations, and
     * override default parameters of evaluations. When configuration is null, the
     * profile job will run with default settings.</p>
     */
    inline UpdateProfileJobRequest& WithConfiguration(ProfileConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline UpdateProfileJobRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline UpdateProfileJobRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an encryption key that is used to protect
     * the job.</p>
     */
    inline UpdateProfileJobRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline UpdateProfileJobRequest& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode for the job, which can be one of the following:</p> <ul>
     * <li> <p> <code>SSE-KMS</code> - Server-side encryption with keys managed by
     * KMS.</p> </li> <li> <p> <code>SSE-S3</code> - Server-side encryption with keys
     * managed by Amazon S3.</p> </li> </ul>
     */
    inline UpdateProfileJobRequest& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The name of the job to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline UpdateProfileJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline UpdateProfileJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job to be updated.</p>
     */
    inline UpdateProfileJobRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline const LogSubscription& GetLogSubscription() const{ return m_logSubscription; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline bool LogSubscriptionHasBeenSet() const { return m_logSubscriptionHasBeenSet; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline void SetLogSubscription(const LogSubscription& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = value; }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline void SetLogSubscription(LogSubscription&& value) { m_logSubscriptionHasBeenSet = true; m_logSubscription = std::move(value); }

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline UpdateProfileJobRequest& WithLogSubscription(const LogSubscription& value) { SetLogSubscription(value); return *this;}

    /**
     * <p>Enables or disables Amazon CloudWatch logging for the job. If logging is
     * enabled, CloudWatch writes one log stream for each job run.</p>
     */
    inline UpdateProfileJobRequest& WithLogSubscription(LogSubscription&& value) { SetLogSubscription(std::move(value)); return *this;}


    /**
     * <p>The maximum number of compute nodes that DataBrew can use when the job
     * processes data.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum number of compute nodes that DataBrew can use when the job
     * processes data.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum number of compute nodes that DataBrew can use when the job
     * processes data.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum number of compute nodes that DataBrew can use when the job
     * processes data.</p>
     */
    inline UpdateProfileJobRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry the job after a job run fails.</p>
     */
    inline UpdateProfileJobRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    
    inline const S3Location& GetOutputLocation() const{ return m_outputLocation; }

    
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    
    inline void SetOutputLocation(const S3Location& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    
    inline void SetOutputLocation(S3Location&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    
    inline UpdateProfileJobRequest& WithOutputLocation(const S3Location& value) { SetOutputLocation(value); return *this;}

    
    inline UpdateProfileJobRequest& WithOutputLocation(S3Location&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline const Aws::Vector<ValidationConfiguration>& GetValidationConfigurations() const{ return m_validationConfigurations; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline bool ValidationConfigurationsHasBeenSet() const { return m_validationConfigurationsHasBeenSet; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = value; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline void SetValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations = std::move(value); }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline UpdateProfileJobRequest& WithValidationConfigurations(const Aws::Vector<ValidationConfiguration>& value) { SetValidationConfigurations(value); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline UpdateProfileJobRequest& WithValidationConfigurations(Aws::Vector<ValidationConfiguration>&& value) { SetValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline UpdateProfileJobRequest& AddValidationConfigurations(const ValidationConfiguration& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(value); return *this; }

    /**
     * <p>List of validation configurations that are applied to the profile job.</p>
     */
    inline UpdateProfileJobRequest& AddValidationConfigurations(ValidationConfiguration&& value) { m_validationConfigurationsHasBeenSet = true; m_validationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline UpdateProfileJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline UpdateProfileJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role to be assumed when DataBrew runs the job.</p>
     */
    inline UpdateProfileJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The job's timeout in minutes. A job that attempts to run longer than this
     * timeout period ends with a status of <code>TIMEOUT</code>.</p>
     */
    inline UpdateProfileJobRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline const JobSample& GetJobSample() const{ return m_jobSample; }

    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline bool JobSampleHasBeenSet() const { return m_jobSampleHasBeenSet; }

    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline void SetJobSample(const JobSample& value) { m_jobSampleHasBeenSet = true; m_jobSample = value; }

    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline void SetJobSample(JobSample&& value) { m_jobSampleHasBeenSet = true; m_jobSample = std::move(value); }

    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline UpdateProfileJobRequest& WithJobSample(const JobSample& value) { SetJobSample(value); return *this;}

    /**
     * <p>Sample configuration for Profile Jobs only. Determines the number of rows on
     * which the Profile job will be executed. If a JobSample value is not provided for
     * profile jobs, the default value will be used. The default value is CUSTOM_ROWS
     * for the mode parameter and 20000 for the size parameter.</p>
     */
    inline UpdateProfileJobRequest& WithJobSample(JobSample&& value) { SetJobSample(std::move(value)); return *this;}

  private:

    ProfileConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    EncryptionMode m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LogSubscription m_logSubscription;
    bool m_logSubscriptionHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    S3Location m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::Vector<ValidationConfiguration> m_validationConfigurations;
    bool m_validationConfigurationsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    JobSample m_jobSample;
    bool m_jobSampleHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
