/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UpdateTarget.h>
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

UpdateTarget::UpdateTarget() : 
    m_maintenanceTrackNameHasBeenSet(false),
    m_databaseVersionHasBeenSet(false),
    m_supportedOperationsHasBeenSet(false)
{
}

UpdateTarget::UpdateTarget(const XmlNode& xmlNode) : 
    m_maintenanceTrackNameHasBeenSet(false),
    m_databaseVersionHasBeenSet(false),
    m_supportedOperationsHasBeenSet(false)
{
  *this = xmlNode;
}

UpdateTarget& UpdateTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maintenanceTrackNameNode = resultNode.FirstChild("MaintenanceTrackName");
    if(!maintenanceTrackNameNode.IsNull())
    {
      m_maintenanceTrackName = Aws::Utils::Xml::DecodeEscapedXmlText(maintenanceTrackNameNode.GetText());
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode databaseVersionNode = resultNode.FirstChild("DatabaseVersion");
    if(!databaseVersionNode.IsNull())
    {
      m_databaseVersion = Aws::Utils::Xml::DecodeEscapedXmlText(databaseVersionNode.GetText());
      m_databaseVersionHasBeenSet = true;
    }
    XmlNode supportedOperationsNode = resultNode.FirstChild("SupportedOperations");
    if(!supportedOperationsNode.IsNull())
    {
      XmlNode supportedOperationsMember = supportedOperationsNode.FirstChild("SupportedOperation");
      while(!supportedOperationsMember.IsNull())
      {
        m_supportedOperations.push_back(supportedOperationsMember);
        supportedOperationsMember = supportedOperationsMember.NextNode("SupportedOperation");
      }

      m_supportedOperationsHasBeenSet = true;
    }
  }

  return *this;
}

void UpdateTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_databaseVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseVersion=" << StringUtils::URLEncode(m_databaseVersion.c_str()) << "&";
  }

  if(m_supportedOperationsHasBeenSet)
  {
      unsigned supportedOperationsIdx = 1;
      for(auto& item : m_supportedOperations)
      {
        Aws::StringStream supportedOperationsSs;
        supportedOperationsSs << location << index << locationValue << ".SupportedOperation." << supportedOperationsIdx++;
        item.OutputToStream(oStream, supportedOperationsSs.str().c_str());
      }
  }

}

void UpdateTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }
  if(m_databaseVersionHasBeenSet)
  {
      oStream << location << ".DatabaseVersion=" << StringUtils::URLEncode(m_databaseVersion.c_str()) << "&";
  }
  if(m_supportedOperationsHasBeenSet)
  {
      unsigned supportedOperationsIdx = 1;
      for(auto& item : m_supportedOperations)
      {
        Aws::StringStream supportedOperationsSs;
        supportedOperationsSs << location <<  ".SupportedOperation." << supportedOperationsIdx++;
        item.OutputToStream(oStream, supportedOperationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
