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
   * <p>The minimum and maximum number of vCPUs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VCpuCountRange">AWS
   * API Reference</a></p>
   */
  class VCpuCountRange
  {
  public:
    AWS_EC2_API VCpuCountRange() = default;
    AWS_EC2_API VCpuCountRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VCpuCountRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum number of vCPUs. If the value is <code>0</code>, there is no
     * minimum limit.</p>
     */
    inline int GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }
    inline VCpuCountRange& WithMin(int value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vCPUs. If this parameter is not specified, there is no
     * maximum limit.</p>
     */
    inline int GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }
    inline VCpuCountRange& WithMax(int value) { SetMax(value); return *this;}
    ///@}
  private:

    int m_min{0};
    bool m_minHasBeenSet = false;

    int m_max{0};
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
