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
namespace Http
{
    class URI;
} //namespace Http
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class GetDashboardForJobRunRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API GetDashboardForJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboardForJobRun"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_EMRSERVERLESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline GetDashboardForJobRunRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDashboardForJobRunRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDashboardForJobRunRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }
    inline GetDashboardForJobRunRequest& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}
    inline GetDashboardForJobRunRequest& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}
    inline GetDashboardForJobRunRequest& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optimal parameter that indicates the amount of attempts for the job. If
     * not specified, this value defaults to the attempt of the latest job.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline GetDashboardForJobRunRequest& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows access to system profile logs for Lake Formation-enabled jobs. Default
     * is false.</p>
     */
    inline bool GetAccessSystemProfileLogs() const{ return m_accessSystemProfileLogs; }
    inline bool AccessSystemProfileLogsHasBeenSet() const { return m_accessSystemProfileLogsHasBeenSet; }
    inline void SetAccessSystemProfileLogs(bool value) { m_accessSystemProfileLogsHasBeenSet = true; m_accessSystemProfileLogs = value; }
    inline GetDashboardForJobRunRequest& WithAccessSystemProfileLogs(bool value) { SetAccessSystemProfileLogs(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    int m_attempt;
    bool m_attemptHasBeenSet = false;

    bool m_accessSystemProfileLogs;
    bool m_accessSystemProfileLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
