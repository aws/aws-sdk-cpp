/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents an Amazon EC2 instance provisioned as part of
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_EMR_API Instance();
    AWS_EMR_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the instance in Amazon EMR.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Instance& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Instance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Instance& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the instance in Amazon EC2.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }
    inline Instance& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}
    inline Instance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}
    inline Instance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the instance.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }
    inline Instance& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}
    inline Instance& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}
    inline Instance& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IP address of the instance.</p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }
    inline Instance& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}
    inline Instance& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}
    inline Instance& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS name of the instance.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }
    inline Instance& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline Instance& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline Instance& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IP address of the instance.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline Instance& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline Instance& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline Instance& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the instance.</p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Instance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}
    inline Instance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the instance group to which this instance belongs.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }
    inline Instance& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}
    inline Instance& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}
    inline Instance& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the instance fleet to which an Amazon EC2 instance
     * belongs.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }
    inline Instance& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}
    inline Instance& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}
    inline Instance& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance purchasing option. Valid values are <code>ON_DEMAND</code> or
     * <code>SPOT</code>. </p>
     */
    inline const MarketType& GetMarket() const{ return m_market; }
    inline bool MarketHasBeenSet() const { return m_marketHasBeenSet; }
    inline void SetMarket(const MarketType& value) { m_marketHasBeenSet = true; m_market = value; }
    inline void SetMarket(MarketType&& value) { m_marketHasBeenSet = true; m_market = std::move(value); }
    inline Instance& WithMarket(const MarketType& value) { SetMarket(value); return *this;}
    inline Instance& WithMarket(MarketType&& value) { SetMarket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type, for example <code>m3.xlarge</code>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Instance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Instance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Instance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon EBS volumes that are attached to this instance.</p>
     */
    inline const Aws::Vector<EbsVolume>& GetEbsVolumes() const{ return m_ebsVolumes; }
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }
    inline void SetEbsVolumes(const Aws::Vector<EbsVolume>& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = value; }
    inline void SetEbsVolumes(Aws::Vector<EbsVolume>&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = std::move(value); }
    inline Instance& WithEbsVolumes(const Aws::Vector<EbsVolume>& value) { SetEbsVolumes(value); return *this;}
    inline Instance& WithEbsVolumes(Aws::Vector<EbsVolume>&& value) { SetEbsVolumes(std::move(value)); return *this;}
    inline Instance& AddEbsVolumes(const EbsVolume& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes.push_back(value); return *this; }
    inline Instance& AddEbsVolumes(EbsVolume&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    InstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet = false;

    MarketType m_market;
    bool m_marketHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<EbsVolume> m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
