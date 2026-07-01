/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AccountVpcEncryptionControlExclusions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AccountVpcEncryptionControlExclusions::AccountVpcEncryptionControlExclusions(const XmlNode& xmlNode) { *this = xmlNode; }

AccountVpcEncryptionControlExclusions& AccountVpcEncryptionControlExclusions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode internetGatewayNode = resultNode.FirstChild("internetGateway");
    if (!internetGatewayNode.IsNull()) {
      m_internetGateway = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(internetGatewayNode.GetText()).c_str()));
      m_internetGatewayHasBeenSet = true;
    }
    XmlNode egressOnlyInternetGatewayNode = resultNode.FirstChild("egressOnlyInternetGateway");
    if (!egressOnlyInternetGatewayNode.IsNull()) {
      m_egressOnlyInternetGateway = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(egressOnlyInternetGatewayNode.GetText()).c_str()));
      m_egressOnlyInternetGatewayHasBeenSet = true;
    }
    XmlNode natGatewayNode = resultNode.FirstChild("natGateway");
    if (!natGatewayNode.IsNull()) {
      m_natGateway = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(natGatewayNode.GetText()).c_str()));
      m_natGatewayHasBeenSet = true;
    }
    XmlNode virtualPrivateGatewayNode = resultNode.FirstChild("virtualPrivateGateway");
    if (!virtualPrivateGatewayNode.IsNull()) {
      m_virtualPrivateGateway = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(virtualPrivateGatewayNode.GetText()).c_str()));
      m_virtualPrivateGatewayHasBeenSet = true;
    }
    XmlNode vpcPeeringNode = resultNode.FirstChild("vpcPeering");
    if (!vpcPeeringNode.IsNull()) {
      m_vpcPeering = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcPeeringNode.GetText()).c_str()));
      m_vpcPeeringHasBeenSet = true;
    }
    XmlNode lambdaNode = resultNode.FirstChild("lambda");
    if (!lambdaNode.IsNull()) {
      m_lambda = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lambdaNode.GetText()).c_str()));
      m_lambdaHasBeenSet = true;
    }
    XmlNode vpcLatticeNode = resultNode.FirstChild("vpcLattice");
    if (!vpcLatticeNode.IsNull()) {
      m_vpcLattice = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcLatticeNode.GetText()).c_str()));
      m_vpcLatticeHasBeenSet = true;
    }
    XmlNode elasticFileSystemNode = resultNode.FirstChild("elasticFileSystem");
    if (!elasticFileSystemNode.IsNull()) {
      m_elasticFileSystem = VpcEncryptionControlExclusionStateMapper::GetVpcEncryptionControlExclusionStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elasticFileSystemNode.GetText()).c_str()));
      m_elasticFileSystemHasBeenSet = true;
    }
  }

  return *this;
}

void AccountVpcEncryptionControlExclusions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_internetGatewayHasBeenSet) {
    oStream << location << index << locationValue << ".InternetGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_internetGateway))
            << "&";
  }

  if (m_egressOnlyInternetGatewayHasBeenSet) {
    oStream << location << index << locationValue << ".EgressOnlyInternetGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_egressOnlyInternetGateway))
            << "&";
  }

  if (m_natGatewayHasBeenSet) {
    oStream << location << index << locationValue << ".NatGateway="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_natGateway))
            << "&";
  }

  if (m_virtualPrivateGatewayHasBeenSet) {
    oStream << location << index << locationValue << ".VirtualPrivateGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_virtualPrivateGateway))
            << "&";
  }

  if (m_vpcPeeringHasBeenSet) {
    oStream << location << index << locationValue << ".VpcPeering="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_vpcPeering))
            << "&";
  }

  if (m_lambdaHasBeenSet) {
    oStream << location << index << locationValue << ".Lambda="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_lambda))
            << "&";
  }

  if (m_vpcLatticeHasBeenSet) {
    oStream << location << index << locationValue << ".VpcLattice="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_vpcLattice))
            << "&";
  }

  if (m_elasticFileSystemHasBeenSet) {
    oStream << location << index << locationValue << ".ElasticFileSystem="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_elasticFileSystem))
            << "&";
  }
}

void AccountVpcEncryptionControlExclusions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_internetGatewayHasBeenSet) {
    oStream << location << ".InternetGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_internetGateway))
            << "&";
  }
  if (m_egressOnlyInternetGatewayHasBeenSet) {
    oStream << location << ".EgressOnlyInternetGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_egressOnlyInternetGateway))
            << "&";
  }
  if (m_natGatewayHasBeenSet) {
    oStream << location << ".NatGateway="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_natGateway))
            << "&";
  }
  if (m_virtualPrivateGatewayHasBeenSet) {
    oStream << location << ".VirtualPrivateGateway="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_virtualPrivateGateway))
            << "&";
  }
  if (m_vpcPeeringHasBeenSet) {
    oStream << location << ".VpcPeering="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_vpcPeering))
            << "&";
  }
  if (m_lambdaHasBeenSet) {
    oStream << location << ".Lambda="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_lambda))
            << "&";
  }
  if (m_vpcLatticeHasBeenSet) {
    oStream << location << ".VpcLattice="
            << StringUtils::URLEncode(VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_vpcLattice))
            << "&";
  }
  if (m_elasticFileSystemHasBeenSet) {
    oStream << location << ".ElasticFileSystem="
            << StringUtils::URLEncode(
                   VpcEncryptionControlExclusionStateMapper::GetNameForVpcEncryptionControlExclusionState(m_elasticFileSystem))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
