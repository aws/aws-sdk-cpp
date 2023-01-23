/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   * <p>Contains a subset of information about a job execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/JobExecutionSummary">AWS
   * API Reference</a></p>
   */
  class JobExecutionSummary
  {
  public:
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary();
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API JobExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTJOBSDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecutionSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecutionSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecutionSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline long long GetQueuedAt() const{ return m_queuedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline bool QueuedAtHasBeenSet() const { return m_queuedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline void SetQueuedAt(long long value) { m_queuedAtHasBeenSet = true; m_queuedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was
     * enqueued.</p>
     */
    inline JobExecutionSummary& WithQueuedAt(long long value) { SetQueuedAt(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution
     * started.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution
     * started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution
     * started.</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution
     * started.</p>
     */
    inline JobExecutionSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline long long GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(long long value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the job execution was last
     * updated.</p>
     */
    inline JobExecutionSummary& WithLastUpdatedAt(long long value) { SetLastUpdatedAt(value); return *this;}


    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time AWS IoT Jobs receives an update from a device.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time AWS IoT Jobs receives an update from a device.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time AWS IoT Jobs receives an update from a device.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version of the job execution. Job execution versions are incremented each
     * time AWS IoT Jobs receives an update from a device.</p>
     */
    inline JobExecutionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline long long GetExecutionNumber() const{ return m_executionNumber; }

    /**
     * <p>A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline bool ExecutionNumberHasBeenSet() const { return m_executionNumberHasBeenSet; }

    /**
     * <p>A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline void SetExecutionNumber(long long value) { m_executionNumberHasBeenSet = true; m_executionNumber = value; }

    /**
     * <p>A number that identifies a particular job execution on a particular
     * device.</p>
     */
    inline JobExecutionSummary& WithExecutionNumber(long long value) { SetExecutionNumber(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    long long m_queuedAt;
    bool m_queuedAtHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    long long m_executionNumber;
    bool m_executionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
