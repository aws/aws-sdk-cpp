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
  class CancelJobRunRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API CancelJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJobRun"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_EMRSERVERLESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the application on which the job run will be canceled.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CancelJobRunRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run to cancel.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    CancelJobRunRequest& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds to wait before forcefully terminating the job after
     * cancellation is requested.</p>
     */
    inline int GetShutdownGracePeriodInSeconds() const { return m_shutdownGracePeriodInSeconds; }
    inline bool ShutdownGracePeriodInSecondsHasBeenSet() const { return m_shutdownGracePeriodInSecondsHasBeenSet; }
    inline void SetShutdownGracePeriodInSeconds(int value) { m_shutdownGracePeriodInSecondsHasBeenSet = true; m_shutdownGracePeriodInSeconds = value; }
    inline CancelJobRunRequest& WithShutdownGracePeriodInSeconds(int value) { SetShutdownGracePeriodInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    int m_shutdownGracePeriodInSeconds{0};
    bool m_shutdownGracePeriodInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
