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
   * <p>Specifies the minimum and maximum for the <code>VCpuCount</code> object when
   * you specify <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_InstanceRequirements.html">InstanceRequirements</a>
   * for an Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/VCpuCountRequest">AWS
   * API Reference</a></p>
   */
  class VCpuCountRequest
  {
  public:
    AWS_AUTOSCALING_API VCpuCountRequest() = default;
    AWS_AUTOSCALING_API VCpuCountRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API VCpuCountRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum number of vCPUs.</p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline VCpuCountRequest& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vCPUs.</p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline VCpuCountRequest& WithMax(int value) { SetMax(value); return *this;}
    ///@}
  private:

    int m_min{0};
    bool m_minHasBeenSet = false;

    int m_max{0};
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
