/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/OrderedOrganizationPolicyType.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

OrderedOrganizationPolicyType::OrderedOrganizationPolicyType(const XmlNode& xmlNode) { *this = xmlNode; }

OrderedOrganizationPolicyType& OrderedOrganizationPolicyType::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode serviceControlPolicyInputListNode = resultNode.FirstChild("ServiceControlPolicyInputList");
    if (!serviceControlPolicyInputListNode.IsNull()) {
      XmlNode serviceControlPolicyInputListMember = serviceControlPolicyInputListNode.FirstChild("member");
      m_serviceControlPolicyInputListHasBeenSet = !serviceControlPolicyInputListMember.IsNull();
      while (!serviceControlPolicyInputListMember.IsNull()) {
        m_serviceControlPolicyInputList.push_back(serviceControlPolicyInputListMember.GetText());
        serviceControlPolicyInputListMember = serviceControlPolicyInputListMember.NextNode("member");
      }

      m_serviceControlPolicyInputListHasBeenSet = true;
    }
  }

  return *this;
}

void OrderedOrganizationPolicyType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_serviceControlPolicyInputListHasBeenSet) {
    unsigned serviceControlPolicyInputListIdx = 1;
    for (auto& item : m_serviceControlPolicyInputList) {
      oStream << location << index << locationValue << ".ServiceControlPolicyInputList.member." << serviceControlPolicyInputListIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void OrderedOrganizationPolicyType::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_serviceControlPolicyInputListHasBeenSet) {
    unsigned serviceControlPolicyInputListIdx = 1;
    for (auto& item : m_serviceControlPolicyInputList) {
      oStream << location << ".ServiceControlPolicyInputList.member." << serviceControlPolicyInputListIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
