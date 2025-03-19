/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/UnlimitedSupportedInstanceFamily.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>Describes the default credit option for CPU usage of a burstable performance
   * instance family.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceFamilyCreditSpecification">AWS
   * API Reference</a></p>
   */
  class InstanceFamilyCreditSpecification
  {
  public:
    AWS_EC2_API InstanceFamilyCreditSpecification() = default;
    AWS_EC2_API InstanceFamilyCreditSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceFamilyCreditSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance family.</p>
     */
    inline UnlimitedSupportedInstanceFamily GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(UnlimitedSupportedInstanceFamily value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline InstanceFamilyCreditSpecification& WithInstanceFamily(UnlimitedSupportedInstanceFamily value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline const Aws::String& GetCpuCredits() const { return m_cpuCredits; }
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }
    template<typename CpuCreditsT = Aws::String>
    void SetCpuCredits(CpuCreditsT&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::forward<CpuCreditsT>(value); }
    template<typename CpuCreditsT = Aws::String>
    InstanceFamilyCreditSpecification& WithCpuCredits(CpuCreditsT&& value) { SetCpuCredits(std::forward<CpuCreditsT>(value)); return *this;}
    ///@}
  private:

    UnlimitedSupportedInstanceFamily m_instanceFamily{UnlimitedSupportedInstanceFamily::NOT_SET};
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
