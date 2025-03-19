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
    AWS_IOT_API JobExecutionSummaryForThing() = default;
    AWS_IOT_API JobExecutionSummaryForThing(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionSummaryForThing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobExecutionSummaryForThing& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline const JobExecutionSummary& GetJobExecutionSummary() const { return m_jobExecutionSummary; }
    inline bool JobExecutionSummaryHasBeenSet() const { return m_jobExecutionSummaryHasBeenSet; }
    template<typename JobExecutionSummaryT = JobExecutionSummary>
    void SetJobExecutionSummary(JobExecutionSummaryT&& value) { m_jobExecutionSummaryHasBeenSet = true; m_jobExecutionSummary = std::forward<JobExecutionSummaryT>(value); }
    template<typename JobExecutionSummaryT = JobExecutionSummary>
    JobExecutionSummaryForThing& WithJobExecutionSummary(JobExecutionSummaryT&& value) { SetJobExecutionSummary(std::forward<JobExecutionSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobExecutionSummary m_jobExecutionSummary;
    bool m_jobExecutionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
