/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/VpcEncryptionControlConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

VpcEncryptionControlConfiguration::VpcEncryptionControlConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

VpcEncryptionControlConfiguration& VpcEncryptionControlConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if (!modeNode.IsNull()) {
      m_mode = VpcEncryptionControlModeMapper::GetVpcEncryptionControlModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()));
      m_modeHasBeenSet = true;
    }
    XmlNode internetGatewayExclusionNode = resultNode.FirstChild("InternetGatewayExclusion");
    if (!internetGatewayExclusionNode.IsNull()) {
      m_internetGatewayExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(internetGatewayExclusionNode.GetText()).c_str()));
      m_internetGatewayExclusionHasBeenSet = true;
    }
    XmlNode egressOnlyInternetGatewayExclusionNode = resultNode.FirstChild("EgressOnlyInternetGatewayExclusion");
    if (!egressOnlyInternetGatewayExclusionNode.IsNull()) {
      m_egressOnlyInternetGatewayExclusion =
          VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(egressOnlyInternetGatewayExclusionNode.GetText()).c_str()));
      m_egressOnlyInternetGatewayExclusionHasBeenSet = true;
    }
    XmlNode natGatewayExclusionNode = resultNode.FirstChild("NatGatewayExclusion");
    if (!natGatewayExclusionNode.IsNull()) {
      m_natGatewayExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(natGatewayExclusionNode.GetText()).c_str()));
      m_natGatewayExclusionHasBeenSet = true;
    }
    XmlNode virtualPrivateGatewayExclusionNode = resultNode.FirstChild("VirtualPrivateGatewayExclusion");
    if (!virtualPrivateGatewayExclusionNode.IsNull()) {
      m_virtualPrivateGatewayExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(virtualPrivateGatewayExclusionNode.GetText()).c_str()));
      m_virtualPrivateGatewayExclusionHasBeenSet = true;
    }
    XmlNode vpcPeeringExclusionNode = resultNode.FirstChild("VpcPeeringExclusion");
    if (!vpcPeeringExclusionNode.IsNull()) {
      m_vpcPeeringExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcPeeringExclusionNode.GetText()).c_str()));
      m_vpcPeeringExclusionHasBeenSet = true;
    }
    XmlNode lambdaExclusionNode = resultNode.FirstChild("LambdaExclusion");
    if (!lambdaExclusionNode.IsNull()) {
      m_lambdaExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lambdaExclusionNode.GetText()).c_str()));
      m_lambdaExclusionHasBeenSet = true;
    }
    XmlNode vpcLatticeExclusionNode = resultNode.FirstChild("VpcLatticeExclusion");
    if (!vpcLatticeExclusionNode.IsNull()) {
      m_vpcLatticeExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcLatticeExclusionNode.GetText()).c_str()));
      m_vpcLatticeExclusionHasBeenSet = true;
    }
    XmlNode elasticFileSystemExclusionNode = resultNode.FirstChild("ElasticFileSystemExclusion");
    if (!elasticFileSystemExclusionNode.IsNull()) {
      m_elasticFileSystemExclusion = VpcEncryptionControlExclusionStateInputMapper::GetVpcEncryptionControlExclusionStateInputForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elasticFileSystemExclusionNode.GetText()).c_str()));
      m_elasticFileSystemExclusionHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEncryptionControlConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_modeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Mode=" << StringUtils::URLEncode(VpcEncryptionControlModeMapper::GetNameForVpcEncryptionControlMode(m_mode)) << "&";
  }

  if (m_internetGatewayExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".InternetGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_internetGatewayExclusion))
            << "&";
  }

  if (m_egressOnlyInternetGatewayExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".EgressOnlyInternetGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_egressOnlyInternetGatewayExclusion))
            << "&";
  }

  if (m_natGatewayExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".NatGatewayExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_natGatewayExclusion))
            << "&";
  }

  if (m_virtualPrivateGatewayExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".VirtualPrivateGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_virtualPrivateGatewayExclusion))
            << "&";
  }

  if (m_vpcPeeringExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".VpcPeeringExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcPeeringExclusion))
            << "&";
  }

  if (m_lambdaExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".LambdaExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_lambdaExclusion))
            << "&";
  }

  if (m_vpcLatticeExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".VpcLatticeExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcLatticeExclusion))
            << "&";
  }

  if (m_elasticFileSystemExclusionHasBeenSet) {
    oStream << location << index << locationValue << ".ElasticFileSystemExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_elasticFileSystemExclusion))
            << "&";
  }
}

void VpcEncryptionControlConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_modeHasBeenSet) {
    oStream << location << ".Mode=" << StringUtils::URLEncode(VpcEncryptionControlModeMapper::GetNameForVpcEncryptionControlMode(m_mode))
            << "&";
  }
  if (m_internetGatewayExclusionHasBeenSet) {
    oStream << location << ".InternetGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_internetGatewayExclusion))
            << "&";
  }
  if (m_egressOnlyInternetGatewayExclusionHasBeenSet) {
    oStream << location << ".EgressOnlyInternetGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_egressOnlyInternetGatewayExclusion))
            << "&";
  }
  if (m_natGatewayExclusionHasBeenSet) {
    oStream << location << ".NatGatewayExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_natGatewayExclusion))
            << "&";
  }
  if (m_virtualPrivateGatewayExclusionHasBeenSet) {
    oStream << location << ".VirtualPrivateGatewayExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_virtualPrivateGatewayExclusion))
            << "&";
  }
  if (m_vpcPeeringExclusionHasBeenSet) {
    oStream << location << ".VpcPeeringExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcPeeringExclusion))
            << "&";
  }
  if (m_lambdaExclusionHasBeenSet) {
    oStream << location << ".LambdaExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_lambdaExclusion))
            << "&";
  }
  if (m_vpcLatticeExclusionHasBeenSet) {
    oStream << location << ".VpcLatticeExclusion="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(m_vpcLatticeExclusion))
            << "&";
  }
  if (m_elasticFileSystemExclusionHasBeenSet) {
    oStream << location << ".ElasticFileSystemExclusion="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateInputMapper::GetNameForVpcEncryptionControlExclusionStateInput(
                   m_elasticFileSystemExclusion))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
