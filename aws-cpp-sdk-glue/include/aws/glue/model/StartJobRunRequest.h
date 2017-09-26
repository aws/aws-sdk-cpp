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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API StartJobRunRequest : public GlueRequest
  {
  public:
    StartJobRunRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the job to start.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job to start.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job to start.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job to start.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job to start.</p>
     */
    inline StartJobRunRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job to start.</p>
     */
    inline StartJobRunRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job to start.</p>
     */
    inline StartJobRunRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ID of the job run to start.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline StartJobRunRequest& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job run to start.</p>
     */
    inline StartJobRunRequest& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specific arguments for this job run.</p>
     */
    inline StartJobRunRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }


    /**
     * <p>The infrastructure capacity to allocate to this job.</p>
     */
    inline int GetAllocatedCapacity() const{ return m_allocatedCapacity; }

    /**
     * <p>The infrastructure capacity to allocate to this job.</p>
     */
    inline void SetAllocatedCapacity(int value) { m_allocatedCapacityHasBeenSet = true; m_allocatedCapacity = value; }

    /**
     * <p>The infrastructure capacity to allocate to this job.</p>
     */
    inline StartJobRunRequest& WithAllocatedCapacity(int value) { SetAllocatedCapacity(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet;

    int m_allocatedCapacity;
    bool m_allocatedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
