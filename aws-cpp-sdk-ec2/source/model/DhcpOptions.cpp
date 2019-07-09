/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/DhcpOptions.h>
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

DhcpOptions::DhcpOptions() : 
    m_dhcpConfigurationsHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DhcpOptions::DhcpOptions(const XmlNode& xmlNode) : 
    m_dhcpConfigurationsHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

DhcpOptions& DhcpOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dhcpConfigurationsNode = resultNode.FirstChild("dhcpConfigurationSet");
    if(!dhcpConfigurationsNode.IsNull())
    {
      XmlNode dhcpConfigurationsMember = dhcpConfigurationsNode.FirstChild("item");
      while(!dhcpConfigurationsMember.IsNull())
      {
        m_dhcpConfigurations.push_back(dhcpConfigurationsMember);
        dhcpConfigurationsMember = dhcpConfigurationsMember.NextNode("item");
      }

      m_dhcpConfigurationsHasBeenSet = true;
    }
    XmlNode dhcpOptionsIdNode = resultNode.FirstChild("dhcpOptionsId");
    if(!dhcpOptionsIdNode.IsNull())
    {
      m_dhcpOptionsId = dhcpOptionsIdNode.GetText();
      m_dhcpOptionsIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void DhcpOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dhcpConfigurationsHasBeenSet)
  {
      unsigned dhcpConfigurationsIdx = 1;
      for(auto& item : m_dhcpConfigurations)
      {
        Aws::StringStream dhcpConfigurationsSs;
        dhcpConfigurationsSs << location << index << locationValue << ".DhcpConfigurationSet." << dhcpConfigurationsIdx++;
        item.OutputToStream(oStream, dhcpConfigurationsSs.str().c_str());
      }
  }

  if(m_dhcpOptionsIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DhcpOptionsId=" << StringUtils::URLEncode(m_dhcpOptionsId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void DhcpOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dhcpConfigurationsHasBeenSet)
  {
      unsigned dhcpConfigurationsIdx = 1;
      for(auto& item : m_dhcpConfigurations)
      {
        Aws::StringStream dhcpConfigurationsSs;
        dhcpConfigurationsSs << location <<  ".DhcpConfigurationSet." << dhcpConfigurationsIdx++;
        item.OutputToStream(oStream, dhcpConfigurationsSs.str().c_str());
      }
  }
  if(m_dhcpOptionsIdHasBeenSet)
  {
      oStream << location << ".DhcpOptionsId=" << StringUtils::URLEncode(m_dhcpOptionsId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
