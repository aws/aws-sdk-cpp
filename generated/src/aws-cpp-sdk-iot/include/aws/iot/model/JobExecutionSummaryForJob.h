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
   * <p>Contains a summary of information about job executions for a specific
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionSummaryForJob">AWS
   * API Reference</a></p>
   */
  class JobExecutionSummaryForJob
  {
  public:
    AWS_IOT_API JobExecutionSummaryForJob() = default;
    AWS_IOT_API JobExecutionSummaryForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionSummaryForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline const Aws::String& GetThingArn() const { return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    template<typename ThingArnT = Aws::String>
    void SetThingArn(ThingArnT&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::forward<ThingArnT>(value); }
    template<typename ThingArnT = Aws::String>
    JobExecutionSummaryForJob& WithThingArn(ThingArnT&& value) { SetThingArn(std::forward<ThingArnT>(value)); return *this;}
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
    JobExecutionSummaryForJob& WithJobExecutionSummary(JobExecutionSummaryT&& value) { SetJobExecutionSummary(std::forward<JobExecutionSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;

    JobExecutionSummary m_jobExecutionSummary;
    bool m_jobExecutionSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
