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

#include <aws/redshift/model/HsmConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

HsmConfiguration::HsmConfiguration() : 
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hsmIpAddressHasBeenSet(false),
    m_hsmPartitionNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

HsmConfiguration::HsmConfiguration(const XmlNode& xmlNode) : 
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hsmIpAddressHasBeenSet(false),
    m_hsmPartitionNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

HsmConfiguration& HsmConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hsmConfigurationIdentifierNode = resultNode.FirstChild("HsmConfigurationIdentifier");
    if(!hsmConfigurationIdentifierNode.IsNull())
    {
      m_hsmConfigurationIdentifier = hsmConfigurationIdentifierNode.GetText();
      m_hsmConfigurationIdentifierHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode hsmIpAddressNode = resultNode.FirstChild("HsmIpAddress");
    if(!hsmIpAddressNode.IsNull())
    {
      m_hsmIpAddress = hsmIpAddressNode.GetText();
      m_hsmIpAddressHasBeenSet = true;
    }
    XmlNode hsmPartitionNameNode = resultNode.FirstChild("HsmPartitionName");
    if(!hsmPartitionNameNode.IsNull())
    {
      m_hsmPartitionName = hsmPartitionNameNode.GetText();
      m_hsmPartitionNameHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void HsmConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_hsmIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmIpAddress=" << StringUtils::URLEncode(m_hsmIpAddress.c_str()) << "&";
  }

  if(m_hsmPartitionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmPartitionName=" << StringUtils::URLEncode(m_hsmPartitionName.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void HsmConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
      oStream << location << ".HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_hsmIpAddressHasBeenSet)
  {
      oStream << location << ".HsmIpAddress=" << StringUtils::URLEncode(m_hsmIpAddress.c_str()) << "&";
  }
  if(m_hsmPartitionNameHasBeenSet)
  {
      oStream << location << ".HsmPartitionName=" << StringUtils::URLEncode(m_hsmPartitionName.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
