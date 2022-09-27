/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMaintenanceOptions.h>
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

LaunchTemplateInstanceMaintenanceOptions::LaunchTemplateInstanceMaintenanceOptions() : 
    m_autoRecovery(LaunchTemplateAutoRecoveryState::NOT_SET),
    m_autoRecoveryHasBeenSet(false)
{
}

LaunchTemplateInstanceMaintenanceOptions::LaunchTemplateInstanceMaintenanceOptions(const XmlNode& xmlNode) : 
    m_autoRecovery(LaunchTemplateAutoRecoveryState::NOT_SET),
    m_autoRecoveryHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateInstanceMaintenanceOptions& LaunchTemplateInstanceMaintenanceOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoRecoveryNode = resultNode.FirstChild("autoRecovery");
    if(!autoRecoveryNode.IsNull())
    {
      m_autoRecovery = LaunchTemplateAutoRecoveryStateMapper::GetLaunchTemplateAutoRecoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoveryNode.GetText()).c_str()).c_str());
      m_autoRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceMaintenanceOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRecovery=" << LaunchTemplateAutoRecoveryStateMapper::GetNameForLaunchTemplateAutoRecoveryState(m_autoRecovery) << "&";
  }

}

void LaunchTemplateInstanceMaintenanceOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << ".AutoRecovery=" << LaunchTemplateAutoRecoveryStateMapper::GetNameForLaunchTemplateAutoRecoveryState(m_autoRecovery) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
