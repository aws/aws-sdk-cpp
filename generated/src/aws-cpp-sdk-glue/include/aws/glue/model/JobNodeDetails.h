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
    AWS_GLUE_API JobNodeDetails() = default;
    AWS_GLUE_API JobNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information for the job runs represented by the job node.</p>
     */
    inline const Aws::Vector<JobRun>& GetJobRuns() const { return m_jobRuns; }
    inline bool JobRunsHasBeenSet() const { return m_jobRunsHasBeenSet; }
    template<typename JobRunsT = Aws::Vector<JobRun>>
    void SetJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns = std::forward<JobRunsT>(value); }
    template<typename JobRunsT = Aws::Vector<JobRun>>
    JobNodeDetails& WithJobRuns(JobRunsT&& value) { SetJobRuns(std::forward<JobRunsT>(value)); return *this;}
    template<typename JobRunsT = JobRun>
    JobNodeDetails& AddJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns.emplace_back(std::forward<JobRunsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<JobRun> m_jobRuns;
    bool m_jobRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
