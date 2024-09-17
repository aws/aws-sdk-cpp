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
    AWS_GLUE_API BatchStopJobRunRequest();

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
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline BatchStopJobRunRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline BatchStopJobRunRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline BatchStopJobRunRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobRunIds() const{ return m_jobRunIds; }
    inline bool JobRunIdsHasBeenSet() const { return m_jobRunIdsHasBeenSet; }
    inline void SetJobRunIds(const Aws::Vector<Aws::String>& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds = value; }
    inline void SetJobRunIds(Aws::Vector<Aws::String>&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds = std::move(value); }
    inline BatchStopJobRunRequest& WithJobRunIds(const Aws::Vector<Aws::String>& value) { SetJobRunIds(value); return *this;}
    inline BatchStopJobRunRequest& WithJobRunIds(Aws::Vector<Aws::String>&& value) { SetJobRunIds(std::move(value)); return *this;}
    inline BatchStopJobRunRequest& AddJobRunIds(const Aws::String& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(value); return *this; }
    inline BatchStopJobRunRequest& AddJobRunIds(Aws::String&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(std::move(value)); return *this; }
    inline BatchStopJobRunRequest& AddJobRunIds(const char* value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(value); return *this; }
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
