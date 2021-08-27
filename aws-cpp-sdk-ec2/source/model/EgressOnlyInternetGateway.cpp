/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EgressOnlyInternetGateway.h>
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

EgressOnlyInternetGateway::EgressOnlyInternetGateway() : 
    m_attachmentsHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EgressOnlyInternetGateway::EgressOnlyInternetGateway(const XmlNode& xmlNode) : 
    m_attachmentsHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

EgressOnlyInternetGateway& EgressOnlyInternetGateway::operator =(const XmlNode& xmlNode)
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
    XmlNode egressOnlyInternetGatewayIdNode = resultNode.FirstChild("egressOnlyInternetGatewayId");
    if(!egressOnlyInternetGatewayIdNode.IsNull())
    {
      m_egressOnlyInternetGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(egressOnlyInternetGatewayIdNode.GetText());
      m_egressOnlyInternetGatewayIdHasBeenSet = true;
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

void EgressOnlyInternetGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
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

void EgressOnlyInternetGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
      oStream << location << ".EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
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
