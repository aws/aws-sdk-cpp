/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/JobExecutionSummary.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The job execution summary for a thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionSummaryForThing">AWS
   * API Reference</a></p>
   */
  class JobExecutionSummaryForThing
  {
  public:
    AWS_IOT_API JobExecutionSummaryForThing();
    AWS_IOT_API JobExecutionSummaryForThing(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionSummaryForThing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline JobExecutionSummaryForThing& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecutionSummaryForThing& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline JobExecutionSummaryForThing& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline const JobExecutionSummary& GetJobExecutionSummary() const{ return m_jobExecutionSummary; }

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline bool JobExecutionSummaryHasBeenSet() const { return m_jobExecutionSummaryHasBeenSet; }

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline void SetJobExecutionSummary(const JobExecutionSummary& value) { m_jobExecutionSummaryHasBeenSet = true; m_jobExecutionSummary = value; }

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline void SetJobExecutionSummary(JobExecutionSummary&& value) { m_jobExecutionSummaryHasBeenSet = true; m_jobExecutionSummary = std::move(value); }

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline JobExecutionSummaryForThing& WithJobExecutionSummary(const JobExecutionSummary& value) { SetJobExecutionSummary(value); return *this;}

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline JobExecutionSummaryForThing& WithJobExecutionSummary(JobExecutionSummary&& value) { SetJobExecutionSummary(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobExecutionSummary m_jobExecutionSummary;
    bool m_jobExecutionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
