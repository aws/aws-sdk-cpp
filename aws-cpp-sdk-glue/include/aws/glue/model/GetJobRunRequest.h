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
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetJobRunRequest : public GlueRequest
  {
  public:
    GetJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the job definition being run.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline GetJobRunRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline GetJobRunRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Name of the job definition being run.</p>
     */
    inline GetJobRunRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline GetJobRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>True if a list of predecessor runs should be returned.</p>
     */
    inline bool GetPredecessorsIncluded() const{ return m_predecessorsIncluded; }

    /**
     * <p>True if a list of predecessor runs should be returned.</p>
     */
    inline bool PredecessorsIncludedHasBeenSet() const { return m_predecessorsIncludedHasBeenSet; }

    /**
     * <p>True if a list of predecessor runs should be returned.</p>
     */
    inline void SetPredecessorsIncluded(bool value) { m_predecessorsIncludedHasBeenSet = true; m_predecessorsIncluded = value; }

    /**
     * <p>True if a list of predecessor runs should be returned.</p>
     */
    inline GetJobRunRequest& WithPredecessorsIncluded(bool value) { SetPredecessorsIncluded(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;

    bool m_predecessorsIncluded;
    bool m_predecessorsIncludedHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
