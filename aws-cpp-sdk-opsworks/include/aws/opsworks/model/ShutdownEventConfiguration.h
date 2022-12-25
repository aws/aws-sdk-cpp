/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>

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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>The Shutdown event configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ShutdownEventConfiguration">AWS
   * API Reference</a></p>
   */
  class ShutdownEventConfiguration
  {
  public:
    AWS_OPSWORKS_API ShutdownEventConfiguration();
    AWS_OPSWORKS_API ShutdownEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API ShutdownEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in seconds, that AWS OpsWorks Stacks will wait after triggering a
     * Shutdown event before shutting down an instance.</p>
     */
    inline int GetExecutionTimeout() const{ return m_executionTimeout; }

    /**
     * <p>The time, in seconds, that AWS OpsWorks Stacks will wait after triggering a
     * Shutdown event before shutting down an instance.</p>
     */
    inline bool ExecutionTimeoutHasBeenSet() const { return m_executionTimeoutHasBeenSet; }

    /**
     * <p>The time, in seconds, that AWS OpsWorks Stacks will wait after triggering a
     * Shutdown event before shutting down an instance.</p>
     */
    inline void SetExecutionTimeout(int value) { m_executionTimeoutHasBeenSet = true; m_executionTimeout = value; }

    /**
     * <p>The time, in seconds, that AWS OpsWorks Stacks will wait after triggering a
     * Shutdown event before shutting down an instance.</p>
     */
    inline ShutdownEventConfiguration& WithExecutionTimeout(int value) { SetExecutionTimeout(value); return *this;}


    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline bool GetDelayUntilElbConnectionsDrained() const{ return m_delayUntilElbConnectionsDrained; }

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline bool DelayUntilElbConnectionsDrainedHasBeenSet() const { return m_delayUntilElbConnectionsDrainedHasBeenSet; }

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline void SetDelayUntilElbConnectionsDrained(bool value) { m_delayUntilElbConnectionsDrainedHasBeenSet = true; m_delayUntilElbConnectionsDrained = value; }

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline ShutdownEventConfiguration& WithDelayUntilElbConnectionsDrained(bool value) { SetDelayUntilElbConnectionsDrained(value); return *this;}

  private:

    int m_executionTimeout;
    bool m_executionTimeoutHasBeenSet = false;

    bool m_delayUntilElbConnectionsDrained;
    bool m_delayUntilElbConnectionsDrainedHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
