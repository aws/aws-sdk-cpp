/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeInstanceTypesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstanceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceTypes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeInstanceTypesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::Vector<InstanceType>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<InstanceType>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<InstanceType>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline DescribeInstanceTypesRequest& WithInstanceTypes(const Aws::Vector<InstanceType>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline DescribeInstanceTypesRequest& WithInstanceTypes(Aws::Vector<InstanceType>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline DescribeInstanceTypesRequest& AddInstanceTypes(const InstanceType& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instance types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline DescribeInstanceTypesRequest& AddInstanceTypes(InstanceType&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline DescribeInstanceTypesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline DescribeInstanceTypesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline DescribeInstanceTypesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>auto-recovery-supported</code> - Indicates whether auto recovery
     * is supported (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>bare-metal</code> - Indicates whether it is a bare metal instance type
     * (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>burstable-performance-supported</code> - Indicates whether it is a
     * burstable performance instance type (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>current-generation</code> -
     * Indicates whether this instance type is the latest generation instance type of
     * an instance family (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-bandwidth-in-mbps</code> - The
     * baseline bandwidth performance for an EBS-optimized instance type, in Mbps.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-info.baseline-iops</code> - The
     * baseline input/output storage operations per second for an EBS-optimized
     * instance type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.baseline-throughput-in-mbps</code> - The
     * baseline throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-bandwidth-in-mbps</code> - The maximum
     * bandwidth performance for an EBS-optimized instance type, in Mbps.</p> </li>
     * <li> <p> <code>ebs-info.ebs-optimized-info.maximum-iops</code> - The maximum
     * input/output storage operations per second for an EBS-optimized instance
     * type.</p> </li> <li> <p>
     * <code>ebs-info.ebs-optimized-info.maximum-throughput-in-mbps</code> - The
     * maximum throughput performance for an EBS-optimized instance type, in MB/s.</p>
     * </li> <li> <p> <code>ebs-info.ebs-optimized-support</code> - Indicates whether
     * the instance type is EBS-optimized (<code>supported</code> |
     * <code>unsupported</code> | <code>default</code>).</p> </li> <li> <p>
     * <code>ebs-info.encryption-support</code> - Indicates whether EBS encryption is
     * supported (<code>supported</code> | <code>unsupported</code>).</p> </li> <li>
     * <p> <code>ebs-info.nvme-support</code> - Indicates whether non-volatile memory
     * express (NVMe) is supported for EBS volumes (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>free-tier-eligible</code> - Indicates whether the instance type is
     * eligible to use in the free tier (<code>true</code> | <code>false</code>).</p>
     * </li> <li> <p> <code>hibernation-supported</code> - Indicates whether On-Demand
     * hibernation is supported (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>hypervisor</code> - The hypervisor (<code>nitro</code> |
     * <code>xen</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.disk.count</code> - The number of local disks.</p>
     * </li> <li> <p> <code>instance-storage-info.disk.size-in-gb</code> - The storage
     * size of each instance storage disk, in GB.</p> </li> <li> <p>
     * <code>instance-storage-info.disk.type</code> - The storage technology for the
     * local instance storage disks (<code>hdd</code> | <code>ssd</code>).</p> </li>
     * <li> <p> <code>instance-storage-info.encryption-support</code> - Indicates
     * whether data is encrypted at rest (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.nvme-support</code> - Indicates whether non-volatile
     * memory express (NVMe) is supported for instance store (<code>required</code> |
     * <code>supported</code> | <code>unsupported</code>).</p> </li> <li> <p>
     * <code>instance-storage-info.total-size-in-gb</code> - The total amount of
     * storage available from all local instance storage, in GB.</p> </li> <li> <p>
     * <code>instance-storage-supported</code> - Indicates whether the instance type
     * has local instance storage (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>instance-type</code> - The instance type (for example
     * <code>c5.2xlarge</code> or c5*).</p> </li> <li> <p>
     * <code>memory-info.size-in-mib</code> - The memory size.</p> </li> <li> <p>
     * <code>network-info.efa-info.maximum-efa-interfaces</code> - The maximum number
     * of Elastic Fabric Adapters (EFAs) per instance.</p> </li> <li> <p>
     * <code>network-info.efa-supported</code> - Indicates whether the instance type
     * supports Elastic Fabric Adapter (EFA) (<code>true</code> |
     * <code>false</code>).</p> </li> <li> <p> <code>network-info.ena-support</code> -
     * Indicates whether Elastic Network Adapter (ENA) is supported or required
     * (<code>required</code> | <code>supported</code> | <code>unsupported</code>).</p>
     * </li> <li> <p> <code>network-info.encryption-in-transit-supported</code> -
     * Indicates whether the instance type automatically encrypts in-transit traffic
     * between instances (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.ipv4-addresses-per-interface</code> - The maximum number of
     * private IPv4 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-addresses-per-interface</code> - The maximum number of
     * private IPv6 addresses per network interface.</p> </li> <li> <p>
     * <code>network-info.ipv6-supported</code> - Indicates whether the instance type
     * supports IPv6 (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>network-info.maximum-network-cards</code> - The maximum number of network
     * cards per instance.</p> </li> <li> <p>
     * <code>network-info.maximum-network-interfaces</code> - The maximum number of
     * network interfaces per instance.</p> </li> <li> <p>
     * <code>network-info.network-performance</code> - The network performance (for
     * example, "25 Gigabit").</p> </li> <li> <p>
     * <code>processor-info.supported-architecture</code> - The CPU architecture
     * (<code>arm64</code> | <code>i386</code> | <code>x86_64</code>).</p> </li> <li>
     * <p> <code>processor-info.sustained-clock-speed-in-ghz</code> - The CPU clock
     * speed, in GHz.</p> </li> <li> <p> <code>supported-boot-mode</code> - The boot
     * mode (<code>legacy-bios</code> | <code>uefi</code>).</p> </li> <li> <p>
     * <code>supported-root-device-type</code> - The root device type (<code>ebs</code>
     * | <code>instance-store</code>).</p> </li> <li> <p>
     * <code>supported-usage-class</code> - The usage class (<code>on-demand</code> |
     * <code>spot</code>).</p> </li> <li> <p>
     * <code>supported-virtualization-type</code> - The virtualization type
     * (<code>hvm</code> | <code>paravirtual</code>).</p> </li> <li> <p>
     * <code>vcpu-info.default-cores</code> - The default number of cores for the
     * instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-threads-per-core</code> - The default number of threads
     * per core for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.default-vcpus</code> - The default number of vCPUs for the
     * instance type.</p> </li> <li> <p> <code>vcpu-info.valid-cores</code> - The
     * number of cores that can be configured for the instance type.</p> </li> <li> <p>
     * <code>vcpu-info.valid-threads-per-core</code> - The number of threads per core
     * that can be configured for the instance type. For example, "1" or "1,2".</p>
     * </li> </ul>
     */
    inline DescribeInstanceTypesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the next token
     * value.</p>
     */
    inline DescribeInstanceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeInstanceTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<InstanceType> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
