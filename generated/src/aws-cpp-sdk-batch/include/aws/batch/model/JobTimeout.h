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
   * <p>An object that represents a job timeout configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobTimeout">AWS
   * API Reference</a></p>
   */
  class JobTimeout
  {
  public:
    AWS_BATCH_API JobTimeout();
    AWS_BATCH_API JobTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job timeout time (in seconds) that's measured from the job attempt's
     * <code>startedAt</code> timestamp. After this time passes, Batch terminates your
     * jobs if they aren't finished. The minimum value for the timeout is 60
     * seconds.</p> <p>For array jobs, the timeout applies to the child jobs, not to
     * the parent array job.</p> <p>For multi-node parallel (MNP) jobs, the timeout
     * applies to the whole job, not to the individual nodes.</p>
     */
    inline int GetAttemptDurationSeconds() const{ return m_attemptDurationSeconds; }

    /**
     * <p>The job timeout time (in seconds) that's measured from the job attempt's
     * <code>startedAt</code> timestamp. After this time passes, Batch terminates your
     * jobs if they aren't finished. The minimum value for the timeout is 60
     * seconds.</p> <p>For array jobs, the timeout applies to the child jobs, not to
     * the parent array job.</p> <p>For multi-node parallel (MNP) jobs, the timeout
     * applies to the whole job, not to the individual nodes.</p>
     */
    inline bool AttemptDurationSecondsHasBeenSet() const { return m_attemptDurationSecondsHasBeenSet; }

    /**
     * <p>The job timeout time (in seconds) that's measured from the job attempt's
     * <code>startedAt</code> timestamp. After this time passes, Batch terminates your
     * jobs if they aren't finished. The minimum value for the timeout is 60
     * seconds.</p> <p>For array jobs, the timeout applies to the child jobs, not to
     * the parent array job.</p> <p>For multi-node parallel (MNP) jobs, the timeout
     * applies to the whole job, not to the individual nodes.</p>
     */
    inline void SetAttemptDurationSeconds(int value) { m_attemptDurationSecondsHasBeenSet = true; m_attemptDurationSeconds = value; }

    /**
     * <p>The job timeout time (in seconds) that's measured from the job attempt's
     * <code>startedAt</code> timestamp. After this time passes, Batch terminates your
     * jobs if they aren't finished. The minimum value for the timeout is 60
     * seconds.</p> <p>For array jobs, the timeout applies to the child jobs, not to
     * the parent array job.</p> <p>For multi-node parallel (MNP) jobs, the timeout
     * applies to the whole job, not to the individual nodes.</p>
     */
    inline JobTimeout& WithAttemptDurationSeconds(int value) { SetAttemptDurationSeconds(value); return *this;}

  private:

    int m_attemptDurationSeconds;
    bool m_attemptDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
