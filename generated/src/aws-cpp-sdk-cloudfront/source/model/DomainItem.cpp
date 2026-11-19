/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DomainItem.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

DomainItem::DomainItem(const XmlNode& xmlNode) { *this = xmlNode; }

DomainItem& DomainItem::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if (!domainNode.IsNull()) {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode serveOnNode = resultNode.FirstChild("ServeOn");
    if (!serveOnNode.IsNull()) {
      m_serveOn = ServeOnMapper::GetServeOnForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serveOnNode.GetText()).c_str()));
      m_serveOnHasBeenSet = true;
    }
  }

  return *this;
}

void DomainItem::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_domainHasBeenSet) {
    XmlNode domainNode = parentNode.CreateChildElement("Domain");
    domainNode.SetText(m_domain);
  }

  if (m_serveOnHasBeenSet) {
    XmlNode serveOnNode = parentNode.CreateChildElement("ServeOn");
    serveOnNode.SetText(ServeOnMapper::GetNameForServeOn(m_serveOn));
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
