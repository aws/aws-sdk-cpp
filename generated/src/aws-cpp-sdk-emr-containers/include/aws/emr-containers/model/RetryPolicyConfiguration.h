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
   * <p>The configuration of the retry policy that the job runs on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/RetryPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class RetryPolicyConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API RetryPolicyConfiguration();
    AWS_EMRCONTAINERS_API RetryPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API RetryPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of attempts on the job's driver.</p>
     */
    inline int GetMaxAttempts() const{ return m_maxAttempts; }

    /**
     * <p>The maximum number of attempts on the job's driver.</p>
     */
    inline bool MaxAttemptsHasBeenSet() const { return m_maxAttemptsHasBeenSet; }

    /**
     * <p>The maximum number of attempts on the job's driver.</p>
     */
    inline void SetMaxAttempts(int value) { m_maxAttemptsHasBeenSet = true; m_maxAttempts = value; }

    /**
     * <p>The maximum number of attempts on the job's driver.</p>
     */
    inline RetryPolicyConfiguration& WithMaxAttempts(int value) { SetMaxAttempts(value); return *this;}

  private:

    int m_maxAttempts;
    bool m_maxAttemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
