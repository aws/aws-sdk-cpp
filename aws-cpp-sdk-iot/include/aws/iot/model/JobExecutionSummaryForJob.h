/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API JobExecutionSummaryForJob
  {
  public:
    JobExecutionSummaryForJob();
    JobExecutionSummaryForJob(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionSummaryForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecutionSummaryForJob& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecutionSummaryForJob& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the thing on which the job execution is running.</p>
     */
    inline JobExecutionSummaryForJob& WithThingArn(const char* value) { SetThingArn(value); return *this;}


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
    inline JobExecutionSummaryForJob& WithJobExecutionSummary(const JobExecutionSummary& value) { SetJobExecutionSummary(value); return *this;}

    /**
     * <p>Contains a subset of information about a job execution.</p>
     */
    inline JobExecutionSummaryForJob& WithJobExecutionSummary(JobExecutionSummary&& value) { SetJobExecutionSummary(std::move(value)); return *this;}

  private:

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;

    JobExecutionSummary m_jobExecutionSummary;
    bool m_jobExecutionSummaryHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
