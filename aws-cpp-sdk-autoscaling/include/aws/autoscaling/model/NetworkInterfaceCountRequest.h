/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Specifies the minimum and maximum for the <code>NetworkInterfaceCount</code>
   * object when you specify <a>InstanceRequirements</a> for an Auto Scaling
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/NetworkInterfaceCountRequest">AWS
   * API Reference</a></p>
   */
  class NetworkInterfaceCountRequest
  {
  public:
    AWS_AUTOSCALING_API NetworkInterfaceCountRequest();
    AWS_AUTOSCALING_API NetworkInterfaceCountRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API NetworkInterfaceCountRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum number of network interfaces.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The minimum number of network interfaces.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum number of network interfaces.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum number of network interfaces.</p>
     */
    inline NetworkInterfaceCountRequest& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p>The maximum number of network interfaces.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The maximum number of network interfaces.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum number of network interfaces.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum number of network interfaces.</p>
     */
    inline NetworkInterfaceCountRequest& WithMax(int value) { SetMax(value); return *this;}

  private:

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
