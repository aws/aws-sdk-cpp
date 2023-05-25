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
   * <p>Describes a port range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FilterPortRange">AWS
   * API Reference</a></p>
   */
  class FilterPortRange
  {
  public:
    AWS_EC2_API FilterPortRange();
    AWS_EC2_API FilterPortRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FilterPortRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The first port in the range.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in the range.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port in the range.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in the range.</p>
     */
    inline FilterPortRange& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port in the range.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in the range.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port in the range.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in the range.</p>
     */
    inline FilterPortRange& WithToPort(int value) { SetToPort(value); return *this;}

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
