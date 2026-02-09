/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecondaryNetworkCidrBlockAssociationState.h>

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
 * <p>Describes an IPv4 CIDR block associated with a secondary
 * network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondaryNetworkIpv4CidrBlockAssociation">AWS
 * API Reference</a></p>
 */
class SecondaryNetworkIpv4CidrBlockAssociation {
 public:
  AWS_EC2_API SecondaryNetworkIpv4CidrBlockAssociation() = default;
  AWS_EC2_API SecondaryNetworkIpv4CidrBlockAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondaryNetworkIpv4CidrBlockAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The association ID for the IPv4 CIDR block.</p>
   */
  inline const Aws::String& GetAssociationId() const { return m_associationId; }
  inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
  template <typename AssociationIdT = Aws::String>
  void SetAssociationId(AssociationIdT&& value) {
    m_associationIdHasBeenSet = true;
    m_associationId = std::forward<AssociationIdT>(value);
  }
  template <typename AssociationIdT = Aws::String>
  SecondaryNetworkIpv4CidrBlockAssociation& WithAssociationId(AssociationIdT&& value) {
    SetAssociationId(std::forward<AssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block.</p>
   */
  inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
  inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
  template <typename CidrBlockT = Aws::String>
  void SetCidrBlock(CidrBlockT&& value) {
    m_cidrBlockHasBeenSet = true;
    m_cidrBlock = std::forward<CidrBlockT>(value);
  }
  template <typename CidrBlockT = Aws::String>
  SecondaryNetworkIpv4CidrBlockAssociation& WithCidrBlock(CidrBlockT&& value) {
    SetCidrBlock(std::forward<CidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the CIDR block association.</p>
   */
  inline SecondaryNetworkCidrBlockAssociationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SecondaryNetworkCidrBlockAssociationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SecondaryNetworkIpv4CidrBlockAssociation& WithState(SecondaryNetworkCidrBlockAssociationState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the CIDR block association.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  SecondaryNetworkIpv4CidrBlockAssociation& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associationId;

  Aws::String m_cidrBlock;

  SecondaryNetworkCidrBlockAssociationState m_state{SecondaryNetworkCidrBlockAssociationState::NOT_SET};

  Aws::String m_stateReason;
  bool m_associationIdHasBeenSet = false;
  bool m_cidrBlockHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
