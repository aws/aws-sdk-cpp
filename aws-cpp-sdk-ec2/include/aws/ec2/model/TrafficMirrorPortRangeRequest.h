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
  class AWS_EC2_API TrafficMirrorPortRangeRequest
  {
  public:
    TrafficMirrorPortRangeRequest();
    TrafficMirrorPortRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficMirrorPortRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_fromPortHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
