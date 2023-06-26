/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MaintenanceDetails.h>
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

MaintenanceDetails::MaintenanceDetails() : 
    m_pendingMaintenanceHasBeenSet(false),
    m_maintenanceAutoAppliedAfterHasBeenSet(false),
    m_lastMaintenanceAppliedHasBeenSet(false)
{
}

MaintenanceDetails::MaintenanceDetails(const XmlNode& xmlNode) : 
    m_pendingMaintenanceHasBeenSet(false),
    m_maintenanceAutoAppliedAfterHasBeenSet(false),
    m_lastMaintenanceAppliedHasBeenSet(false)
{
  *this = xmlNode;
}

MaintenanceDetails& MaintenanceDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pendingMaintenanceNode = resultNode.FirstChild("pendingMaintenance");
    if(!pendingMaintenanceNode.IsNull())
    {
      m_pendingMaintenance = Aws::Utils::Xml::DecodeEscapedXmlText(pendingMaintenanceNode.GetText());
      m_pendingMaintenanceHasBeenSet = true;
    }
    XmlNode maintenanceAutoAppliedAfterNode = resultNode.FirstChild("maintenanceAutoAppliedAfter");
    if(!maintenanceAutoAppliedAfterNode.IsNull())
    {
      m_maintenanceAutoAppliedAfter = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maintenanceAutoAppliedAfterNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_maintenanceAutoAppliedAfterHasBeenSet = true;
    }
    XmlNode lastMaintenanceAppliedNode = resultNode.FirstChild("lastMaintenanceApplied");
    if(!lastMaintenanceAppliedNode.IsNull())
    {
      m_lastMaintenanceApplied = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastMaintenanceAppliedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastMaintenanceAppliedHasBeenSet = true;
    }
  }

  return *this;
}

void MaintenanceDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_pendingMaintenanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".PendingMaintenance=" << StringUtils::URLEncode(m_pendingMaintenance.c_str()) << "&";
  }

  if(m_maintenanceAutoAppliedAfterHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceAutoAppliedAfter=" << StringUtils::URLEncode(m_maintenanceAutoAppliedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastMaintenanceAppliedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastMaintenanceApplied=" << StringUtils::URLEncode(m_lastMaintenanceApplied.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void MaintenanceDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_pendingMaintenanceHasBeenSet)
  {
      oStream << location << ".PendingMaintenance=" << StringUtils::URLEncode(m_pendingMaintenance.c_str()) << "&";
  }
  if(m_maintenanceAutoAppliedAfterHasBeenSet)
  {
      oStream << location << ".MaintenanceAutoAppliedAfter=" << StringUtils::URLEncode(m_maintenanceAutoAppliedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastMaintenanceAppliedHasBeenSet)
  {
      oStream << location << ".LastMaintenanceApplied=" << StringUtils::URLEncode(m_lastMaintenanceApplied.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
