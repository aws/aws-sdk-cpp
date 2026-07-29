/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayAssociationState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayAttachmentAssociation">AWS
 * API Reference</a></p>
 */
class TransitGatewayAttachmentAssociation {
 public:
  AWS_EC2_API TransitGatewayAttachmentAssociation() = default;
  AWS_EC2_API TransitGatewayAttachmentAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayAttachmentAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the route table for the transit gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayRouteTableId() const { return m_transitGatewayRouteTableId; }
  inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
  template <typename TransitGatewayRouteTableIdT = Aws::String>
  void SetTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) {
    m_transitGatewayRouteTableIdHasBeenSet = true;
    m_transitGatewayRouteTableId = std::forward<TransitGatewayRouteTableIdT>(value);
  }
  template <typename TransitGatewayRouteTableIdT = Aws::String>
  TransitGatewayAttachmentAssociation& WithTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) {
    SetTransitGatewayRouteTableId(std::forward<TransitGatewayRouteTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the transit gateway policy table associated with the
   * attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayPolicyTableId() const { return m_transitGatewayPolicyTableId; }
  inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }
  template <typename TransitGatewayPolicyTableIdT = Aws::String>
  void SetTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) {
    m_transitGatewayPolicyTableIdHasBeenSet = true;
    m_transitGatewayPolicyTableId = std::forward<TransitGatewayPolicyTableIdT>(value);
  }
  template <typename TransitGatewayPolicyTableIdT = Aws::String>
  TransitGatewayAttachmentAssociation& WithTransitGatewayPolicyTableId(TransitGatewayPolicyTableIdT&& value) {
    SetTransitGatewayPolicyTableId(std::forward<TransitGatewayPolicyTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the association.</p>
   */
  inline TransitGatewayAssociationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(TransitGatewayAssociationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TransitGatewayAttachmentAssociation& WithState(TransitGatewayAssociationState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayRouteTableId;

  Aws::String m_transitGatewayPolicyTableId;

  TransitGatewayAssociationState m_state{TransitGatewayAssociationState::NOT_SET};
  bool m_transitGatewayRouteTableIdHasBeenSet = false;
  bool m_transitGatewayPolicyTableIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
