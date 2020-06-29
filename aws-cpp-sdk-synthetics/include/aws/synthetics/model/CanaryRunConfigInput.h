/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>

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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains input information for a canary run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunConfigInput">AWS
   * API Reference</a></p>
   */
  class AWS_SYNTHETICS_API CanaryRunConfigInput
  {
  public:
    CanaryRunConfigInput();
    CanaryRunConfigInput(Aws::Utils::Json::JsonView jsonValue);
    CanaryRunConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>How long the canary is allowed to run before it must stop. If you omit this
     * field, the frequency of the canary is used as this value, up to a maximum of 14
     * minutes.</p>
     */
    inline CanaryRunConfigInput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. The value you specify must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const{ return m_memoryInMB; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. The value you specify must be a multiple of 64.</p>
     */
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. The value you specify must be a multiple of 64.</p>
     */
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. The value you specify must be a multiple of 64.</p>
     */
    inline CanaryRunConfigInput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;

    int m_memoryInMB;
    bool m_memoryInMBHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
