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
#include <aws/elasticmapreduce/model/InstanceStatus.h>
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/EbsVolume.h>
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
   * <p>Represents an EC2 instance provisioned as part of cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Instance">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API Instance
  {
  public:
    Instance();
    Instance(Aws::Utils::Json::JsonView jsonValue);
    Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline Instance& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline Instance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline Instance& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline Instance& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline Instance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline Instance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}


    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline Instance& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline Instance& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline Instance& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The public IP address of the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}

    /**
     * <p>The public IP address of the instance.</p>
     */
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}


    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline Instance& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline Instance& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline Instance& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The private IP address of the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address of the instance.</p>
     */
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>The current status of the instance.</p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the instance.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the instance.</p>
     */
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the instance.</p>
     */
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the instance.</p>
     */
    inline Instance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the instance.</p>
     */
    inline Instance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline Instance& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline Instance& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline Instance& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}


    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline Instance& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline Instance& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the instance fleet to which an EC2 instance
     * belongs.</p>
     */
    inline Instance& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}


    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }

    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }

    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }

    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }

    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline Instance& WithMarket(const MarketType& value) { SetMarket(value); return *this;}

    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline Instance& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline const Aws::Vector<EbsVolume>& GetEbsVolumes() const{ return m_ebsVolumes; }

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline void SetEbsVolumes(const Aws::Vector<EbsVolume>& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = value; }

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline void SetEbsVolumes(Aws::Vector<EbsVolume>&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = std::move(value); }

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline Instance& WithEbsVolumes(const Aws::Vector<EbsVolume>& value) { SetEbsVolumes(value); return *this;}

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline Instance& WithEbsVolumes(Aws::Vector<EbsVolume>&& value) { SetEbsVolumes(std::move(value)); return *this;}

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline Instance& AddEbsVolumes(const EbsVolume& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes.push_back(value); return *this; }

    /**
     * <p>The list of EBS volumes that are attached to this instance.</p>
     */
    inline Instance& AddEbsVolumes(EbsVolume&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    InstanceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet;

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet;

    MarketType m_market;
    bool m_marketHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::Vector<EbsVolume> m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
