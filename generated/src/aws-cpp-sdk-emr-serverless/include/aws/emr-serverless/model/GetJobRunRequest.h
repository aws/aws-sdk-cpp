/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class GetJobRunRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API GetJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobRun"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline GetJobRunRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline GetJobRunRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application on which the job run is submitted.</p>
     */
    inline GetJobRunRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
