/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PathStatementRequest.h>
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

PathStatementRequest::PathStatementRequest() : 
    m_packetHeaderStatementHasBeenSet(false),
    m_resourceStatementHasBeenSet(false)
{
}

PathStatementRequest::PathStatementRequest(const XmlNode& xmlNode) : 
    m_packetHeaderStatementHasBeenSet(false),
    m_resourceStatementHasBeenSet(false)
{
  *this = xmlNode;
}

PathStatementRequest& PathStatementRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode packetHeaderStatementNode = resultNode.FirstChild("PacketHeaderStatement");
    if(!packetHeaderStatementNode.IsNull())
    {
      m_packetHeaderStatement = packetHeaderStatementNode;
      m_packetHeaderStatementHasBeenSet = true;
    }
    XmlNode resourceStatementNode = resultNode.FirstChild("ResourceStatement");
    if(!resourceStatementNode.IsNull())
    {
      m_resourceStatement = resourceStatementNode;
      m_resourceStatementHasBeenSet = true;
    }
  }

  return *this;
}

void PathStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_packetHeaderStatementHasBeenSet)
  {
      Aws::StringStream packetHeaderStatementLocationAndMemberSs;
      packetHeaderStatementLocationAndMemberSs << location << index << locationValue << ".PacketHeaderStatement";
      m_packetHeaderStatement.OutputToStream(oStream, packetHeaderStatementLocationAndMemberSs.str().c_str());
  }

  if(m_resourceStatementHasBeenSet)
  {
      Aws::StringStream resourceStatementLocationAndMemberSs;
      resourceStatementLocationAndMemberSs << location << index << locationValue << ".ResourceStatement";
      m_resourceStatement.OutputToStream(oStream, resourceStatementLocationAndMemberSs.str().c_str());
  }

}

void PathStatementRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_packetHeaderStatementHasBeenSet)
  {
      Aws::String packetHeaderStatementLocationAndMember(location);
      packetHeaderStatementLocationAndMember += ".PacketHeaderStatement";
      m_packetHeaderStatement.OutputToStream(oStream, packetHeaderStatementLocationAndMember.c_str());
  }
  if(m_resourceStatementHasBeenSet)
  {
      Aws::String resourceStatementLocationAndMember(location);
      resourceStatementLocationAndMember += ".ResourceStatement";
      m_resourceStatement.OutputToStream(oStream, resourceStatementLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
