/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/PendingMaintenanceAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

PendingMaintenanceAction::PendingMaintenanceAction() : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

PendingMaintenanceAction::PendingMaintenanceAction(const XmlNode& xmlNode) : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

PendingMaintenanceAction& PendingMaintenanceAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText());
      m_actionHasBeenSet = true;
    }
    XmlNode autoAppliedAfterDateNode = resultNode.FirstChild("AutoAppliedAfterDate");
    if(!autoAppliedAfterDateNode.IsNull())
    {
      m_autoAppliedAfterDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoAppliedAfterDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_autoAppliedAfterDateHasBeenSet = true;
    }
    XmlNode forcedApplyDateNode = resultNode.FirstChild("ForcedApplyDate");
    if(!forcedApplyDateNode.IsNull())
    {
      m_forcedApplyDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(forcedApplyDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_forcedApplyDateHasBeenSet = true;
    }
    XmlNode optInStatusNode = resultNode.FirstChild("OptInStatus");
    if(!optInStatusNode.IsNull())
    {
      m_optInStatus = Aws::Utils::Xml::DecodeEscapedXmlText(optInStatusNode.GetText());
      m_optInStatusHasBeenSet = true;
    }
    XmlNode currentApplyDateNode = resultNode.FirstChild("CurrentApplyDate");
    if(!currentApplyDateNode.IsNull())
    {
      m_currentApplyDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentApplyDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_currentApplyDateHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void PendingMaintenanceAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << StringUtils::URLEncode(m_action.c_str()) << "&";
  }

  if(m_autoAppliedAfterDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoAppliedAfterDate=" << StringUtils::URLEncode(m_autoAppliedAfterDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ForcedApplyDate=" << StringUtils::URLEncode(m_forcedApplyDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_optInStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }

  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentApplyDate=" << StringUtils::URLEncode(m_currentApplyDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void PendingMaintenanceAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << StringUtils::URLEncode(m_action.c_str()) << "&";
  }
  if(m_autoAppliedAfterDateHasBeenSet)
  {
      oStream << location << ".AutoAppliedAfterDate=" << StringUtils::URLEncode(m_autoAppliedAfterDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << ".ForcedApplyDate=" << StringUtils::URLEncode(m_forcedApplyDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }
  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << ".CurrentApplyDate=" << StringUtils::URLEncode(m_currentApplyDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
