﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptionsRequest.h>
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

LaunchTemplateInstanceMaintenanceOptionsRequest::LaunchTemplateInstanceMaintenanceOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LaunchTemplateInstanceMaintenanceOptionsRequest& LaunchTemplateInstanceMaintenanceOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoRecoveryNode = resultNode.FirstChild("AutoRecovery");
    if(!autoRecoveryNode.IsNull())
    {
      m_autoRecovery = LaunchTemplateAutoRecoveryStateMapper::GetLaunchTemplateAutoRecoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoveryNode.GetText()).c_str()));
      m_autoRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceMaintenanceOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRecovery=" << StringUtils::URLEncode(LaunchTemplateAutoRecoveryStateMapper::GetNameForLaunchTemplateAutoRecoveryState(m_autoRecovery)) << "&";
  }

}

void LaunchTemplateInstanceMaintenanceOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << ".AutoRecovery=" << StringUtils::URLEncode(LaunchTemplateAutoRecoveryStateMapper::GetNameForLaunchTemplateAutoRecoveryState(m_autoRecovery)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
