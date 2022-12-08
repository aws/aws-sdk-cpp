/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class DescribeModelPackagingJobRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeModelPackagingJob"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline DescribeModelPackagingJobRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline DescribeModelPackagingJobRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that contains the model packaging job that you want
     * to describe. </p>
     */
    inline DescribeModelPackagingJobRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline DescribeModelPackagingJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline DescribeModelPackagingJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name for the model packaging job. </p>
     */
    inline DescribeModelPackagingJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
