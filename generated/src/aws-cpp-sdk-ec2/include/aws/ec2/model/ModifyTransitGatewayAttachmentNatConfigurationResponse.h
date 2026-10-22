/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatGatewaySupportState.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatSystemRouteSupportValue.h>
#include <aws/ec2/model/TransitGatewayNatRule.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class ModifyTransitGatewayAttachmentNatConfigurationResponse {
 public:
  AWS_EC2_API ModifyTransitGatewayAttachmentNatConfigurationResponse() = default;
  AWS_EC2_API ModifyTransitGatewayAttachmentNatConfigurationResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyTransitGatewayAttachmentNatConfigurationResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the transit gateway attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  ModifyTransitGatewayAttachmentNatConfigurationResponse& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of NAT gateway support for the attachment.</p>
   */
  inline TransitGatewayAttachmentNatGatewaySupportState GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline void SetNatGatewaySupport(TransitGatewayAttachmentNatGatewaySupportState value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationResponse& WithNatGatewaySupport(
      TransitGatewayAttachmentNatGatewaySupportState value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the transit gateway installs routes for the NAT CIDRs in
   * the route tables to which the attachment propagates.</p>
   */
  inline TransitGatewayAttachmentNatSystemRouteSupportValue GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline void SetNatSystemRouteSupport(TransitGatewayAttachmentNatSystemRouteSupportValue value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline ModifyTransitGatewayAttachmentNatConfigurationResponse& WithNatSystemRouteSupport(
      TransitGatewayAttachmentNatSystemRouteSupportValue value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT gateway rules for the attachment.</p>
   */
  inline const Aws::Vector<TransitGatewayNatRule>& GetNatGatewayRules() const { return m_natGatewayRules; }
  template <typename NatGatewayRulesT = Aws::Vector<TransitGatewayNatRule>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<TransitGatewayNatRule>>
  ModifyTransitGatewayAttachmentNatConfigurationResponse& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = TransitGatewayNatRule>
  ModifyTransitGatewayAttachmentNatConfigurationResponse& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ModifyTransitGatewayAttachmentNatConfigurationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_transitGatewayAttachmentId;

  TransitGatewayAttachmentNatGatewaySupportState m_natGatewaySupport{TransitGatewayAttachmentNatGatewaySupportState::NOT_SET};

  TransitGatewayAttachmentNatSystemRouteSupportValue m_natSystemRouteSupport{TransitGatewayAttachmentNatSystemRouteSupportValue::NOT_SET};

  Aws::Vector<TransitGatewayNatRule> m_natGatewayRules;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
