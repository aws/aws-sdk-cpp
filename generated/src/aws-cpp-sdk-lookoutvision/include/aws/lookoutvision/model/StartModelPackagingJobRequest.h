/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelPackagingConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class StartModelPackagingJobRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API StartModelPackagingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartModelPackagingJob"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p> The name of the project which contains the version of the model that you
     * want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the model within the project that you want to package. </p>
     */
    inline StartModelPackagingJobRequest& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline StartModelPackagingJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline StartModelPackagingJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>A name for the model packaging job. If you don't supply a value, the service
     * creates a job name for you. </p>
     */
    inline StartModelPackagingJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline const ModelPackagingConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline void SetConfiguration(const ModelPackagingConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline void SetConfiguration(ModelPackagingConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline StartModelPackagingJobRequest& WithConfiguration(const ModelPackagingConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration for the model packaging job. </p>
     */
    inline StartModelPackagingJobRequest& WithConfiguration(ModelPackagingConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the model packaging job. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline StartModelPackagingJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline StartModelPackagingJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the model packaging job. </p>
     */
    inline StartModelPackagingJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline StartModelPackagingJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline StartModelPackagingJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>StartModelPackagingJob</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>StartModelPackagingJob</code>. In this case, safely retry your call to
     * <code>StartModelPackagingJob</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple dataset
     * creation requests. You'll need to provide your own value for other use cases.
     * </p> <p>An error occurs if the other input parameters are not the same as in the
     * first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>StartModelPackagingJob</code>. An idempotency
     * token is active for 8 hours. </p>
     */
    inline StartModelPackagingJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    ModelPackagingConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
