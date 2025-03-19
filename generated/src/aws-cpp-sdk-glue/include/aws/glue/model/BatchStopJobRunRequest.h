/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class BatchStopJobRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API BatchStopJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStopJobRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    BatchStopJobRunRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobRunIds() const { return m_jobRunIds; }
    inline bool JobRunIdsHasBeenSet() const { return m_jobRunIdsHasBeenSet; }
    template<typename JobRunIdsT = Aws::Vector<Aws::String>>
    void SetJobRunIds(JobRunIdsT&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds = std::forward<JobRunIdsT>(value); }
    template<typename JobRunIdsT = Aws::Vector<Aws::String>>
    BatchStopJobRunRequest& WithJobRunIds(JobRunIdsT&& value) { SetJobRunIds(std::forward<JobRunIdsT>(value)); return *this;}
    template<typename JobRunIdsT = Aws::String>
    BatchStopJobRunRequest& AddJobRunIds(JobRunIdsT&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.emplace_back(std::forward<JobRunIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobRunIds;
    bool m_jobRunIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
