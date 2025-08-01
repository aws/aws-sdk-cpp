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
   * <p>The timeout configuration for service jobs. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobTimeout">AWS
   * API Reference</a></p>
   */
  class ServiceJobTimeout
  {
  public:
    AWS_BATCH_API ServiceJobTimeout() = default;
    AWS_BATCH_API ServiceJobTimeout(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceJobTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum duration in seconds that a service job attempt can run. After
     * this time is reached, Batch terminates the service job attempt.</p>
     */
    inline int GetAttemptDurationSeconds() const { return m_attemptDurationSeconds; }
    inline bool AttemptDurationSecondsHasBeenSet() const { return m_attemptDurationSecondsHasBeenSet; }
    inline void SetAttemptDurationSeconds(int value) { m_attemptDurationSecondsHasBeenSet = true; m_attemptDurationSeconds = value; }
    inline ServiceJobTimeout& WithAttemptDurationSeconds(int value) { SetAttemptDurationSeconds(value); return *this;}
    ///@}
  private:

    int m_attemptDurationSeconds{0};
    bool m_attemptDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
