/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceTagNotificationAttribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

InstanceTagNotificationAttribute::InstanceTagNotificationAttribute() : 
    m_instanceTagKeysHasBeenSet(false),
    m_includeAllTagsOfInstance(false),
    m_includeAllTagsOfInstanceHasBeenSet(false)
{
}

InstanceTagNotificationAttribute::InstanceTagNotificationAttribute(const XmlNode& xmlNode) : 
    m_instanceTagKeysHasBeenSet(false),
    m_includeAllTagsOfInstance(false),
    m_includeAllTagsOfInstanceHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceTagNotificationAttribute& InstanceTagNotificationAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTagKeysNode = resultNode.FirstChild("instanceTagKeySet");
    if(!instanceTagKeysNode.IsNull())
    {
      XmlNode instanceTagKeysMember = instanceTagKeysNode.FirstChild("item");
      while(!instanceTagKeysMember.IsNull())
      {
        m_instanceTagKeys.push_back(instanceTagKeysMember.GetText());
        instanceTagKeysMember = instanceTagKeysMember.NextNode("item");
      }

      m_instanceTagKeysHasBeenSet = true;
    }
    XmlNode includeAllTagsOfInstanceNode = resultNode.FirstChild("includeAllTagsOfInstance");
    if(!includeAllTagsOfInstanceNode.IsNull())
    {
      m_includeAllTagsOfInstance = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeAllTagsOfInstanceNode.GetText()).c_str()).c_str());
      m_includeAllTagsOfInstanceHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTagNotificationAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTagKeysHasBeenSet)
  {
      unsigned instanceTagKeysIdx = 1;
      for(auto& item : m_instanceTagKeys)
      {
        oStream << location << index << locationValue << ".InstanceTagKeySet." << instanceTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_includeAllTagsOfInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".IncludeAllTagsOfInstance=" << std::boolalpha << m_includeAllTagsOfInstance << "&";
  }

}

void InstanceTagNotificationAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTagKeysHasBeenSet)
  {
      unsigned instanceTagKeysIdx = 1;
      for(auto& item : m_instanceTagKeys)
      {
        oStream << location << ".InstanceTagKeySet." << instanceTagKeysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_includeAllTagsOfInstanceHasBeenSet)
  {
      oStream << location << ".IncludeAllTagsOfInstance=" << std::boolalpha << m_includeAllTagsOfInstance << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
