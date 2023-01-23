/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/FilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a filter that returns a more specific list of recommendations. Use
   * this filter with the <a>GetAutoScalingGroupRecommendations</a> and
   * <a>GetEC2InstanceRecommendations</a> actions.</p> <p>You can use
   * <code>EBSFilter</code> with the <a>GetEBSVolumeRecommendations</a> action,
   * <code>LambdaFunctionRecommendationFilter</code> with the
   * <a>GetLambdaFunctionRecommendations</a> action, and <code>JobFilter</code> with
   * the <a>DescribeRecommendationExportJobs</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_COMPUTEOPTIMIZER_API Filter();
    AWS_COMPUTEOPTIMIZER_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline const FilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline void SetName(const FilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline void SetName(FilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline Filter& WithName(const FilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p> <p>Specify <code>Finding</code> to return
     * recommendations with a specific finding classification (for example,
     * <code>Underprovisioned</code>).</p> <p>Specify
     * <code>RecommendationSourceType</code> to return recommendations of a specific
     * resource type (for example, <code>Ec2Instance</code>).</p> <p>Specify
     * <code>FindingReasonCodes</code> to return recommendations with a specific
     * finding reason code (for example, <code>CPUUnderprovisioned</code>).</p>
     */
    inline Filter& WithName(FilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value of the filter.</p> <p>The valid values for this parameter are as
     * follows, depending on what you specify for the <code>name</code> parameter and
     * the resource type that you wish to filter results for:</p> <ul> <li> <p>Specify
     * <code>Optimized</code> or <code>NotOptimized</code> if you specify the
     * <code>name</code> parameter as <code>Finding</code> and you want to filter
     * results for Auto Scaling groups.</p> </li> <li> <p>Specify
     * <code>Underprovisioned</code>, <code>Overprovisioned</code>, or
     * <code>Optimized</code> if you specify the <code>name</code> parameter as
     * <code>Finding</code> and you want to filter results for EC2 instances.</p> </li>
     * <li> <p>Specify <code>Ec2Instance</code> or <code>AutoScalingGroup</code> if you
     * specify the <code>name</code> parameter as
     * <code>RecommendationSourceType</code>.</p> </li> <li> <p>Specify one of the
     * following options if you specify the <code>name</code> parameter as
     * <code>FindingReasonCodes</code>:</p> <ul> <li> <p> <b>
     * <code>CPUOverprovisioned</code> </b> — The instance’s CPU configuration can be
     * sized down while still meeting the performance requirements of your
     * workload.</p> </li> <li> <p> <b> <code>CPUUnderprovisioned</code> </b> — The
     * instance’s CPU configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better CPU
     * performance.</p> </li> <li> <p> <b> <code>MemoryOverprovisioned</code> </b> —
     * The instance’s memory configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>MemoryUnderprovisioned</code> </b> — The instance’s memory configuration
     * doesn't meet the performance requirements of your workload and there is an
     * alternative instance type that provides better memory performance.</p> </li>
     * <li> <p> <b> <code>EBSThroughputOverprovisioned</code> </b> — The instance’s EBS
     * throughput configuration can be sized down while still meeting the performance
     * requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSThroughputUnderprovisioned</code> </b> — The instance’s EBS throughput
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS throughput
     * performance.</p> </li> <li> <p> <b> <code>EBSIOPSOverprovisioned</code> </b> —
     * The instance’s EBS IOPS configuration can be sized down while still meeting the
     * performance requirements of your workload.</p> </li> <li> <p> <b>
     * <code>EBSIOPSUnderprovisioned</code> </b> — The instance’s EBS IOPS
     * configuration doesn't meet the performance requirements of your workload and
     * there is an alternative instance type that provides better EBS IOPS
     * performance.</p> </li> <li> <p> <b> <code>NetworkBandwidthOverprovisioned</code>
     * </b> — The instance’s network bandwidth configuration can be sized down while
     * still meeting the performance requirements of your workload.</p> </li> <li> <p>
     * <b> <code>NetworkBandwidthUnderprovisioned</code> </b> — The instance’s network
     * bandwidth configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better network
     * bandwidth performance. This finding reason happens when the
     * <code>NetworkIn</code> or <code>NetworkOut</code> performance of an instance is
     * impacted.</p> </li> <li> <p> <b> <code>NetworkPPSOverprovisioned</code> </b> —
     * The instance’s network PPS (packets per second) configuration can be sized down
     * while still meeting the performance requirements of your workload.</p> </li>
     * <li> <p> <b> <code>NetworkPPSUnderprovisioned</code> </b> — The instance’s
     * network PPS (packets per second) configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better network PPS performance.</p> </li> <li> <p> <b>
     * <code>DiskIOPSOverprovisioned</code> </b> — The instance’s disk IOPS
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b> <code>DiskIOPSUnderprovisioned</code>
     * </b> — The instance’s disk IOPS configuration doesn't meet the performance
     * requirements of your workload and there is an alternative instance type that
     * provides better disk IOPS performance.</p> </li> <li> <p> <b>
     * <code>DiskThroughputOverprovisioned</code> </b> — The instance’s disk throughput
     * configuration can be sized down while still meeting the performance requirements
     * of your workload.</p> </li> <li> <p> <b>
     * <code>DiskThroughputUnderprovisioned</code> </b> — The instance’s disk
     * throughput configuration doesn't meet the performance requirements of your
     * workload and there is an alternative instance type that provides better disk
     * throughput performance.</p> </li> </ul> </li> </ul>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    FilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
