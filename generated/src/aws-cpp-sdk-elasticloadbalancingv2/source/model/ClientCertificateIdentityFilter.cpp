/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilter.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {

ClientCertificateIdentityFilter::ClientCertificateIdentityFilter(const XmlNode& xmlNode) { *this = xmlNode; }

ClientCertificateIdentityFilter& ClientCertificateIdentityFilter::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fieldNode = resultNode.FirstChild("Field");
    if (!fieldNode.IsNull()) {
      m_field = ClientCertificateIdentityFilterFieldMapper::GetClientCertificateIdentityFilterFieldForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fieldNode.GetText()).c_str()));
      m_fieldHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if (!actionNode.IsNull()) {
      m_action = ClientCertificateIdentityFilterActionMapper::GetClientCertificateIdentityFilterActionForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()));
      m_actionHasBeenSet = true;
    }
    XmlNode matchTypeNode = resultNode.FirstChild("MatchType");
    if (!matchTypeNode.IsNull()) {
      m_matchType = ClientCertificateIdentityFilterMatchTypeMapper::GetClientCertificateIdentityFilterMatchTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(matchTypeNode.GetText()).c_str()));
      m_matchTypeHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if (!valueNode.IsNull()) {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void ClientCertificateIdentityFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_fieldHasBeenSet) {
    oStream << location << index << locationValue << ".Field="
            << StringUtils::URLEncode(ClientCertificateIdentityFilterFieldMapper::GetNameForClientCertificateIdentityFilterField(m_field))
            << "&";
  }

  if (m_actionHasBeenSet) {
    oStream << location << index << locationValue << ".Action="
            << StringUtils::URLEncode(
                   ClientCertificateIdentityFilterActionMapper::GetNameForClientCertificateIdentityFilterAction(m_action))
            << "&";
  }

  if (m_matchTypeHasBeenSet) {
    oStream << location << index << locationValue << ".MatchType="
            << StringUtils::URLEncode(
                   ClientCertificateIdentityFilterMatchTypeMapper::GetNameForClientCertificateIdentityFilterMatchType(m_matchType))
            << "&";
  }

  if (m_valueHasBeenSet) {
    oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

void ClientCertificateIdentityFilter::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fieldHasBeenSet) {
    oStream << location << ".Field="
            << StringUtils::URLEncode(ClientCertificateIdentityFilterFieldMapper::GetNameForClientCertificateIdentityFilterField(m_field))
            << "&";
  }
  if (m_actionHasBeenSet) {
    oStream << location << ".Action="
            << StringUtils::URLEncode(
                   ClientCertificateIdentityFilterActionMapper::GetNameForClientCertificateIdentityFilterAction(m_action))
            << "&";
  }
  if (m_matchTypeHasBeenSet) {
    oStream << location << ".MatchType="
            << StringUtils::URLEncode(
                   ClientCertificateIdentityFilterMatchTypeMapper::GetNameForClientCertificateIdentityFilterMatchType(m_matchType))
            << "&";
  }
  if (m_valueHasBeenSet) {
    oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
