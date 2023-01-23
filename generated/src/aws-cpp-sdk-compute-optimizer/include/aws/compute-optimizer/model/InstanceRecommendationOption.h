/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/MigrationEffort.h>
#include <aws/compute-optimizer/model/UtilizationMetric.h>
#include <aws/compute-optimizer/model/PlatformDifference.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes a recommendation option for an Amazon EC2 instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/InstanceRecommendationOption">AWS
   * API Reference</a></p>
   */
  class InstanceRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API InstanceRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline InstanceRecommendationOption& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline InstanceRecommendationOption& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the instance recommendation.</p>
     */
    inline InstanceRecommendationOption& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline const Aws::Vector<UtilizationMetric>& GetProjectedUtilizationMetrics() const{ return m_projectedUtilizationMetrics; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline void SetProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline InstanceRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<UtilizationMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline InstanceRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<UtilizationMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline InstanceRecommendationOption& AddProjectedUtilizationMetrics(const UtilizationMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the projected utilization metrics of the
     * instance recommendation option.</p>  <p>The <code>Cpu</code> and
     * <code>Memory</code> metrics are the only projected utilization metrics returned.
     * Additionally, the <code>Memory</code> metric is returned only for resources that
     * have the unified CloudWatch agent installed on them. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/metrics.html#cw-agent">Enabling
     * Memory Utilization with the CloudWatch Agent</a>.</p> 
     */
    inline InstanceRecommendationOption& AddProjectedUtilizationMetrics(UtilizationMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline const Aws::Vector<PlatformDifference>& GetPlatformDifferences() const{ return m_platformDifferences; }

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline bool PlatformDifferencesHasBeenSet() const { return m_platformDifferencesHasBeenSet; }

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline void SetPlatformDifferences(const Aws::Vector<PlatformDifference>& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences = value; }

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline void SetPlatformDifferences(Aws::Vector<PlatformDifference>&& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences = std::move(value); }

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline InstanceRecommendationOption& WithPlatformDifferences(const Aws::Vector<PlatformDifference>& value) { SetPlatformDifferences(value); return *this;}

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline InstanceRecommendationOption& WithPlatformDifferences(Aws::Vector<PlatformDifference>&& value) { SetPlatformDifferences(std::move(value)); return *this;}

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline InstanceRecommendationOption& AddPlatformDifferences(const PlatformDifference& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences.push_back(value); return *this; }

    /**
     * <p>Describes the configuration differences between the current instance and the
     * recommended instance type. You should consider the configuration differences
     * before migrating your workloads from the current instance to the recommended
     * instance type. The <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-resize.html">Change
     * the instance type guide for Linux</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-resize.html">Change
     * the instance type guide for Windows</a> provide general guidance for getting
     * started with an instance migration.</p> <p>Platform differences include:</p>
     * <ul> <li> <p> <b> <code>Hypervisor</code> </b> — The hypervisor of the
     * recommended instance type is different than that of the current instance. For
     * example, the recommended instance type uses a Nitro hypervisor and the current
     * instance uses a Xen hypervisor. The differences that you should consider between
     * these hypervisors are covered in the <a
     * href="http://aws.amazon.com/ec2/faqs/#Nitro_Hypervisor">Nitro Hypervisor</a>
     * section of the Amazon EC2 frequently asked questions. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#ec2-nitro-instances">Instances
     * built on the Nitro System</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>NetworkInterface</code> </b> — The
     * network interface of the recommended instance type is different than that of the
     * current instance. For example, the recommended instance type supports enhanced
     * networking and the current instance might not. To enable enhanced networking for
     * the recommended instance type, you must install the Elastic Network Adapter
     * (ENA) driver or the Intel 82599 Virtual Function driver. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/enhanced-networking.html">Enhanced
     * networking on Linux</a> in the <i>Amazon EC2 User Guide for Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/enhanced-networking.html">Enhanced
     * networking on Windows</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>StorageInterface</code> </b> — The storage interface of
     * the recommended instance type is different than that of the current instance.
     * For example, the recommended instance type uses an NVMe storage interface and
     * the current instance does not. To access NVMe volumes for the recommended
     * instance type, you will need to install or upgrade the NVMe driver. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Linux instances</a> in the <i>Amazon EC2 User Guide for
     * Linux</i>, or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/nvme-ebs-volumes.html">Amazon
     * EBS and NVMe on Windows instances</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>InstanceStoreAvailability</code> </b>
     * — The recommended instance type does not support instance store volumes and the
     * current instance does. Before migrating, you might need to back up the data on
     * your instance store volumes if you want to preserve them. For more information,
     * see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/back-up-instance-store-ebs/">How
     * do I back up an instance store volume on my Amazon EC2 instance to Amazon
     * EBS?</a> in the <i>Amazon Web Services Premium Support Knowledge Base</i>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Linux</i>, or see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/instance-types.html#instance-networking-storage">Networking
     * and storage features</a> and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide for Windows</i>.</p>
     * </li> <li> <p> <b> <code>VirtualizationType</code> </b> — The recommended
     * instance type uses the hardware virtual machine (HVM) virtualization type and
     * the current instance uses the paravirtual (PV) virtualization type. For more
     * information about the differences between these virtualization types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/virtualization_types.html">Linux
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for Linux</i>, or
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/windows-ami-version-history.html#virtualization-types">Windows
     * AMI virtualization types</a> in the <i>Amazon EC2 User Guide for
     * Windows</i>.</p> </li> <li> <p> <b> <code>Architecture</code> </b> — The CPU
     * architecture between the recommended instance type and the current instance is
     * different. For example, the recommended instance type might use an Arm CPU
     * architecture and the current instance type might use a different one, such as
     * x86. Before migrating, you should consider recompiling the software on your
     * instance for the new architecture. Alternatively, you might switch to an Amazon
     * Machine Image (AMI) that supports the new architecture. For more information
     * about the CPU architecture for each instance type, see <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instance
     * Types</a>.</p> </li> </ul>
     */
    inline InstanceRecommendationOption& AddPlatformDifferences(PlatformDifference&& value) { m_platformDifferencesHasBeenSet = true; m_platformDifferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The performance risk of the instance recommendation option.</p>
     * <p>Performance risk indicates the likelihood of the recommended instance type
     * not meeting the resource needs of your workload. Compute Optimizer calculates an
     * individual performance risk score for each specification of the recommended
     * instance, including CPU, memory, EBS throughput, EBS IOPS, disk throughput, disk
     * IOPS, network throughput, and network PPS. The performance risk of the
     * recommended instance is calculated as the maximum performance risk score across
     * the analyzed resource specifications.</p> <p>The value ranges from
     * <code>0</code> - <code>4</code>, with <code>0</code> meaning that the
     * recommended resource is predicted to always provide enough hardware capability.
     * The higher the performance risk is, the more likely you should validate whether
     * the recommendation will meet the performance requirements of your workload
     * before migrating your resource.</p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }

    /**
     * <p>The performance risk of the instance recommendation option.</p>
     * <p>Performance risk indicates the likelihood of the recommended instance type
     * not meeting the resource needs of your workload. Compute Optimizer calculates an
     * individual performance risk score for each specification of the recommended
     * instance, including CPU, memory, EBS throughput, EBS IOPS, disk throughput, disk
     * IOPS, network throughput, and network PPS. The performance risk of the
     * recommended instance is calculated as the maximum performance risk score across
     * the analyzed resource specifications.</p> <p>The value ranges from
     * <code>0</code> - <code>4</code>, with <code>0</code> meaning that the
     * recommended resource is predicted to always provide enough hardware capability.
     * The higher the performance risk is, the more likely you should validate whether
     * the recommendation will meet the performance requirements of your workload
     * before migrating your resource.</p>
     */
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }

    /**
     * <p>The performance risk of the instance recommendation option.</p>
     * <p>Performance risk indicates the likelihood of the recommended instance type
     * not meeting the resource needs of your workload. Compute Optimizer calculates an
     * individual performance risk score for each specification of the recommended
     * instance, including CPU, memory, EBS throughput, EBS IOPS, disk throughput, disk
     * IOPS, network throughput, and network PPS. The performance risk of the
     * recommended instance is calculated as the maximum performance risk score across
     * the analyzed resource specifications.</p> <p>The value ranges from
     * <code>0</code> - <code>4</code>, with <code>0</code> meaning that the
     * recommended resource is predicted to always provide enough hardware capability.
     * The higher the performance risk is, the more likely you should validate whether
     * the recommendation will meet the performance requirements of your workload
     * before migrating your resource.</p>
     */
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }

    /**
     * <p>The performance risk of the instance recommendation option.</p>
     * <p>Performance risk indicates the likelihood of the recommended instance type
     * not meeting the resource needs of your workload. Compute Optimizer calculates an
     * individual performance risk score for each specification of the recommended
     * instance, including CPU, memory, EBS throughput, EBS IOPS, disk throughput, disk
     * IOPS, network throughput, and network PPS. The performance risk of the
     * recommended instance is calculated as the maximum performance risk score across
     * the analyzed resource specifications.</p> <p>The value ranges from
     * <code>0</code> - <code>4</code>, with <code>0</code> meaning that the
     * recommended resource is predicted to always provide enough hardware capability.
     * The higher the performance risk is, the more likely you should validate whether
     * the recommendation will meet the performance requirements of your workload
     * before migrating your resource.</p>
     */
    inline InstanceRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}


    /**
     * <p>The rank of the instance recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p>The rank of the instance recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p>The rank of the instance recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p>The rank of the instance recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline InstanceRecommendationOption& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }

    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }

    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }

    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }

    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline InstanceRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}

    /**
     * <p>An object that describes the savings opportunity for the instance
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline InstanceRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}


    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline const MigrationEffort& GetMigrationEffort() const{ return m_migrationEffort; }

    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline bool MigrationEffortHasBeenSet() const { return m_migrationEffortHasBeenSet; }

    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline void SetMigrationEffort(const MigrationEffort& value) { m_migrationEffortHasBeenSet = true; m_migrationEffort = value; }

    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline void SetMigrationEffort(MigrationEffort&& value) { m_migrationEffortHasBeenSet = true; m_migrationEffort = std::move(value); }

    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline InstanceRecommendationOption& WithMigrationEffort(const MigrationEffort& value) { SetMigrationEffort(value); return *this;}

    /**
     * <p>The level of effort required to migrate from the current instance type to the
     * recommended instance type.</p> <p>For example, the migration effort is
     * <code>Low</code> if Amazon EMR is the inferred workload type and an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>Medium</code> if a workload type couldn't be inferred but an Amazon Web
     * Services Graviton instance type is recommended. The migration effort is
     * <code>VeryLow</code> if both the current and recommended instance types are of
     * the same CPU architecture.</p>
     */
    inline InstanceRecommendationOption& WithMigrationEffort(MigrationEffort&& value) { SetMigrationEffort(std::move(value)); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<UtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    Aws::Vector<PlatformDifference> m_platformDifferences;
    bool m_platformDifferencesHasBeenSet = false;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    MigrationEffort m_migrationEffort;
    bool m_migrationEffortHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
