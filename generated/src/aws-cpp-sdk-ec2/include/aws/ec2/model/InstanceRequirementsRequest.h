/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VCpuCountRangeRequest.h>
#include <aws/ec2/model/MemoryMiBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MemoryGiBPerVCpuRequest.h>
#include <aws/ec2/model/BareMetal.h>
#include <aws/ec2/model/BurstablePerformance.h>
#include <aws/ec2/model/NetworkInterfaceCountRequest.h>
#include <aws/ec2/model/LocalStorage.h>
#include <aws/ec2/model/TotalLocalStorageGBRequest.h>
#include <aws/ec2/model/BaselineEbsBandwidthMbpsRequest.h>
#include <aws/ec2/model/AcceleratorCountRequest.h>
#include <aws/ec2/model/AcceleratorTotalMemoryMiBRequest.h>
#include <aws/ec2/model/NetworkBandwidthGbpsRequest.h>
#include <aws/ec2/model/CpuManufacturer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceGeneration.h>
#include <aws/ec2/model/LocalStorageType.h>
#include <aws/ec2/model/AcceleratorType.h>
#include <aws/ec2/model/AcceleratorManufacturer.h>
#include <aws/ec2/model/AcceleratorName.h>
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
   * <p>The attributes for the instance types. When you specify instance attributes,
   * Amazon EC2 will identify instance types with these attributes.</p> <p>When you
   * specify multiple attributes, you get instance types that satisfy all of the
   * specified attributes. If you specify multiple values for an attribute, you get
   * instance types that satisfy any of the specified values.</p> <p>To limit the
   * list of instance types from which Amazon EC2 can identify matching instance
   * types, you can use one of the following parameters, but not both in the same
   * request:</p> <ul> <li> <p> <code>AllowedInstanceTypes</code> - The instance
   * types to include in the list. All other instance types are ignored, even if they
   * match your specified attributes.</p> </li> <li> <p>
   * <code>ExcludedInstanceTypes</code> - The instance types to exclude from the
   * list, even if they match your specified attributes.</p> </li> </ul> 
   * <p>You must specify <code>VCpuCount</code> and <code>MemoryMiB</code>. All other
   * attributes are optional. Any unspecified optional attribute is set to its
   * default.</p>  <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html">Attribute-based
   * instance type selection for EC2 Fleet</a>, <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-attribute-based-instance-type-selection.html">Attribute-based
   * instance type selection for Spot Fleet</a>, and <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
   * placement score</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceRequirementsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceRequirementsRequest
  {
  public:
    AWS_EC2_API InstanceRequirementsRequest();
    AWS_EC2_API InstanceRequirementsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceRequirementsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline const VCpuCountRangeRequest& GetVCpuCount() const{ return m_vCpuCount; }

    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline void SetVCpuCount(const VCpuCountRangeRequest& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }

    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline void SetVCpuCount(VCpuCountRangeRequest&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline InstanceRequirementsRequest& WithVCpuCount(const VCpuCountRangeRequest& value) { SetVCpuCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline InstanceRequirementsRequest& WithVCpuCount(VCpuCountRangeRequest&& value) { SetVCpuCount(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline const MemoryMiBRequest& GetMemoryMiB() const{ return m_memoryMiB; }

    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline void SetMemoryMiB(const MemoryMiBRequest& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }

    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline void SetMemoryMiB(MemoryMiBRequest&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }

    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline InstanceRequirementsRequest& WithMemoryMiB(const MemoryMiBRequest& value) { SetMemoryMiB(value); return *this;}

    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline InstanceRequirementsRequest& WithMemoryMiB(MemoryMiBRequest&& value) { SetMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline const Aws::Vector<CpuManufacturer>& GetCpuManufacturers() const{ return m_cpuManufacturers; }

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline void SetCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = value; }

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline void SetCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::move(value); }

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& WithCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { SetCpuManufacturers(value); return *this;}

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& WithCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { SetCpuManufacturers(std::move(value)); return *this;}

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& AddCpuManufacturers(const CpuManufacturer& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }

    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> </ul>  <p>Don't confuse the CPU manufacturer with the CPU
     * architecture. Instances will be launched with a compatible CPU architecture
     * based on the Amazon Machine Image (AMI) that you specify in your launch
     * template.</p>  <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& AddCpuManufacturers(CpuManufacturer&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const MemoryGiBPerVCpuRequest& GetMemoryGiBPerVCpu() const{ return m_memoryGiBPerVCpu; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetMemoryGiBPerVCpu(const MemoryGiBPerVCpuRequest& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = value; }

    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetMemoryGiBPerVCpu(MemoryGiBPerVCpuRequest&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::move(value); }

    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithMemoryGiBPerVCpu(const MemoryGiBPerVCpuRequest& value) { SetMemoryGiBPerVCpu(value); return *this;}

    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithMemoryGiBPerVCpu(MemoryGiBPerVCpuRequest&& value) { SetMemoryGiBPerVCpu(std::move(value)); return *this;}


    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline InstanceRequirementsRequest& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline InstanceRequirementsRequest& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline InstanceRequirementsRequest& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline InstanceRequirementsRequest& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * family, type, size, or generation. The following are examples:
     * <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will exclude the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will exclude all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>ExcludedInstanceTypes</code>, you
     * can't specify <code>AllowedInstanceTypes</code>.</p>  <p>Default: No
     * excluded instance types</p>
     */
    inline InstanceRequirementsRequest& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }


    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline const Aws::Vector<InstanceGeneration>& GetInstanceGenerations() const{ return m_instanceGenerations; }

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline void SetInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = value; }

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline void SetInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::move(value); }

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline InstanceRequirementsRequest& WithInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { SetInstanceGenerations(value); return *this;}

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline InstanceRequirementsRequest& WithInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { SetInstanceGenerations(std::move(value)); return *this;}

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline InstanceRequirementsRequest& AddInstanceGenerations(const InstanceGeneration& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }

    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline InstanceRequirementsRequest& AddInstanceGenerations(InstanceGeneration&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(std::move(value)); return *this; }


    /**
     * <p>The price protection threshold for Spot Instance. This is the maximum you’ll
     * pay for an Spot Instance, expressed as a percentage above the least expensive
     * current generation M, C, or R instance type with your specified attributes. When
     * Amazon EC2 selects instance types with your attributes, it excludes instance
     * types priced above your threshold.</p> <p>The parameter accepts an integer,
     * which Amazon EC2 interprets as a percentage.</p> <p>To turn off price
     * protection, specify a high value, such as <code>999999</code>.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const{ return m_spotMaxPricePercentageOverLowestPrice; }

    /**
     * <p>The price protection threshold for Spot Instance. This is the maximum you’ll
     * pay for an Spot Instance, expressed as a percentage above the least expensive
     * current generation M, C, or R instance type with your specified attributes. When
     * Amazon EC2 selects instance types with your attributes, it excludes instance
     * types priced above your threshold.</p> <p>The parameter accepts an integer,
     * which Amazon EC2 interprets as a percentage.</p> <p>To turn off price
     * protection, specify a high value, such as <code>999999</code>.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p>The price protection threshold for Spot Instance. This is the maximum you’ll
     * pay for an Spot Instance, expressed as a percentage above the least expensive
     * current generation M, C, or R instance type with your specified attributes. When
     * Amazon EC2 selects instance types with your attributes, it excludes instance
     * types priced above your threshold.</p> <p>The parameter accepts an integer,
     * which Amazon EC2 interprets as a percentage.</p> <p>To turn off price
     * protection, specify a high value, such as <code>999999</code>.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p>The price protection threshold for Spot Instance. This is the maximum you’ll
     * pay for an Spot Instance, expressed as a percentage above the least expensive
     * current generation M, C, or R instance type with your specified attributes. When
     * Amazon EC2 selects instance types with your attributes, it excludes instance
     * types priced above your threshold.</p> <p>The parameter accepts an integer,
     * which Amazon EC2 interprets as a percentage.</p> <p>To turn off price
     * protection, specify a high value, such as <code>999999</code>.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline InstanceRequirementsRequest& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>To turn
     * off price protection, specify a high value, such as <code>999999</code>.</p>
     * <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const{ return m_onDemandMaxPricePercentageOverLowestPrice; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>To turn
     * off price protection, specify a high value, such as <code>999999</code>.</p>
     * <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>To turn
     * off price protection, specify a high value, such as <code>999999</code>.</p>
     * <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p>The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>To turn
     * off price protection, specify a high value, such as <code>999999</code>.</p>
     * <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline InstanceRequirementsRequest& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline const BareMetal& GetBareMetal() const{ return m_bareMetal; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline void SetBareMetal(const BareMetal& value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline void SetBareMetal(BareMetal&& value) { m_bareMetalHasBeenSet = true; m_bareMetal = std::move(value); }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline InstanceRequirementsRequest& WithBareMetal(const BareMetal& value) { SetBareMetal(value); return *this;}

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline InstanceRequirementsRequest& WithBareMetal(BareMetal&& value) { SetBareMetal(std::move(value)); return *this;}


    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline const BurstablePerformance& GetBurstablePerformance() const{ return m_burstablePerformance; }

    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }

    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBurstablePerformance(const BurstablePerformance& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }

    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline void SetBurstablePerformance(BurstablePerformance&& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = std::move(value); }

    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirementsRequest& WithBurstablePerformance(const BurstablePerformance& value) { SetBurstablePerformance(value); return *this;}

    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline InstanceRequirementsRequest& WithBurstablePerformance(BurstablePerformance&& value) { SetBurstablePerformance(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetRequireHibernateSupport() const{ return m_requireHibernateSupport; }

    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }

    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }

    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline InstanceRequirementsRequest& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}


    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const NetworkInterfaceCountRequest& GetNetworkInterfaceCount() const{ return m_networkInterfaceCount; }

    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetNetworkInterfaceCount(const NetworkInterfaceCountRequest& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = value; }

    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetNetworkInterfaceCount(NetworkInterfaceCountRequest&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithNetworkInterfaceCount(const NetworkInterfaceCountRequest& value) { SetNetworkInterfaceCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithNetworkInterfaceCount(NetworkInterfaceCountRequest&& value) { SetNetworkInterfaceCount(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline const LocalStorage& GetLocalStorage() const{ return m_localStorage; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline void SetLocalStorage(const LocalStorage& value) { m_localStorageHasBeenSet = true; m_localStorage = value; }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline void SetLocalStorage(LocalStorage&& value) { m_localStorageHasBeenSet = true; m_localStorage = std::move(value); }

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline InstanceRequirementsRequest& WithLocalStorage(const LocalStorage& value) { SetLocalStorage(value); return *this;}

    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline InstanceRequirementsRequest& WithLocalStorage(LocalStorage&& value) { SetLocalStorage(std::move(value)); return *this;}


    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline const Aws::Vector<LocalStorageType>& GetLocalStorageTypes() const{ return m_localStorageTypes; }

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline void SetLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = value; }

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline void SetLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::move(value); }

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline InstanceRequirementsRequest& WithLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { SetLocalStorageTypes(value); return *this;}

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline InstanceRequirementsRequest& WithLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { SetLocalStorageTypes(std::move(value)); return *this;}

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline InstanceRequirementsRequest& AddLocalStorageTypes(const LocalStorageType& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }

    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline InstanceRequirementsRequest& AddLocalStorageTypes(LocalStorageType&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline const TotalLocalStorageGBRequest& GetTotalLocalStorageGB() const{ return m_totalLocalStorageGB; }

    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline void SetTotalLocalStorageGB(const TotalLocalStorageGBRequest& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = value; }

    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline void SetTotalLocalStorageGB(TotalLocalStorageGBRequest&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::move(value); }

    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithTotalLocalStorageGB(const TotalLocalStorageGBRequest& value) { SetTotalLocalStorageGB(value); return *this;}

    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithTotalLocalStorageGB(TotalLocalStorageGBRequest&& value) { SetTotalLocalStorageGB(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline const BaselineEbsBandwidthMbpsRequest& GetBaselineEbsBandwidthMbps() const{ return m_baselineEbsBandwidthMbps; }

    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }

    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline void SetBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbpsRequest& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = value; }

    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline void SetBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsRequest&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::move(value); }

    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbpsRequest& value) { SetBaselineEbsBandwidthMbps(value); return *this;}

    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsRequest&& value) { SetBaselineEbsBandwidthMbps(std::move(value)); return *this;}


    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>To
     * include instance types with GPU hardware, specify <code>gpu</code>.</p> </li>
     * <li> <p>To include instance types with FPGA hardware, specify
     * <code>fpga</code>.</p> </li> <li> <p>To include instance types with inference
     * hardware, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const AcceleratorCountRequest& GetAcceleratorCount() const{ return m_acceleratorCount; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetAcceleratorCount(const AcceleratorCountRequest& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline void SetAcceleratorCount(AcceleratorCountRequest&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorCount(const AcceleratorCountRequest& value) { SetAcceleratorCount(value); return *this;}

    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorCount(AcceleratorCountRequest&& value) { SetAcceleratorCount(std::move(value)); return *this;}


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
    inline InstanceRequirementsRequest& WithAcceleratorManufacturers(const Aws::Vector<AcceleratorManufacturer>& value) { SetAcceleratorManufacturers(value); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorManufacturers(Aws::Vector<AcceleratorManufacturer>&& value) { SetAcceleratorManufacturers(std::move(value)); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorManufacturers(const AcceleratorManufacturer& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with NVIDIA devices, specify
     * <code>nvidia</code>.</p> </li> <li> <p>For instance types with AMD devices,
     * specify <code>amd</code>.</p> </li> <li> <p>For instance types with Amazon Web
     * Services devices, specify <code>amazon-web-services</code>.</p> </li> <li>
     * <p>For instance types with Xilinx devices, specify <code>xilinx</code>.</p>
     * </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorManufacturers(AcceleratorManufacturer&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(std::move(value)); return *this; }


    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline const Aws::Vector<AcceleratorName>& GetAcceleratorNames() const{ return m_acceleratorNames; }

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline void SetAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = value; }

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline void SetAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::move(value); }

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { SetAcceleratorNames(value); return *this;}

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { SetAcceleratorNames(std::move(value)); return *this;}

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorNames(const AcceleratorName& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }

    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA K80 GPUs, specify
     * <code>k80</code>.</p> </li> <li> <p>For instance types with NVIDIA T4 GPUs,
     * specify <code>t4</code>.</p> </li> <li> <p>For instance types with NVIDIA M60
     * GPUs, specify <code>m60</code>.</p> </li> <li> <p>For instance types with AMD
     * Radeon Pro V520 GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li>
     * <p>For instance types with Xilinx VU9P FPGAs, specify <code> vu9p</code>.</p>
     * </li> <li> <p>For instance types with Amazon Web Services Inferentia chips,
     * specify <code>inferentia</code>.</p> </li> <li> <p>For instance types with
     * NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li> </ul> <p>Default:
     * Any accelerator</p>
     */
    inline InstanceRequirementsRequest& AddAcceleratorNames(AcceleratorName&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline const AcceleratorTotalMemoryMiBRequest& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }

    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRequest& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }

    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRequest&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }

    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiBRequest& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}

    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBRequest&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline const NetworkBandwidthGbpsRequest& GetNetworkBandwidthGbps() const{ return m_networkBandwidthGbps; }

    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline bool NetworkBandwidthGbpsHasBeenSet() const { return m_networkBandwidthGbpsHasBeenSet; }

    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline void SetNetworkBandwidthGbps(const NetworkBandwidthGbpsRequest& value) { m_networkBandwidthGbpsHasBeenSet = true; m_networkBandwidthGbps = value; }

    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline void SetNetworkBandwidthGbps(NetworkBandwidthGbpsRequest&& value) { m_networkBandwidthGbpsHasBeenSet = true; m_networkBandwidthGbps = std::move(value); }

    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithNetworkBandwidthGbps(const NetworkBandwidthGbpsRequest& value) { SetNetworkBandwidthGbps(value); return *this;}

    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline InstanceRequirementsRequest& WithNetworkBandwidthGbps(NetworkBandwidthGbpsRequest&& value) { SetNetworkBandwidthGbps(std::move(value)); return *this;}


    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const{ return m_allowedInstanceTypes; }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline void SetAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = value; }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline void SetAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = std::move(value); }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline InstanceRequirementsRequest& WithAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetAllowedInstanceTypes(value); return *this;}

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline InstanceRequirementsRequest& WithAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetAllowedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline InstanceRequirementsRequest& AddAllowedInstanceTypes(const Aws::String& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline InstanceRequirementsRequest& AddAllowedInstanceTypes(Aws::String&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline InstanceRequirementsRequest& AddAllowedInstanceTypes(const char* value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }

  private:

    VCpuCountRangeRequest m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;

    MemoryMiBRequest m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    Aws::Vector<CpuManufacturer> m_cpuManufacturers;
    bool m_cpuManufacturersHasBeenSet = false;

    MemoryGiBPerVCpuRequest m_memoryGiBPerVCpu;
    bool m_memoryGiBPerVCpuHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::Vector<InstanceGeneration> m_instanceGenerations;
    bool m_instanceGenerationsHasBeenSet = false;

    int m_spotMaxPricePercentageOverLowestPrice;
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet = false;

    int m_onDemandMaxPricePercentageOverLowestPrice;
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = false;

    BareMetal m_bareMetal;
    bool m_bareMetalHasBeenSet = false;

    BurstablePerformance m_burstablePerformance;
    bool m_burstablePerformanceHasBeenSet = false;

    bool m_requireHibernateSupport;
    bool m_requireHibernateSupportHasBeenSet = false;

    NetworkInterfaceCountRequest m_networkInterfaceCount;
    bool m_networkInterfaceCountHasBeenSet = false;

    LocalStorage m_localStorage;
    bool m_localStorageHasBeenSet = false;

    Aws::Vector<LocalStorageType> m_localStorageTypes;
    bool m_localStorageTypesHasBeenSet = false;

    TotalLocalStorageGBRequest m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet = false;

    BaselineEbsBandwidthMbpsRequest m_baselineEbsBandwidthMbps;
    bool m_baselineEbsBandwidthMbpsHasBeenSet = false;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    AcceleratorCountRequest m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    Aws::Vector<AcceleratorManufacturer> m_acceleratorManufacturers;
    bool m_acceleratorManufacturersHasBeenSet = false;

    Aws::Vector<AcceleratorName> m_acceleratorNames;
    bool m_acceleratorNamesHasBeenSet = false;

    AcceleratorTotalMemoryMiBRequest m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    NetworkBandwidthGbpsRequest m_networkBandwidthGbps;
    bool m_networkBandwidthGbpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedInstanceTypes;
    bool m_allowedInstanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
