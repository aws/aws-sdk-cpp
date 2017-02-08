/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing summary details of a job.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobSummary
  {
  public:
    JobSummary();
    JobSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    JobSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(Aws::String&& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
