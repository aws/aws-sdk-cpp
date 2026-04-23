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
     * <code>startedAt</code> timestamp) after which AWS Batch terminates your jobs if
     * they have not finished.</p>
     */
    inline int GetAttemptDurationSeconds() const{ return m_attemptDurationSeconds; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which AWS Batch terminates your jobs if
     * they have not finished.</p>
     */
    inline bool AttemptDurationSecondsHasBeenSet() const { return m_attemptDurationSecondsHasBeenSet; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which AWS Batch terminates your jobs if
     * they have not finished.</p>
     */
    inline void SetAttemptDurationSeconds(int value) { m_attemptDurationSecondsHasBeenSet = true; m_attemptDurationSeconds = value; }

    /**
     * <p>The time duration in seconds (measured from the job attempt's
     * <code>startedAt</code> timestamp) after which AWS Batch terminates your jobs if
     * they have not finished.</p>
     */
    inline JobTimeout& WithAttemptDurationSeconds(int value) { SetAttemptDurationSeconds(value); return *this;}

  private:

    int m_attemptDurationSeconds;
    bool m_attemptDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
