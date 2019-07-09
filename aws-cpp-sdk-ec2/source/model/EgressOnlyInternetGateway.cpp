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
    m_egressOnlyInternetGatewayIdHasBeenSet(false)
{
}

EgressOnlyInternetGateway::EgressOnlyInternetGateway(const XmlNode& xmlNode) : 
    m_attachmentsHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false)
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
      m_egressOnlyInternetGatewayId = egressOnlyInternetGatewayIdNode.GetText();
      m_egressOnlyInternetGatewayIdHasBeenSet = true;
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
