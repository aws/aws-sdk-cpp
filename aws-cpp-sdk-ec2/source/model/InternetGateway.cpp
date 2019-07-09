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

#include <aws/ec2/model/InternetGateway.h>
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

InternetGateway::InternetGateway() : 
    m_attachmentsHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

InternetGateway::InternetGateway(const XmlNode& xmlNode) : 
    m_attachmentsHasBeenSet(false),
    m_internetGatewayIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

InternetGateway& InternetGateway::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attachmentsNode = resultNode.FirstChild("attachmentSet");
    if(!attachmentsNode.IsNull())
    {
      XmlNode attachmentsMember = attachmentsNode.FirstChild("item");
      while(!attachmentsMember.IsNull())
      {
        m_attachments.push_back(attachmentsMember);
        attachmentsMember = attachmentsMember.NextNode("item");
      }

      m_attachmentsHasBeenSet = true;
    }
    XmlNode internetGatewayIdNode = resultNode.FirstChild("internetGatewayId");
    if(!internetGatewayIdNode.IsNull())
    {
      m_internetGatewayId = internetGatewayIdNode.GetText();
      m_internetGatewayIdHasBeenSet = true;
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

void InternetGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attachmentsHasBeenSet)
  {
      unsigned attachmentsIdx = 1;
      for(auto& item : m_attachments)
      {
        Aws::StringStream attachmentsSs;
        attachmentsSs << location << index << locationValue << ".AttachmentSet." << attachmentsIdx++;
        item.OutputToStream(oStream, attachmentsSs.str().c_str());
      }
  }

  if(m_internetGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InternetGatewayId=" << StringUtils::URLEncode(m_internetGatewayId.c_str()) << "&";
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

void InternetGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attachmentsHasBeenSet)
  {
      unsigned attachmentsIdx = 1;
      for(auto& item : m_attachments)
      {
        Aws::StringStream attachmentsSs;
        attachmentsSs << location <<  ".AttachmentSet." << attachmentsIdx++;
        item.OutputToStream(oStream, attachmentsSs.str().c_str());
      }
  }
  if(m_internetGatewayIdHasBeenSet)
  {
      oStream << location << ".InternetGatewayId=" << StringUtils::URLEncode(m_internetGatewayId.c_str()) << "&";
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
