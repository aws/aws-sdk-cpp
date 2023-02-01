/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CarrierGatewayState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a carrier gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CarrierGateway">AWS
   * API Reference</a></p>
   */
  class CarrierGateway
  {
  public:
    AWS_EC2_API CarrierGateway();
    AWS_EC2_API CarrierGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CarrierGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline const Aws::String& GetCarrierGatewayId() const{ return m_carrierGatewayId; }

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline bool CarrierGatewayIdHasBeenSet() const { return m_carrierGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline void SetCarrierGatewayId(const Aws::String& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = value; }

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline void SetCarrierGatewayId(Aws::String&& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = std::move(value); }

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline void SetCarrierGatewayId(const char* value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId.assign(value); }

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline CarrierGateway& WithCarrierGatewayId(const Aws::String& value) { SetCarrierGatewayId(value); return *this;}

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline CarrierGateway& WithCarrierGatewayId(Aws::String&& value) { SetCarrierGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the carrier gateway.</p>
     */
    inline CarrierGateway& WithCarrierGatewayId(const char* value) { SetCarrierGatewayId(value); return *this;}


    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline CarrierGateway& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline CarrierGateway& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC associated with the carrier gateway.</p>
     */
    inline CarrierGateway& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline const CarrierGatewayState& GetState() const{ return m_state; }

    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline void SetState(const CarrierGatewayState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline void SetState(CarrierGatewayState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline CarrierGateway& WithState(const CarrierGatewayState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the carrier gateway.</p>
     */
    inline CarrierGateway& WithState(CarrierGatewayState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline CarrierGateway& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline CarrierGateway& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the carrier gateway.</p>
     */
    inline CarrierGateway& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline CarrierGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline CarrierGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline CarrierGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the carrier gateway.</p>
     */
    inline CarrierGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_carrierGatewayId;
    bool m_carrierGatewayIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    CarrierGatewayState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
