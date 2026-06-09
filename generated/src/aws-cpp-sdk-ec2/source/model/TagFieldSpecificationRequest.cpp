/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TagFieldSpecificationRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TagFieldSpecificationRequest::TagFieldSpecificationRequest(const XmlNode& xmlNode) { *this = xmlNode; }

TagFieldSpecificationRequest& TagFieldSpecificationRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if (!resourceTypeNode.IsNull()) {
      m_resourceType = TaggableResourceTypeMapper::GetTaggableResourceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode tagKeysNode = resultNode.FirstChild("TagKey");
    if (!tagKeysNode.IsNull()) {
      XmlNode tagKeysMember = tagKeysNode.FirstChild("item");
      m_tagKeysHasBeenSet = !tagKeysMember.IsNull();
      while (!tagKeysMember.IsNull()) {
        m_tagKeys.push_back(tagKeysMember.GetText());
        tagKeysMember = tagKeysMember.NextNode("item");
      }

      m_tagKeysHasBeenSet = true;
    }
  }

  return *this;
}

void TagFieldSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_resourceTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResourceType=" << StringUtils::URLEncode(TaggableResourceTypeMapper::GetNameForTaggableResourceType(m_resourceType))
            << "&";
  }

  if (m_tagKeysHasBeenSet) {
    unsigned tagKeysIdx = 1;
    for (auto& item : m_tagKeys) {
      oStream << location << index << locationValue << ".TagKey." << tagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void TagFieldSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_resourceTypeHasBeenSet) {
    oStream << location
            << ".ResourceType=" << StringUtils::URLEncode(TaggableResourceTypeMapper::GetNameForTaggableResourceType(m_resourceType))
            << "&";
  }
  if (m_tagKeysHasBeenSet) {
    unsigned tagKeysIdx = 1;
    for (auto& item : m_tagKeys) {
      oStream << location << ".TagKey." << tagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
