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
    AWS_EC2_API InstanceFamilyCreditSpecification();
    AWS_EC2_API InstanceFamilyCreditSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceFamilyCreditSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance family.</p>
     */
    inline const UnlimitedSupportedInstanceFamily& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family.</p>
     */
    inline void SetInstanceFamily(const UnlimitedSupportedInstanceFamily& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family.</p>
     */
    inline void SetInstanceFamily(UnlimitedSupportedInstanceFamily&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family.</p>
     */
    inline InstanceFamilyCreditSpecification& WithInstanceFamily(const UnlimitedSupportedInstanceFamily& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family.</p>
     */
    inline InstanceFamilyCreditSpecification& WithInstanceFamily(UnlimitedSupportedInstanceFamily&& value) { SetInstanceFamily(std::move(value)); return *this;}


    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceFamilyCreditSpecification& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceFamilyCreditSpecification& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p>The default credit option for CPU usage of the instance family. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceFamilyCreditSpecification& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    UnlimitedSupportedInstanceFamily m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
