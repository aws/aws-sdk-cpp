/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LocalGatewayRouteTableMode.h>
#include <aws/ec2/model/StateReason.h>
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
   * <p>Describes a local gateway route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayRouteTable">AWS
   * API Reference</a></p>
   */
  class LocalGatewayRouteTable
  {
  public:
    AWS_EC2_API LocalGatewayRouteTable();
    AWS_EC2_API LocalGatewayRouteTable(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRouteTable& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const{ return m_localGatewayRouteTableArn; }
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }
    inline void SetLocalGatewayRouteTableArn(const Aws::String& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = value; }
    inline void SetLocalGatewayRouteTableArn(Aws::String&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::move(value); }
    inline void SetLocalGatewayRouteTableArn(const char* value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn.assign(value); }
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableArn(const Aws::String& value) { SetLocalGatewayRouteTableArn(value); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableArn(Aws::String&& value) { SetLocalGatewayRouteTableArn(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayRouteTableArn(const char* value) { SetLocalGatewayRouteTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }
    inline LocalGatewayRouteTable& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline LocalGatewayRouteTable& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline LocalGatewayRouteTable& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway route
     * table.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline LocalGatewayRouteTable& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline LocalGatewayRouteTable& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the local gateway route table.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline LocalGatewayRouteTable& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline LocalGatewayRouteTable& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the local gateway route table.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LocalGatewayRouteTable& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline LocalGatewayRouteTable& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LocalGatewayRouteTable& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LocalGatewayRouteTable& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode of the local gateway route table.</p>
     */
    inline const LocalGatewayRouteTableMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const LocalGatewayRouteTableMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(LocalGatewayRouteTableMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline LocalGatewayRouteTable& WithMode(const LocalGatewayRouteTableMode& value) { SetMode(value); return *this;}
    inline LocalGatewayRouteTable& WithMode(LocalGatewayRouteTableMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the state change.</p>
     */
    inline const StateReason& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const StateReason& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(StateReason&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline LocalGatewayRouteTable& WithStateReason(const StateReason& value) { SetStateReason(value); return *this;}
    inline LocalGatewayRouteTable& WithStateReason(StateReason&& value) { SetStateReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableArn;
    bool m_localGatewayRouteTableArnHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    LocalGatewayRouteTableMode m_mode;
    bool m_modeHasBeenSet = false;

    StateReason m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
