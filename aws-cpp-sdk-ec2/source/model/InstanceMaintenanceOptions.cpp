/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMaintenanceOptions.h>
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

InstanceMaintenanceOptions::InstanceMaintenanceOptions() : 
    m_autoRecovery(InstanceAutoRecoveryState::NOT_SET),
    m_autoRecoveryHasBeenSet(false)
{
}

InstanceMaintenanceOptions::InstanceMaintenanceOptions(const XmlNode& xmlNode) : 
    m_autoRecovery(InstanceAutoRecoveryState::NOT_SET),
    m_autoRecoveryHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceMaintenanceOptions& InstanceMaintenanceOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoRecoveryNode = resultNode.FirstChild("autoRecovery");
    if(!autoRecoveryNode.IsNull())
    {
      m_autoRecovery = InstanceAutoRecoveryStateMapper::GetInstanceAutoRecoveryStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoveryNode.GetText()).c_str()).c_str());
      m_autoRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMaintenanceOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRecovery=" << InstanceAutoRecoveryStateMapper::GetNameForInstanceAutoRecoveryState(m_autoRecovery) << "&";
  }

}

void InstanceMaintenanceOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoRecoveryHasBeenSet)
  {
      oStream << location << ".AutoRecovery=" << InstanceAutoRecoveryStateMapper::GetNameForInstanceAutoRecoveryState(m_autoRecovery) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
