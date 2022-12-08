/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

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
namespace EMR
{
namespace Model
{

  /**
   * <p>An auto-termination policy for an Amazon EMR cluster. An auto-termination
   * policy defines the amount of idle time in seconds after which a cluster
   * automatically terminates. For alternative cluster termination options, see <a
   * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-termination.html">Control
   * cluster termination</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AutoTerminationPolicy">AWS
   * API Reference</a></p>
   */
  class AutoTerminationPolicy
  {
  public:
    AWS_EMR_API AutoTerminationPolicy();
    AWS_EMR_API AutoTerminationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API AutoTerminationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the amount of idle time in seconds after which the cluster
     * automatically terminates. You can specify a minimum of 60 seconds and a maximum
     * of 604800 seconds (seven days).</p>
     */
    inline long long GetIdleTimeout() const{ return m_idleTimeout; }

    /**
     * <p>Specifies the amount of idle time in seconds after which the cluster
     * automatically terminates. You can specify a minimum of 60 seconds and a maximum
     * of 604800 seconds (seven days).</p>
     */
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }

    /**
     * <p>Specifies the amount of idle time in seconds after which the cluster
     * automatically terminates. You can specify a minimum of 60 seconds and a maximum
     * of 604800 seconds (seven days).</p>
     */
    inline void SetIdleTimeout(long long value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }

    /**
     * <p>Specifies the amount of idle time in seconds after which the cluster
     * automatically terminates. You can specify a minimum of 60 seconds and a maximum
     * of 604800 seconds (seven days).</p>
     */
    inline AutoTerminationPolicy& WithIdleTimeout(long long value) { SetIdleTimeout(value); return *this;}

  private:

    long long m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
