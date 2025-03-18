/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The retry policy to use for a job run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/RetryPolicy">AWS
   * API Reference</a></p>
   */
  class RetryPolicy
  {
  public:
    AWS_EMRSERVERLESS_API RetryPolicy() = default;
    AWS_EMRSERVERLESS_API RetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API RetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum number of attempts for the job run. This parameter is only applicable
     * for <code>BATCH</code> mode.</p>
     */
    inline int GetMaxAttempts() const { return m_maxAttempts; }
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }
    inline RetryPolicy& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of failed attempts per hour. This [arameter is only applicable
     * for <code>STREAMING</code> mode.</p>
     */
    inline int GetMaxFailedAttemptsPerHour() const { return m_maxFailedAttemptsPerHour; }
    inline bool MaxFailedAttemptsPerHourHasBeenSet() const { return m_maxFailedAttemptsPerHourHasBeenSet; }
    inline void SetMaxFailedAttemptsPerHour(int value) { m_maxFailedAttemptsPerHourHasBeenSet = true; m_maxFailedAttemptsPerHour = value; }
    inline RetryPolicy& WithMaxFailedAttemptsPerHour(int value) { SetMaxFailedAttemptsPerHour(value); return *this;}
    ///@}
  private:

    int m_maxAttempts{0};
    bool m_maxAttemptsHasBeenSet = false;

    int m_maxFailedAttemptsPerHour{0};
    bool m_maxFailedAttemptsPerHourHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
