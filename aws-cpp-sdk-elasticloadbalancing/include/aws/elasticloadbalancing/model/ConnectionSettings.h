/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about the <code>ConnectionSettings</code>
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConnectionSettings">AWS
   * API Reference</a></p>
   */
  class ConnectionSettings
  {
  public:
    AWS_ELASTICLOADBALANCING_API ConnectionSettings();
    AWS_ELASTICLOADBALANCING_API ConnectionSettings(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API ConnectionSettings& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The time, in seconds, that the connection is allowed to be idle (no data has
     * been sent over the connection) before it is closed by the load balancer.</p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }

    /**
     * <p>The time, in seconds, that the connection is allowed to be idle (no data has
     * been sent over the connection) before it is closed by the load balancer.</p>
     */
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }

    /**
     * <p>The time, in seconds, that the connection is allowed to be idle (no data has
     * been sent over the connection) before it is closed by the load balancer.</p>
     */
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }

    /**
     * <p>The time, in seconds, that the connection is allowed to be idle (no data has
     * been sent over the connection) before it is closed by the load balancer.</p>
     */
    inline ConnectionSettings& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}

  private:

    int m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
