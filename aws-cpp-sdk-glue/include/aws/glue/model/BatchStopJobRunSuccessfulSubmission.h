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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Records a successful request to stop a specified
   * <code>JobRun</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRunSuccessfulSubmission">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API BatchStopJobRunSuccessfulSubmission
  {
  public:
    BatchStopJobRunSuccessfulSubmission();
    BatchStopJobRunSuccessfulSubmission(Aws::Utils::Json::JsonView jsonValue);
    BatchStopJobRunSuccessfulSubmission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition used in the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The <code>JobRunId</code> of the job run that was stopped.</p>
     */
    inline BatchStopJobRunSuccessfulSubmission& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
