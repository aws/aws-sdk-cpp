/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TerminateConnectionStatus.h>
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

TerminateConnectionStatus::TerminateConnectionStatus() : 
    m_connectionIdHasBeenSet(false),
    m_previousStatusHasBeenSet(false),
    m_currentStatusHasBeenSet(false)
{
}

TerminateConnectionStatus::TerminateConnectionStatus(const XmlNode& xmlNode) : 
    m_connectionIdHasBeenSet(false),
    m_previousStatusHasBeenSet(false),
    m_currentStatusHasBeenSet(false)
{
  *this = xmlNode;
}

TerminateConnectionStatus& TerminateConnectionStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode connectionIdNode = resultNode.FirstChild("connectionId");
    if(!connectionIdNode.IsNull())
    {
      m_connectionId = Aws::Utils::Xml::DecodeEscapedXmlText(connectionIdNode.GetText());
      m_connectionIdHasBeenSet = true;
    }
    XmlNode previousStatusNode = resultNode.FirstChild("previousStatus");
    if(!previousStatusNode.IsNull())
    {
      m_previousStatus = previousStatusNode;
      m_previousStatusHasBeenSet = true;
    }
    XmlNode currentStatusNode = resultNode.FirstChild("currentStatus");
    if(!currentStatusNode.IsNull())
    {
      m_currentStatus = currentStatusNode;
      m_currentStatusHasBeenSet = true;
    }
  }

  return *this;
}

void TerminateConnectionStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_connectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }

  if(m_previousStatusHasBeenSet)
  {
      Aws::StringStream previousStatusLocationAndMemberSs;
      previousStatusLocationAndMemberSs << location << index << locationValue << ".PreviousStatus";
      m_previousStatus.OutputToStream(oStream, previousStatusLocationAndMemberSs.str().c_str());
  }

  if(m_currentStatusHasBeenSet)
  {
      Aws::StringStream currentStatusLocationAndMemberSs;
      currentStatusLocationAndMemberSs << location << index << locationValue << ".CurrentStatus";
      m_currentStatus.OutputToStream(oStream, currentStatusLocationAndMemberSs.str().c_str());
  }

}

void TerminateConnectionStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_connectionIdHasBeenSet)
  {
      oStream << location << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }
  if(m_previousStatusHasBeenSet)
  {
      Aws::String previousStatusLocationAndMember(location);
      previousStatusLocationAndMember += ".PreviousStatus";
      m_previousStatus.OutputToStream(oStream, previousStatusLocationAndMember.c_str());
  }
  if(m_currentStatusHasBeenSet)
  {
      Aws::String currentStatusLocationAndMember(location);
      currentStatusLocationAndMember += ".CurrentStatus";
      m_currentStatus.OutputToStream(oStream, currentStatusLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
