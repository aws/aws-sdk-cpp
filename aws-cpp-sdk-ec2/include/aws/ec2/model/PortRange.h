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
   * <p>Describes a range of ports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PortRange">AWS API
   * Reference</a></p>
   */
  class PortRange
  {
  public:
    AWS_EC2_API PortRange();
    AWS_EC2_API PortRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PortRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The first port in the range.</p>
     */
    inline int GetFrom() const{ return m_from; }

    /**
     * <p>The first port in the range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

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
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

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
    bool m_fromHasBeenSet = false;

    int m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
