/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Provides information about the EC2 instances in a cluster grouped by
   * category. For example, key name, subnet ID, IAM instance profile, and so
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Ec2InstanceAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API Ec2InstanceAttributes
  {
  public:
    Ec2InstanceAttributes();
    Ec2InstanceAttributes(Aws::Utils::Json::JsonView jsonValue);
    Ec2InstanceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::move(value); }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EC2 key pair to use when connecting with SSH into the
     * master node as a user named "hadoop".</p>
     */
    inline Ec2InstanceAttributes& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}


    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::move(value); }

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(std::move(value)); return *this;}

    /**
     * <p>To launch the cluster in Amazon VPC, set this parameter to the identifier of
     * the Amazon VPC subnet where you want the cluster to launch. If you do not
     * specify this value, the cluster is launched in the normal AWS cloud, outside of
     * a VPC.</p> <p>Amazon VPC currently does not support cluster compute quadruple
     * extra large (cc1.4xlarge) instances. Thus, you cannot specify the cc1.4xlarge
     * instance type for nodes of a cluster launched in a VPC.</p>
     */
    inline Ec2InstanceAttributes& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}


    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedEc2SubnetIds() const{ return m_requestedEc2SubnetIds; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline bool RequestedEc2SubnetIdsHasBeenSet() const { return m_requestedEc2SubnetIdsHasBeenSet; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline void SetRequestedEc2SubnetIds(const Aws::Vector<Aws::String>& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds = value; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline void SetRequestedEc2SubnetIds(Aws::Vector<Aws::String>&& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds = std::move(value); }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& WithRequestedEc2SubnetIds(const Aws::Vector<Aws::String>& value) { SetRequestedEc2SubnetIds(value); return *this;}

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& WithRequestedEc2SubnetIds(Aws::Vector<Aws::String>&& value) { SetRequestedEc2SubnetIds(std::move(value)); return *this;}

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2SubnetIds(const Aws::String& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds.push_back(value); return *this; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2SubnetIds(Aws::String&& value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies the
     * unique identifier of one or more Amazon EC2 subnets in which to launch EC2
     * cluster instances. Subnets must exist within the same VPC. Amazon EMR chooses
     * the EC2 subnet with the best fit from among the list of
     * <code>RequestedEc2SubnetIds</code>, and then launches all cluster instances
     * within that Subnet. If this value is not specified, and the account and region
     * support EC2-Classic networks, the cluster launches instances in the EC2-Classic
     * network and uses <code>RequestedEc2AvailabilityZones</code> instead of this
     * setting. If EC2-Classic is not supported, and no Subnet is specified, Amazon EMR
     * chooses the subnet for you. <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2SubnetIds(const char* value) { m_requestedEc2SubnetIdsHasBeenSet = true; m_requestedEc2SubnetIds.push_back(value); return *this; }


    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline const Aws::String& GetEc2AvailabilityZone() const{ return m_ec2AvailabilityZone; }

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline bool Ec2AvailabilityZoneHasBeenSet() const { return m_ec2AvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline void SetEc2AvailabilityZone(const Aws::String& value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline void SetEc2AvailabilityZone(Aws::String&& value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline void SetEc2AvailabilityZone(const char* value) { m_ec2AvailabilityZoneHasBeenSet = true; m_ec2AvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(const Aws::String& value) { SetEc2AvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(Aws::String&& value) { SetEc2AvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the cluster will run. </p>
     */
    inline Ec2InstanceAttributes& WithEc2AvailabilityZone(const char* value) { SetEc2AvailabilityZone(value); return *this;}


    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestedEc2AvailabilityZones() const{ return m_requestedEc2AvailabilityZones; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline bool RequestedEc2AvailabilityZonesHasBeenSet() const { return m_requestedEc2AvailabilityZonesHasBeenSet; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline void SetRequestedEc2AvailabilityZones(const Aws::Vector<Aws::String>& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones = value; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline void SetRequestedEc2AvailabilityZones(Aws::Vector<Aws::String>&& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones = std::move(value); }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& WithRequestedEc2AvailabilityZones(const Aws::Vector<Aws::String>& value) { SetRequestedEc2AvailabilityZones(value); return *this;}

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& WithRequestedEc2AvailabilityZones(Aws::Vector<Aws::String>&& value) { SetRequestedEc2AvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2AvailabilityZones(const Aws::String& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones.push_back(value); return *this; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2AvailabilityZones(Aws::String&& value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Applies to clusters configured with the instance fleets option. Specifies one
     * or more Availability Zones in which to launch EC2 cluster instances when the
     * EC2-Classic network configuration is supported. Amazon EMR chooses the
     * Availability Zone with the best fit from among the list of
     * <code>RequestedEc2AvailabilityZones</code>, and then launches all cluster
     * instances within that Availability Zone. If you do not specify this value,
     * Amazon EMR chooses the Availability Zone for you.
     * <code>RequestedEc2SubnetIDs</code> and
     * <code>RequestedEc2AvailabilityZones</code> cannot be specified together.</p>
     */
    inline Ec2InstanceAttributes& AddRequestedEc2AvailabilityZones(const char* value) { m_requestedEc2AvailabilityZonesHasBeenSet = true; m_requestedEc2AvailabilityZones.push_back(value); return *this; }


    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline void SetIamInstanceProfile(const Aws::String& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline void SetIamInstanceProfile(Aws::String&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline void SetIamInstanceProfile(const char* value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile.assign(value); }

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(const Aws::String& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(Aws::String&& value) { SetIamInstanceProfile(std::move(value)); return *this;}

    /**
     * <p>The IAM role that was specified when the cluster was launched. The EC2
     * instances of the cluster assume this role.</p>
     */
    inline Ec2InstanceAttributes& WithIamInstanceProfile(const char* value) { SetIamInstanceProfile(value); return *this;}


    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline const Aws::String& GetEmrManagedMasterSecurityGroup() const{ return m_emrManagedMasterSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline bool EmrManagedMasterSecurityGroupHasBeenSet() const { return m_emrManagedMasterSecurityGroupHasBeenSet; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(const Aws::String& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(Aws::String&& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = std::move(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline void SetEmrManagedMasterSecurityGroup(const char* value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(const Aws::String& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(Aws::String&& value) { SetEmrManagedMasterSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedMasterSecurityGroup(const char* value) { SetEmrManagedMasterSecurityGroup(value); return *this;}


    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline const Aws::String& GetEmrManagedSlaveSecurityGroup() const{ return m_emrManagedSlaveSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline bool EmrManagedSlaveSecurityGroupHasBeenSet() const { return m_emrManagedSlaveSecurityGroupHasBeenSet; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(const Aws::String& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(Aws::String&& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = std::move(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline void SetEmrManagedSlaveSecurityGroup(const char* value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(const Aws::String& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(Aws::String&& value) { SetEmrManagedSlaveSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& WithEmrManagedSlaveSecurityGroup(const char* value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}


    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline const Aws::String& GetServiceAccessSecurityGroup() const{ return m_serviceAccessSecurityGroup; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline bool ServiceAccessSecurityGroupHasBeenSet() const { return m_serviceAccessSecurityGroupHasBeenSet; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(const Aws::String& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = value; }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(Aws::String&& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = std::move(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline void SetServiceAccessSecurityGroup(const char* value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup.assign(value); }

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(const Aws::String& value) { SetServiceAccessSecurityGroup(value); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(Aws::String&& value) { SetServiceAccessSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline Ec2InstanceAttributes& WithServiceAccessSecurityGroup(const char* value) { SetServiceAccessSecurityGroup(value); return *this;}


    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMasterSecurityGroups() const{ return m_additionalMasterSecurityGroups; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline bool AdditionalMasterSecurityGroupsHasBeenSet() const { return m_additionalMasterSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline void SetAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline void SetAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = std::move(value); }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalMasterSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalMasterSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(const Aws::String& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(Aws::String&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalMasterSecurityGroups(const char* value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSlaveSecurityGroups() const{ return m_additionalSlaveSecurityGroups; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline bool AdditionalSlaveSecurityGroupsHasBeenSet() const { return m_additionalSlaveSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline void SetAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = value; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline void SetAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = std::move(value); }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& WithAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalSlaveSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(const Aws::String& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(Aws::String&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline Ec2InstanceAttributes& AddAdditionalSlaveSecurityGroups(const char* value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }

  private:

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet;

    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet;

    Aws::Vector<Aws::String> m_requestedEc2SubnetIds;
    bool m_requestedEc2SubnetIdsHasBeenSet;

    Aws::String m_ec2AvailabilityZone;
    bool m_ec2AvailabilityZoneHasBeenSet;

    Aws::Vector<Aws::String> m_requestedEc2AvailabilityZones;
    bool m_requestedEc2AvailabilityZonesHasBeenSet;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet;

    Aws::String m_emrManagedMasterSecurityGroup;
    bool m_emrManagedMasterSecurityGroupHasBeenSet;

    Aws::String m_emrManagedSlaveSecurityGroup;
    bool m_emrManagedSlaveSecurityGroupHasBeenSet;

    Aws::String m_serviceAccessSecurityGroup;
    bool m_serviceAccessSecurityGroupHasBeenSet;

    Aws::Vector<Aws::String> m_additionalMasterSecurityGroups;
    bool m_additionalMasterSecurityGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_additionalSlaveSecurityGroups;
    bool m_additionalSlaveSecurityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
