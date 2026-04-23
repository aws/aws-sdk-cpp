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
   * <p>The job execution summary for a thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionSummaryForThing">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API JobExecutionSummaryForThing
  {
  public:
    JobExecutionSummaryForThing();
    JobExecutionSummaryForThing(Aws::Utils::Json::JsonView jsonValue);
    JobExecutionSummaryForThing& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_jobIdHasBeenSet;

    JobExecutionSummary m_jobExecutionSummary;
    bool m_jobExecutionSummaryHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
