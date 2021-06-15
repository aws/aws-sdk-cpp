/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AquaConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

AquaConfiguration::AquaConfiguration() : 
    m_aquaStatus(AquaStatus::NOT_SET),
    m_aquaStatusHasBeenSet(false),
    m_aquaConfigurationStatus(AquaConfigurationStatus::NOT_SET),
    m_aquaConfigurationStatusHasBeenSet(false)
{
}

AquaConfiguration::AquaConfiguration(const XmlNode& xmlNode) : 
    m_aquaStatus(AquaStatus::NOT_SET),
    m_aquaStatusHasBeenSet(false),
    m_aquaConfigurationStatus(AquaConfigurationStatus::NOT_SET),
    m_aquaConfigurationStatusHasBeenSet(false)
{
  *this = xmlNode;
}

AquaConfiguration& AquaConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aquaStatusNode = resultNode.FirstChild("AquaStatus");
    if(!aquaStatusNode.IsNull())
    {
      m_aquaStatus = AquaStatusMapper::GetAquaStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aquaStatusNode.GetText()).c_str()).c_str());
      m_aquaStatusHasBeenSet = true;
    }
    XmlNode aquaConfigurationStatusNode = resultNode.FirstChild("AquaConfigurationStatus");
    if(!aquaConfigurationStatusNode.IsNull())
    {
      m_aquaConfigurationStatus = AquaConfigurationStatusMapper::GetAquaConfigurationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aquaConfigurationStatusNode.GetText()).c_str()).c_str());
      m_aquaConfigurationStatusHasBeenSet = true;
    }
  }

  return *this;
}

void AquaConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_aquaStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AquaStatus=" << AquaStatusMapper::GetNameForAquaStatus(m_aquaStatus) << "&";
  }

  if(m_aquaConfigurationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".AquaConfigurationStatus=" << AquaConfigurationStatusMapper::GetNameForAquaConfigurationStatus(m_aquaConfigurationStatus) << "&";
  }

}

void AquaConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_aquaStatusHasBeenSet)
  {
      oStream << location << ".AquaStatus=" << AquaStatusMapper::GetNameForAquaStatus(m_aquaStatus) << "&";
  }
  if(m_aquaConfigurationStatusHasBeenSet)
  {
      oStream << location << ".AquaConfigurationStatus=" << AquaConfigurationStatusMapper::GetNameForAquaConfigurationStatus(m_aquaConfigurationStatus) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
