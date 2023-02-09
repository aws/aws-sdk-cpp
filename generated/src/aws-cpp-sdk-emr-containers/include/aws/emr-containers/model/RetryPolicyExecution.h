/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The current status of the retry policy executed on the job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/RetryPolicyExecution">AWS
   * API Reference</a></p>
   */
  class RetryPolicyExecution
  {
  public:
    AWS_EMRCONTAINERS_API RetryPolicyExecution();
    AWS_EMRCONTAINERS_API RetryPolicyExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API RetryPolicyExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current number of attempts made on the driver of the job.</p>
     */
    inline int GetCurrentAttemptCount() const{ return m_currentAttemptCount; }

    /**
     * <p>The current number of attempts made on the driver of the job.</p>
     */
    inline bool CurrentAttemptCountHasBeenSet() const { return m_currentAttemptCountHasBeenSet; }

    /**
     * <p>The current number of attempts made on the driver of the job.</p>
     */
    inline void SetCurrentAttemptCount(int value) { m_currentAttemptCountHasBeenSet = true; m_currentAttemptCount = value; }

    /**
     * <p>The current number of attempts made on the driver of the job.</p>
     */
    inline RetryPolicyExecution& WithCurrentAttemptCount(int value) { SetCurrentAttemptCount(value); return *this;}

  private:

    int m_currentAttemptCount;
    bool m_currentAttemptCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
