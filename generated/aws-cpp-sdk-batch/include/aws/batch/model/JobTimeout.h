﻿/**
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
   * <p>An object representing a job timeout configuration.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobTimeout">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobTimeout
  {
  public:
    JobTimeout();
    JobTimeout(Aws::Utils::Json::JsonView jsonValue);
    JobTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which Batch terminates your jobs if they
     * have not finished. The minimum value for the timeout is 60 seconds.</p>
     */
    inline int GetAttemptDurationSeconds() const{ return m_attemptDurationSeconds; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which Batch terminates your jobs if they
     * have not finished. The minimum value for the timeout is 60 seconds.</p>
     */
    inline bool AttemptDurationSecondsHasBeenSet() const { return m_attemptDurationSecondsHasBeenSet; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which Batch terminates your jobs if they
     * have not finished. The minimum value for the timeout is 60 seconds.</p>
     */
    inline void SetAttemptDurationSeconds(int value) { m_attemptDurationSecondsHasBeenSet = true; m_attemptDurationSeconds = value; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which Batch terminates your jobs if they
     * have not finished. The minimum value for the timeout is 60 seconds.</p>
     */
    inline JobTimeout& WithAttemptDurationSeconds(int value) { SetAttemptDurationSeconds(value); return *this;}

  private:

    int m_attemptDurationSeconds;
    bool m_attemptDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
