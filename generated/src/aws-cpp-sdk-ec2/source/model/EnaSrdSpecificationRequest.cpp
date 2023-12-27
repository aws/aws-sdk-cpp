﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnaSrdSpecificationRequest.h>
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

EnaSrdSpecificationRequest::EnaSrdSpecificationRequest() : 
    m_enaSrdEnabled(false),
    m_enaSrdEnabledHasBeenSet(false),
    m_enaSrdUdpSpecificationHasBeenSet(false)
{
}

EnaSrdSpecificationRequest::EnaSrdSpecificationRequest(const XmlNode& xmlNode) : 
    m_enaSrdEnabled(false),
    m_enaSrdEnabledHasBeenSet(false),
    m_enaSrdUdpSpecificationHasBeenSet(false)
{
  *this = xmlNode;
}

EnaSrdSpecificationRequest& EnaSrdSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enaSrdEnabledNode = resultNode.FirstChild("EnaSrdEnabled");
    if(!enaSrdEnabledNode.IsNull())
    {
      m_enaSrdEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSrdEnabledNode.GetText()).c_str()).c_str());
      m_enaSrdEnabledHasBeenSet = true;
    }
    XmlNode enaSrdUdpSpecificationNode = resultNode.FirstChild("EnaSrdUdpSpecification");
    if(!enaSrdUdpSpecificationNode.IsNull())
    {
      m_enaSrdUdpSpecification = enaSrdUdpSpecificationNode;
      m_enaSrdUdpSpecificationHasBeenSet = true;
    }
  }

  return *this;
}

void EnaSrdSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enaSrdEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSrdEnabled=" << std::boolalpha << m_enaSrdEnabled << "&";
  }

  if(m_enaSrdUdpSpecificationHasBeenSet)
  {
      Aws::StringStream enaSrdUdpSpecificationLocationAndMemberSs;
      enaSrdUdpSpecificationLocationAndMemberSs << location << index << locationValue << ".EnaSrdUdpSpecification";
      m_enaSrdUdpSpecification.OutputToStream(oStream, enaSrdUdpSpecificationLocationAndMemberSs.str().c_str());
  }

}

void EnaSrdSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enaSrdEnabledHasBeenSet)
  {
      oStream << location << ".EnaSrdEnabled=" << std::boolalpha << m_enaSrdEnabled << "&";
  }
  if(m_enaSrdUdpSpecificationHasBeenSet)
  {
      Aws::String enaSrdUdpSpecificationLocationAndMember(location);
      enaSrdUdpSpecificationLocationAndMember += ".EnaSrdUdpSpecification";
      m_enaSrdUdpSpecification.OutputToStream(oStream, enaSrdUdpSpecificationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
