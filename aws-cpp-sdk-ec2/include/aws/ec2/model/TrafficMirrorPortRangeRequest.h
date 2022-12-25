/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the Traffic Mirror filter rule port range.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrafficMirrorPortRangeRequest">AWS
   * API Reference</a></p>
   */
  class TrafficMirrorPortRangeRequest
  {
  public:
    AWS_EC2_API TrafficMirrorPortRangeRequest();
    AWS_EC2_API TrafficMirrorPortRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorPortRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The first port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline TrafficMirrorPortRangeRequest& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in the Traffic Mirror port range. This applies to the TCP and
     * UDP protocols.</p>
     */
    inline TrafficMirrorPortRangeRequest& WithToPort(int value) { SetToPort(value); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
