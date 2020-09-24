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
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>How long the canary is allowed to run before it must stop. You can't set this
     * time to be longer than the frequency of the runs of this canary.</p> <p>If you
     * omit this field, the frequency of the canary is used as this value, up to a
     * maximum of 14 minutes.</p>
     */
    inline CanaryRunConfigInput& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline int GetMemoryInMB() const{ return m_memoryInMB; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline bool MemoryInMBHasBeenSet() const { return m_memoryInMBHasBeenSet; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline void SetMemoryInMB(int value) { m_memoryInMBHasBeenSet = true; m_memoryInMB = value; }

    /**
     * <p>The maximum amount of memory available to the canary while it is running, in
     * MB. This value must be a multiple of 64.</p>
     */
    inline CanaryRunConfigInput& WithMemoryInMB(int value) { SetMemoryInMB(value); return *this;}


    /**
     * <p>Specifies whether this canary is to use active AWS X-Ray tracing when it
     * runs. Active tracing enables this canary run to be displayed in the ServiceLens
     * and X-Ray service maps even if the canary does not hit an endpoint that has
     * X-ray tracing enabled. Using X-Ray tracing incurs charges. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline bool GetActiveTracing() const{ return m_activeTracing; }

    /**
     * <p>Specifies whether this canary is to use active AWS X-Ray tracing when it
     * runs. Active tracing enables this canary run to be displayed in the ServiceLens
     * and X-Ray service maps even if the canary does not hit an endpoint that has
     * X-ray tracing enabled. Using X-Ray tracing incurs charges. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline bool ActiveTracingHasBeenSet() const { return m_activeTracingHasBeenSet; }

    /**
     * <p>Specifies whether this canary is to use active AWS X-Ray tracing when it
     * runs. Active tracing enables this canary run to be displayed in the ServiceLens
     * and X-Ray service maps even if the canary does not hit an endpoint that has
     * X-ray tracing enabled. Using X-Ray tracing incurs charges. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline void SetActiveTracing(bool value) { m_activeTracingHasBeenSet = true; m_activeTracing = value; }

    /**
     * <p>Specifies whether this canary is to use active AWS X-Ray tracing when it
     * runs. Active tracing enables this canary run to be displayed in the ServiceLens
     * and X-Ray service maps even if the canary does not hit an endpoint that has
     * X-ray tracing enabled. Using X-Ray tracing incurs charges. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_tracing.html">
     * Canaries and X-Ray tracing</a>.</p> <p>You can enable active tracing only for
     * canaries that use version <code>syn-nodejs-2.0</code> or later for their canary
     * runtime.</p>
     */
    inline CanaryRunConfigInput& WithActiveTracing(bool value) { SetActiveTracing(value); return *this;}

  private:

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;

    int m_memoryInMB;
    bool m_memoryInMBHasBeenSet;

    bool m_activeTracing;
    bool m_activeTracingHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
