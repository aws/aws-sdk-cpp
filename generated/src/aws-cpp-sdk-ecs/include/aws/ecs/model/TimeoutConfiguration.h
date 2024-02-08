/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object that represents the timeout configurations for Service Connect.</p>
   *  <p>If <code>idleTimeout</code> is set to a time that is less than
   * <code>perRequestTimeout</code>, the connection will close when the
   * <code>idleTimeout</code> is reached and not the
   * <code>perRequestTimeout</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TimeoutConfiguration">AWS
   * API Reference</a></p>
   */
  class TimeoutConfiguration
  {
  public:
    AWS_ECS_API TimeoutConfiguration();
    AWS_ECS_API TimeoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TimeoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time in seconds a connection will stay active while idle. A
     * value of <code>0</code> can be set to disable <code>idleTimeout</code>.</p>
     * <p>The <code>idleTimeout</code> default for
     * <code>HTTP</code>/<code>HTTP2</code>/<code>GRPC</code> is 5 minutes.</p> <p>The
     * <code>idleTimeout</code> default for <code>TCP</code> is 1 hour.</p>
     */
    inline int GetIdleTimeoutSeconds() const{ return m_idleTimeoutSeconds; }

    /**
     * <p>The amount of time in seconds a connection will stay active while idle. A
     * value of <code>0</code> can be set to disable <code>idleTimeout</code>.</p>
     * <p>The <code>idleTimeout</code> default for
     * <code>HTTP</code>/<code>HTTP2</code>/<code>GRPC</code> is 5 minutes.</p> <p>The
     * <code>idleTimeout</code> default for <code>TCP</code> is 1 hour.</p>
     */
    inline bool IdleTimeoutSecondsHasBeenSet() const { return m_idleTimeoutSecondsHasBeenSet; }

    /**
     * <p>The amount of time in seconds a connection will stay active while idle. A
     * value of <code>0</code> can be set to disable <code>idleTimeout</code>.</p>
     * <p>The <code>idleTimeout</code> default for
     * <code>HTTP</code>/<code>HTTP2</code>/<code>GRPC</code> is 5 minutes.</p> <p>The
     * <code>idleTimeout</code> default for <code>TCP</code> is 1 hour.</p>
     */
    inline void SetIdleTimeoutSeconds(int value) { m_idleTimeoutSecondsHasBeenSet = true; m_idleTimeoutSeconds = value; }

    /**
     * <p>The amount of time in seconds a connection will stay active while idle. A
     * value of <code>0</code> can be set to disable <code>idleTimeout</code>.</p>
     * <p>The <code>idleTimeout</code> default for
     * <code>HTTP</code>/<code>HTTP2</code>/<code>GRPC</code> is 5 minutes.</p> <p>The
     * <code>idleTimeout</code> default for <code>TCP</code> is 1 hour.</p>
     */
    inline TimeoutConfiguration& WithIdleTimeoutSeconds(int value) { SetIdleTimeoutSeconds(value); return *this;}


    /**
     * <p>The amount of time waiting for the upstream to respond with a complete
     * response per request. A value of <code>0</code> can be set to disable
     * <code>perRequestTimeout</code>. <code>perRequestTimeout</code> can only be set
     * if Service Connect <code>appProtocol</code> isn't <code>TCP</code>. Only
     * <code>idleTimeout</code> is allowed for <code>TCP</code>
     * <code>appProtocol</code>.</p>
     */
    inline int GetPerRequestTimeoutSeconds() const{ return m_perRequestTimeoutSeconds; }

    /**
     * <p>The amount of time waiting for the upstream to respond with a complete
     * response per request. A value of <code>0</code> can be set to disable
     * <code>perRequestTimeout</code>. <code>perRequestTimeout</code> can only be set
     * if Service Connect <code>appProtocol</code> isn't <code>TCP</code>. Only
     * <code>idleTimeout</code> is allowed for <code>TCP</code>
     * <code>appProtocol</code>.</p>
     */
    inline bool PerRequestTimeoutSecondsHasBeenSet() const { return m_perRequestTimeoutSecondsHasBeenSet; }

    /**
     * <p>The amount of time waiting for the upstream to respond with a complete
     * response per request. A value of <code>0</code> can be set to disable
     * <code>perRequestTimeout</code>. <code>perRequestTimeout</code> can only be set
     * if Service Connect <code>appProtocol</code> isn't <code>TCP</code>. Only
     * <code>idleTimeout</code> is allowed for <code>TCP</code>
     * <code>appProtocol</code>.</p>
     */
    inline void SetPerRequestTimeoutSeconds(int value) { m_perRequestTimeoutSecondsHasBeenSet = true; m_perRequestTimeoutSeconds = value; }

    /**
     * <p>The amount of time waiting for the upstream to respond with a complete
     * response per request. A value of <code>0</code> can be set to disable
     * <code>perRequestTimeout</code>. <code>perRequestTimeout</code> can only be set
     * if Service Connect <code>appProtocol</code> isn't <code>TCP</code>. Only
     * <code>idleTimeout</code> is allowed for <code>TCP</code>
     * <code>appProtocol</code>.</p>
     */
    inline TimeoutConfiguration& WithPerRequestTimeoutSeconds(int value) { SetPerRequestTimeoutSeconds(value); return *this;}

  private:

    int m_idleTimeoutSeconds;
    bool m_idleTimeoutSecondsHasBeenSet = false;

    int m_perRequestTimeoutSeconds;
    bool m_perRequestTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
