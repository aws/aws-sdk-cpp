﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstancesModificationResponse.h>
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

ReservedInstancesModificationResponse::ReservedInstancesModificationResponse() : 
    m_reservedInstancesIdHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
}

ReservedInstancesModificationResponse::ReservedInstancesModificationResponse(const XmlNode& xmlNode) : 
    m_reservedInstancesIdHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesModificationResponse& ReservedInstancesModificationResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedInstancesIdNode.GetText());
      m_reservedInstancesIdHasBeenSet = true;
    }
    XmlNode targetConfigurationNode = resultNode.FirstChild("targetConfiguration");
    if(!targetConfigurationNode.IsNull())
    {
      m_targetConfiguration = targetConfigurationNode;
      m_targetConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstancesModificationResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  if(m_targetConfigurationHasBeenSet)
  {
      Aws::StringStream targetConfigurationLocationAndMemberSs;
      targetConfigurationLocationAndMemberSs << location << index << locationValue << ".TargetConfiguration";
      m_targetConfiguration.OutputToStream(oStream, targetConfigurationLocationAndMemberSs.str().c_str());
  }

}

void ReservedInstancesModificationResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
  if(m_targetConfigurationHasBeenSet)
  {
      Aws::String targetConfigurationLocationAndMember(location);
      targetConfigurationLocationAndMember += ".TargetConfiguration";
      m_targetConfiguration.OutputToStream(oStream, targetConfigurationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
