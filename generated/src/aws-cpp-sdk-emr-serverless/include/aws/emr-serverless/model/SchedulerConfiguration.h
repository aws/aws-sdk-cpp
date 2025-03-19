/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The scheduler configuration for batch and streaming jobs running on this
   * application. Supported with release labels emr-7.0.0 and above.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/SchedulerConfiguration">AWS
   * API Reference</a></p>
   */
  class SchedulerConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API SchedulerConfiguration() = default;
    AWS_EMRSERVERLESS_API SchedulerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API SchedulerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum duration in minutes for the job in QUEUED state. If scheduler
     * configuration is enabled on your application, the default value is 360 minutes
     * (6 hours). The valid range is from 15 to 720.</p>
     */
    inline int GetQueueTimeoutMinutes() const { return m_queueTimeoutMinutes; }
    inline bool QueueTimeoutMinutesHasBeenSet() const { return m_queueTimeoutMinutesHasBeenSet; }
    inline void SetQueueTimeoutMinutes(int value) { m_queueTimeoutMinutesHasBeenSet = true; m_queueTimeoutMinutes = value; }
    inline SchedulerConfiguration& WithQueueTimeoutMinutes(int value) { SetQueueTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum concurrent job runs on this application. If scheduler
     * configuration is enabled on your application, the default value is 15. The valid
     * range is 1 to 1000.</p>
     */
    inline int GetMaxConcurrentRuns() const { return m_maxConcurrentRuns; }
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }
    inline SchedulerConfiguration& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}
    ///@}
  private:

    int m_queueTimeoutMinutes{0};
    bool m_queueTimeoutMinutesHasBeenSet = false;

    int m_maxConcurrentRuns{0};
    bool m_maxConcurrentRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
