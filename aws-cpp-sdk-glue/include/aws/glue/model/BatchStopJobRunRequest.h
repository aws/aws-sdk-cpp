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
  class AWS_GLUE_API BatchStopJobRunRequest : public GlueRequest
  {
  public:
    BatchStopJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStopJobRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline BatchStopJobRunRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline BatchStopJobRunRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition for which to stop job runs.</p>
     */
    inline BatchStopJobRunRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobRunIds() const{ return m_jobRunIds; }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline bool JobRunIdsHasBeenSet() const { return m_jobRunIdsHasBeenSet; }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline void SetJobRunIds(const Aws::Vector<Aws::String>& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds = value; }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline void SetJobRunIds(Aws::Vector<Aws::String>&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds = std::move(value); }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline BatchStopJobRunRequest& WithJobRunIds(const Aws::Vector<Aws::String>& value) { SetJobRunIds(value); return *this;}

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline BatchStopJobRunRequest& WithJobRunIds(Aws::Vector<Aws::String>&& value) { SetJobRunIds(std::move(value)); return *this;}

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline BatchStopJobRunRequest& AddJobRunIds(const Aws::String& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(value); return *this; }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline BatchStopJobRunRequest& AddJobRunIds(Aws::String&& value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the <code>JobRunIds</code> that should be stopped for that job
     * definition.</p>
     */
    inline BatchStopJobRunRequest& AddJobRunIds(const char* value) { m_jobRunIdsHasBeenSet = true; m_jobRunIds.push_back(value); return *this; }

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::Vector<Aws::String> m_jobRunIds;
    bool m_jobRunIdsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
