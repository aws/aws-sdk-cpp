/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/JobRun.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The details of a Job node present in the workflow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobNodeDetails">AWS
   * API Reference</a></p>
   */
  class JobNodeDetails
  {
  public:
    AWS_GLUE_API JobNodeDetails();
    AWS_GLUE_API JobNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const{ return m_jobRuns; }

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline bool JobRunsHasBeenSet() const { return m_jobRunsHasBeenSet; }

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline void SetJobRuns(const Aws::Vector<JobRun>& value) { m_jobRunsHasBeenSet = true; m_jobRuns = value; }

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline void SetJobRuns(Aws::Vector<JobRun>&& value) { m_jobRunsHasBeenSet = true; m_jobRuns = std::move(value); }

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline JobNodeDetails& WithJobRuns(const Aws::Vector<JobRun>& value) { SetJobRuns(value); return *this;}

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline JobNodeDetails& WithJobRuns(Aws::Vector<JobRun>&& value) { SetJobRuns(std::move(value)); return *this;}

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline JobNodeDetails& AddJobRuns(const JobRun& value) { m_jobRunsHasBeenSet = true; m_jobRuns.push_back(value); return *this; }

    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline JobNodeDetails& AddJobRuns(JobRun&& value) { m_jobRunsHasBeenSet = true; m_jobRuns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobRun> m_jobRuns;
    bool m_jobRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
