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
   * <p>Describes a range of ports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PortRange">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API PortRange
  {
  public:
    PortRange();
    PortRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    PortRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The first port in the range.</p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p>The first port in the range.</p>
     */
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The first port in the range.</p>
     */
    inline PortRange& WithFrom(int value) { SetFrom(value); return *this;}


    /**
     * <p>The last port in the range.</p>
     */
    inline int GetTo() const{ return m_to; }

    /**
     * <p>The last port in the range.</p>
     */
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The last port in the range.</p>
     */
    inline PortRange& WithTo(int value) { SetTo(value); return *this;}

  private:

    int m_from;
    bool m_fromHasBeenSet;

    int m_to;
    bool m_toHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
