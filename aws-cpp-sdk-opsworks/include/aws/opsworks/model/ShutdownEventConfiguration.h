/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>The Shutdown event configuration.</p>
   */
  class AWS_OPSWORKS_API ShutdownEventConfiguration
  {
  public:
    ShutdownEventConfiguration();
    ShutdownEventConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    ShutdownEventConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The time, in seconds, that AWS OpsWorks will wait after triggering a Shutdown
     * event before shutting down an instance.</p>
     */
    inline int GetExecutionTimeout() const{ return m_executionTimeout; }

    /**
     * <p>The time, in seconds, that AWS OpsWorks will wait after triggering a Shutdown
     * event before shutting down an instance.</p>
     */
    inline void SetExecutionTimeout(int value) { m_executionTimeoutHasBeenSet = true; m_executionTimeout = value; }

    /**
     * <p>The time, in seconds, that AWS OpsWorks will wait after triggering a Shutdown
     * event before shutting down an instance.</p>
     */
    inline ShutdownEventConfiguration& WithExecutionTimeout(int value) { SetExecutionTimeout(value); return *this;}

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline bool GetDelayUntilElbConnectionsDrained() const{ return m_delayUntilElbConnectionsDrained; }

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline void SetDelayUntilElbConnectionsDrained(bool value) { m_delayUntilElbConnectionsDrainedHasBeenSet = true; m_delayUntilElbConnectionsDrained = value; }

    /**
     * <p>Whether to enable Elastic Load Balancing connection draining. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/TerminologyandKeyConcepts.html#conn-drain">Connection
     * Draining</a> </p>
     */
    inline ShutdownEventConfiguration& WithDelayUntilElbConnectionsDrained(bool value) { SetDelayUntilElbConnectionsDrained(value); return *this;}

  private:
    int m_executionTimeout;
    bool m_executionTimeoutHasBeenSet;
    bool m_delayUntilElbConnectionsDrained;
    bool m_delayUntilElbConnectionsDrainedHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
