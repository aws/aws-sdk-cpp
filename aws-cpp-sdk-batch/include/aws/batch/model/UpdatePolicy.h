/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies the infrastructure update policy for the compute environment. For
   * more information about infrastructure updates, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
   * compute environments</a> in the <i>Batch User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdatePolicy">AWS
   * API Reference</a></p>
   */
  class UpdatePolicy
  {
  public:
    AWS_BATCH_API UpdatePolicy();
    AWS_BATCH_API UpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API UpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether jobs are automatically terminated when the computer
     * environment infrastructure is updated. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetTerminateJobsOnUpdate() const{ return m_terminateJobsOnUpdate; }

    /**
     * <p>Specifies whether jobs are automatically terminated when the computer
     * environment infrastructure is updated. The default value is
     * <code>false</code>.</p>
     */
    inline bool TerminateJobsOnUpdateHasBeenSet() const { return m_terminateJobsOnUpdateHasBeenSet; }

    /**
     * <p>Specifies whether jobs are automatically terminated when the computer
     * environment infrastructure is updated. The default value is
     * <code>false</code>.</p>
     */
    inline void SetTerminateJobsOnUpdate(bool value) { m_terminateJobsOnUpdateHasBeenSet = true; m_terminateJobsOnUpdate = value; }

    /**
     * <p>Specifies whether jobs are automatically terminated when the computer
     * environment infrastructure is updated. The default value is
     * <code>false</code>.</p>
     */
    inline UpdatePolicy& WithTerminateJobsOnUpdate(bool value) { SetTerminateJobsOnUpdate(value); return *this;}


    /**
     * <p>Specifies the job timeout (in minutes) when the compute environment
     * infrastructure is updated. The default value is 30.</p>
     */
    inline long long GetJobExecutionTimeoutMinutes() const{ return m_jobExecutionTimeoutMinutes; }

    /**
     * <p>Specifies the job timeout (in minutes) when the compute environment
     * infrastructure is updated. The default value is 30.</p>
     */
    inline bool JobExecutionTimeoutMinutesHasBeenSet() const { return m_jobExecutionTimeoutMinutesHasBeenSet; }

    /**
     * <p>Specifies the job timeout (in minutes) when the compute environment
     * infrastructure is updated. The default value is 30.</p>
     */
    inline void SetJobExecutionTimeoutMinutes(long long value) { m_jobExecutionTimeoutMinutesHasBeenSet = true; m_jobExecutionTimeoutMinutes = value; }

    /**
     * <p>Specifies the job timeout (in minutes) when the compute environment
     * infrastructure is updated. The default value is 30.</p>
     */
    inline UpdatePolicy& WithJobExecutionTimeoutMinutes(long long value) { SetJobExecutionTimeoutMinutes(value); return *this;}

  private:

    bool m_terminateJobsOnUpdate;
    bool m_terminateJobsOnUpdateHasBeenSet = false;

    long long m_jobExecutionTimeoutMinutes;
    bool m_jobExecutionTimeoutMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
