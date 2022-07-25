/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/VCpuCountRequest.h>
#include <aws/autoscaling/model/MemoryMiBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/MemoryGiBPerVCpuRequest.h>
#include <aws/autoscaling/model/BareMetal.h>
#include <aws/autoscaling/model/BurstablePerformance.h>
#include <aws/autoscaling/model/NetworkInterfaceCountRequest.h>
#include <aws/autoscaling/model/LocalStorage.h>
#include <aws/autoscaling/model/TotalLocalStorageGBRequest.h>
#include <aws/autoscaling/model/BaselineEbsBandwidthMbpsRequest.h>
#include <aws/autoscaling/model/AcceleratorCountRequest.h>
#include <aws/autoscaling/model/AcceleratorTotalMemoryMiBRequest.h>
#include <aws/autoscaling/model/CpuManufacturer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/InstanceGeneration.h>
#include <aws/autoscaling/model/LocalStorageType.h>
#include <aws/autoscaling/model/AcceleratorType.h>
#include <aws/autoscaling/model/AcceleratorManufacturer.h>
#include <aws/autoscaling/model/AcceleratorName.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>When you specify multiple parameters, you get instance types that satisfy all
   * of the specified parameters. If you specify multiple values for a parameter, you
   * get instance types that satisfy any of the specified values.</p> <p>Represents
   * requirements for the types of instances that can be launched. You must specify
   * <code>VCpuCount</code> and <code>MemoryMiB</code>, but all other parameters are
   * optional. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-asg-instance-type-requirements.html">Creating
   * an Auto Scaling group using attribute-based instance type selection</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceRequirements">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API InstanceRequirements
  {
  public:
    InstanceRequirements();
    InstanceRequirements(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceRequirements& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline const VCpuCountRequest& GetVCpuCount() const{ return m_vCpuCount; }

    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline void SetVCpuCount(const VCpuCountRequest& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }

    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline void SetVCpuCount(VCpuCountRequest&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline InstanceRequirements& WithVCpuCount(const VCpuCountRequest& value) { SetVCpuCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of vCPUs for an instance type.</p>
     */
    inline InstanceRequirements& WithVCpuCount(VCpuCountRequest&& value) { SetVCpuCount(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline const MemoryMiBRequest& GetMemoryMiB() const{ return m_memoryMiB; }

    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }

    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline void SetMemoryMiB(const MemoryMiBRequest& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }

    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline void SetMemoryMiB(MemoryMiBRequest&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }

    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline InstanceRequirements& WithMemoryMiB(const MemoryMiBRequest& value) { SetMemoryMiB(value); return *this;}

    /**
     * <p>The minimum and maximum instance memory size for an instance type, in
     * MiB.</p>
     */
    inline InstanceRequirements& WithMemoryMiB(MemoryMiBRequest&& value) { SetMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline const Aws::Vector<CpuManufacturer>& GetCpuManufacturers() const{ return m_cpuManufacturers; }

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline void SetCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = value; }

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline void SetCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::move(value); }

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline InstanceRequirements& WithCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { SetCpuManufacturers(value); return *this;}

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline InstanceRequirements& WithCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { SetCpuManufacturers(std::move(value)); return *this;}

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline InstanceRequirements& AddCpuManufacturers(const CpuManufacturer& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }

    /**
     * <p>Lists which specific CPU manufacturers to include.</p> <ul> <li> <p>For
     * instance types with Intel CPUs, specify <code>intel</code>.</p> </li> <li>
     * <p>For instance types with AMD CPUs, specify <code>amd</code>.</p> </li> <li>
     * <p>For instance types with Amazon Web Services CPUs, specify
     * <code>amazon-web-services</code>.</p> </li> </ul>  <p>Don't confuse the
     * CPU hardware manufacturer with the CPU hardware architecture. Instances will be
     * launched with a compatible CPU architecture based on the Amazon Machine Image
     * (AMI) that you specify in your launch template. </p>  <p>Default: Any
     * manufacturer</p>
     */
    inline InstanceRequirements& AddCpuManufacturers(CpuManufacturer&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline const MemoryGiBPerVCpuRequest& GetMemoryGiBPerVCpu() const{ return m_memoryGiBPerVCpu; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetMemoryGiBPerVCpu(const MemoryGiBPerVCpuRequest& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = value; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetMemoryGiBPerVCpu(MemoryGiBPerVCpuRequest&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::move(value); }

    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithMemoryGiBPerVCpu(const MemoryGiBPerVCpuRequest& value) { SetMemoryGiBPerVCpu(value); return *this;}

    /**
     * <p>The minimum and maximum amount of memory per vCPU for an instance type, in
     * GiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithMemoryGiBPerVCpu(MemoryGiBPerVCpuRequest&& value) { SetMemoryGiBPerVCpu(std::move(value)); return *this;}


    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline InstanceRequirements& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline InstanceRequirements& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline InstanceRequirements& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline InstanceRequirements& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists which instance types to exclude. You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>). The following are
     * examples: <code>c5*</code>, <code>m5a.*</code>, <code>r*</code>,
     * <code>*3*</code>. </p> <p>For example, if you specify <code>c5*</code>, you are
     * excluding the entire C5 instance family, which includes all C5a and C5n instance
     * types. If you specify <code>m5a.*</code>, you are excluding all the M5a instance
     * types, but not the M5n instance types.</p> <p>Default: No excluded instance
     * types</p>
     */
    inline InstanceRequirements& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }


    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline const Aws::Vector<InstanceGeneration>& GetInstanceGenerations() const{ return m_instanceGenerations; }

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline void SetInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = value; }

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline void SetInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::move(value); }

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline InstanceRequirements& WithInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { SetInstanceGenerations(value); return *this;}

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline InstanceRequirements& WithInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { SetInstanceGenerations(std::move(value)); return *this;}

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline InstanceRequirements& AddInstanceGenerations(const InstanceGeneration& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }

    /**
     * <p>Indicates whether current or previous generation instance types are
     * included.</p> <ul> <li> <p>For current generation instance types, specify
     * <code>current</code>. The current generation includes EC2 instance types
     * currently recommended for use. This typically includes the latest two to three
     * generations in each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> </li>
     * <li> <p>For previous generation instance types, specify
     * <code>previous</code>.</p> </li> </ul> <p>Default: Any current or previous
     * generation</p>
     */
    inline InstanceRequirements& AddInstanceGenerations(InstanceGeneration&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(std::move(value)); return *this; }


    /**
     * <p>The price protection threshold for Spot Instances. This is the maximum you’ll
     * pay for a Spot Instance, expressed as a percentage higher than the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>100</code> </p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const{ return m_spotMaxPricePercentageOverLowestPrice; }

    /**
     * <p>The price protection threshold for Spot Instances. This is the maximum you’ll
     * pay for a Spot Instance, expressed as a percentage higher than the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>100</code> </p>
     */
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p>The price protection threshold for Spot Instances. This is the maximum you’ll
     * pay for a Spot Instance, expressed as a percentage higher than the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>100</code> </p>
     */
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p>The price protection threshold for Spot Instances. This is the maximum you’ll
     * pay for a Spot Instance, expressed as a percentage higher than the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>100</code> </p>
     */
    inline InstanceRequirements& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage higher than the
     * least expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>20</code> </p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const{ return m_onDemandMaxPricePercentageOverLowestPrice; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage higher than the
     * least expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>20</code> </p>
     */
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage higher than the
     * least expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>20</code> </p>
     */
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage higher than the
     * least expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 Auto Scaling selects instance types with your
     * attributes, we will exclude instance types whose price is higher than your
     * threshold. The parameter accepts an integer, which Amazon EC2 Auto Scaling
     * interprets as a percentage. To turn off price protection, specify a high value,
     * such as <code>999999</code>. </p> <p>If you set <code>DesiredCapacityType</code>
     * to <code>vcpu</code> or <code>memory-mib</code>, the price protection threshold
     * is applied based on the per vCPU or per memory price instead of the per instance
     * price. </p> <p>Default: <code>20</code> </p>
     */
    inline InstanceRequirements& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline const BareMetal& GetBareMetal() const{ return m_bareMetal; }

    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }

    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBareMetal(const BareMetal& value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }

    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBareMetal(BareMetal&& value) { m_bareMetalHasBeenSet = true; m_bareMetal = std::move(value); }

    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirements& WithBareMetal(const BareMetal& value) { SetBareMetal(value); return *this;}

    /**
     * <p>Indicates whether bare metal instance types are included, excluded, or
     * required.</p> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirements& WithBareMetal(BareMetal&& value) { SetBareMetal(std::move(value)); return *this;}


    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline const BurstablePerformance& GetBurstablePerformance() const{ return m_burstablePerformance; }

    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }

    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBurstablePerformance(const BurstablePerformance& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }

    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBurstablePerformance(BurstablePerformance&& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = std::move(value); }

    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirements& WithBurstablePerformance(const BurstablePerformance& value) { SetBurstablePerformance(value); return *this;}

    /**
     * <p>Indicates whether burstable performance instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirements& WithBurstablePerformance(BurstablePerformance&& value) { SetBurstablePerformance(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types must provide On-Demand Instance hibernation
     * support.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetRequireHibernateSupport() const{ return m_requireHibernateSupport; }

    /**
     * <p>Indicates whether instance types must provide On-Demand Instance hibernation
     * support.</p> <p>Default: <code>false</code> </p>
     */
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }

    /**
     * <p>Indicates whether instance types must provide On-Demand Instance hibernation
     * support.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }

    /**
     * <p>Indicates whether instance types must provide On-Demand Instance hibernation
     * support.</p> <p>Default: <code>false</code> </p>
     */
    inline InstanceRequirements& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}


    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline const NetworkInterfaceCountRequest& GetNetworkInterfaceCount() const{ return m_networkInterfaceCount; }

    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetNetworkInterfaceCount(const NetworkInterfaceCountRequest& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = value; }

    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetNetworkInterfaceCount(NetworkInterfaceCountRequest&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithNetworkInterfaceCount(const NetworkInterfaceCountRequest& value) { SetNetworkInterfaceCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of network interfaces for an instance
     * type.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithNetworkInterfaceCount(NetworkInterfaceCountRequest&& value) { SetNetworkInterfaceCount(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline const LocalStorage& GetLocalStorage() const{ return m_localStorage; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline void SetLocalStorage(const LocalStorage& value) { m_localStorageHasBeenSet = true; m_localStorage = value; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline void SetLocalStorage(LocalStorage&& value) { m_localStorageHasBeenSet = true; m_localStorage = std::move(value); }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline InstanceRequirements& WithLocalStorage(const LocalStorage& value) { SetLocalStorage(value); return *this;}

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: <code>included</code> </p>
     */
    inline InstanceRequirements& WithLocalStorage(LocalStorage&& value) { SetLocalStorage(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline const Aws::Vector<LocalStorageType>& GetLocalStorageTypes() const{ return m_localStorageTypes; }

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline void SetLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = value; }

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline void SetLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::move(value); }

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline InstanceRequirements& WithLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { SetLocalStorageTypes(value); return *this;}

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline InstanceRequirements& WithLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { SetLocalStorageTypes(std::move(value)); return *this;}

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline InstanceRequirements& AddLocalStorageTypes(const LocalStorageType& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }

    /**
     * <p>Indicates the type of local storage that is required.</p> <ul> <li> <p>For
     * instance types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p>
     * </li> <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: Any local storage type</p>
     */
    inline InstanceRequirements& AddLocalStorageTypes(LocalStorageType&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline const TotalLocalStorageGBRequest& GetTotalLocalStorageGB() const{ return m_totalLocalStorageGB; }

    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }

    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetTotalLocalStorageGB(const TotalLocalStorageGBRequest& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = value; }

    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetTotalLocalStorageGB(TotalLocalStorageGBRequest&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::move(value); }

    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithTotalLocalStorageGB(const TotalLocalStorageGBRequest& value) { SetTotalLocalStorageGB(value); return *this;}

    /**
     * <p>The minimum and maximum total local storage size for an instance type, in
     * GB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithTotalLocalStorageGB(TotalLocalStorageGBRequest&& value) { SetTotalLocalStorageGB(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline const BaselineEbsBandwidthMbpsRequest& GetBaselineEbsBandwidthMbps() const{ return m_baselineEbsBandwidthMbps; }

    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }

    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbpsRequest& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = value; }

    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsRequest&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::move(value); }

    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbpsRequest& value) { SetBaselineEbsBandwidthMbps(value); return *this;}

    /**
     * <p>The minimum and maximum baseline bandwidth performance for an instance type,
     * in Mbps. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsRequest&& value) { SetBaselineEbsBandwidthMbps(std::move(value)); return *this;}


    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirements& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirements& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirements& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>Lists the accelerator types that must be on an instance type.</p> <ul> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with FPGA accelerators, specify
     * <code>fpga</code>.</p> </li> <li> <p>For instance types with inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirements& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline const AcceleratorCountRequest& GetAcceleratorCount() const{ return m_acceleratorCount; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline void SetAcceleratorCount(const AcceleratorCountRequest& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline void SetAcceleratorCount(AcceleratorCountRequest&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithAcceleratorCount(const AcceleratorCountRequest& value) { SetAcceleratorCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) for an instance type.</p> <p>To exclude
     * accelerator-enabled instance types, set <code>Max</code> to <code>0</code>.</p>
     * <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithAcceleratorCount(AcceleratorCountRequest&& value) { SetAcceleratorCount(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline const Aws::Vector<AcceleratorManufacturer>& GetAcceleratorManufacturers() const{ return m_acceleratorManufacturers; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline bool AcceleratorManufacturersHasBeenSet() const { return m_acceleratorManufacturersHasBeenSet; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline void SetAcceleratorManufacturers(const Aws::Vector<AcceleratorManufacturer>& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = value; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline void SetAcceleratorManufacturers(Aws::Vector<AcceleratorManufacturer>&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = std::move(value); }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirements& WithAcceleratorManufacturers(const Aws::Vector<AcceleratorManufacturer>& value) { SetAcceleratorManufacturers(value); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirements& WithAcceleratorManufacturers(Aws::Vector<AcceleratorManufacturer>&& value) { SetAcceleratorManufacturers(std::move(value)); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirements& AddAcceleratorManufacturers(const AcceleratorManufacturer& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirements& AddAcceleratorManufacturers(AcceleratorManufacturer&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline const Aws::Vector<AcceleratorName>& GetAcceleratorNames() const{ return m_acceleratorNames; }

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline void SetAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = value; }

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline void SetAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::move(value); }

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline InstanceRequirements& WithAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { SetAcceleratorNames(value); return *this;}

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline InstanceRequirements& WithAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { SetAcceleratorNames(std::move(value)); return *this;}

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline InstanceRequirements& AddAcceleratorNames(const AcceleratorName& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }

    /**
     * <p>Lists the accelerators that must be on an instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline InstanceRequirements& AddAcceleratorNames(AcceleratorName&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline const AcceleratorTotalMemoryMiBRequest& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }

    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }

    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRequest& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }

    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRequest&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }

    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRequest& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}

    /**
     * <p>The minimum and maximum total memory size for the accelerators on an instance
     * type, in MiB.</p> <p>Default: No minimum or maximum</p>
     */
    inline InstanceRequirements& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRequest&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}

  private:

    VCpuCountRequest m_vCpuCount;
    bool m_vCpuCountHasBeenSet;

    MemoryMiBRequest m_memoryMiB;
    bool m_memoryMiBHasBeenSet;

    Aws::Vector<CpuManufacturer> m_cpuManufacturers;
    bool m_cpuManufacturersHasBeenSet;

    MemoryGiBPerVCpuRequest m_memoryGiBPerVCpu;
    bool m_memoryGiBPerVCpuHasBeenSet;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet;

    Aws::Vector<InstanceGeneration> m_instanceGenerations;
    bool m_instanceGenerationsHasBeenSet;

    int m_spotMaxPricePercentageOverLowestPrice;
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet;

    int m_onDemandMaxPricePercentageOverLowestPrice;
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet;

    BareMetal m_bareMetal;
    bool m_bareMetalHasBeenSet;

    BurstablePerformance m_burstablePerformance;
    bool m_burstablePerformanceHasBeenSet;

    bool m_requireHibernateSupport;
    bool m_requireHibernateSupportHasBeenSet;

    NetworkInterfaceCountRequest m_networkInterfaceCount;
    bool m_networkInterfaceCountHasBeenSet;

    LocalStorage m_localStorage;
    bool m_localStorageHasBeenSet;

    Aws::Vector<LocalStorageType> m_localStorageTypes;
    bool m_localStorageTypesHasBeenSet;

    TotalLocalStorageGBRequest m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet;

    BaselineEbsBandwidthMbpsRequest m_baselineEbsBandwidthMbps;
    bool m_baselineEbsBandwidthMbpsHasBeenSet;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet;

    AcceleratorCountRequest m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet;

    Aws::Vector<AcceleratorManufacturer> m_acceleratorManufacturers;
    bool m_acceleratorManufacturersHasBeenSet;

    Aws::Vector<AcceleratorName> m_acceleratorNames;
    bool m_acceleratorNamesHasBeenSet;

    AcceleratorTotalMemoryMiBRequest m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
