/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/DelegationPermission.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

DelegationPermission::DelegationPermission(const XmlNode& xmlNode) { *this = xmlNode; }

DelegationPermission& DelegationPermission::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode policyTemplateArnNode = resultNode.FirstChild("PolicyTemplateArn");
    if (!policyTemplateArnNode.IsNull()) {
      m_policyTemplateArn = Aws::Utils::Xml::DecodeEscapedXmlText(policyTemplateArnNode.GetText());
      m_policyTemplateArnHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if (!parametersNode.IsNull()) {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      m_parametersHasBeenSet = !parametersMember.IsNull();
      while (!parametersMember.IsNull()) {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
  }

  return *this;
}

void DelegationPermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_policyTemplateArnHasBeenSet) {
    oStream << location << index << locationValue << ".PolicyTemplateArn=" << StringUtils::URLEncode(m_policyTemplateArn.c_str()) << "&";
  }

  if (m_parametersHasBeenSet) {
    unsigned parametersIdx = 1;
    for (auto& item : m_parameters) {
      Aws::StringStream parametersSs;
      parametersSs << location << index << locationValue << ".Parameters.member." << parametersIdx++;
      item.OutputToStream(oStream, parametersSs.str().c_str());
    }
  }
}

void DelegationPermission::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_policyTemplateArnHasBeenSet) {
    oStream << location << ".PolicyTemplateArn=" << StringUtils::URLEncode(m_policyTemplateArn.c_str()) << "&";
  }
  if (m_parametersHasBeenSet) {
    unsigned parametersIdx = 1;
    for (auto& item : m_parameters) {
      Aws::StringStream parametersSs;
      parametersSs << location << ".Parameters.member." << parametersIdx++;
      item.OutputToStream(oStream, parametersSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
