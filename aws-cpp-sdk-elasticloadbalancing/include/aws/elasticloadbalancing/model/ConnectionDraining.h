/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Information about the <code>ConnectionDraining</code>
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConnectionDraining">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API ConnectionDraining
  {
  public:
    ConnectionDraining();
    ConnectionDraining(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConnectionDraining& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies whether connection draining is enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether connection draining is enabled for the load balancer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether connection draining is enabled for the load balancer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether connection draining is enabled for the load balancer.</p>
     */
    inline ConnectionDraining& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The maximum time, in seconds, to keep the existing connections open before
     * deregistering the instances.</p>
     */
    inline ConnectionDraining& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
