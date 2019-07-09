/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_action = actionNode.GetText();
      m_actionHasBeenSet = true;
    }
    XmlNode autoAppliedAfterDateNode = resultNode.FirstChild("AutoAppliedAfterDate");
    if(!autoAppliedAfterDateNode.IsNull())
    {
      m_autoAppliedAfterDate = DateTime(StringUtils::Trim(autoAppliedAfterDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_autoAppliedAfterDateHasBeenSet = true;
    }
    XmlNode forcedApplyDateNode = resultNode.FirstChild("ForcedApplyDate");
    if(!forcedApplyDateNode.IsNull())
    {
      m_forcedApplyDate = DateTime(StringUtils::Trim(forcedApplyDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_forcedApplyDateHasBeenSet = true;
    }
    XmlNode optInStatusNode = resultNode.FirstChild("OptInStatus");
    if(!optInStatusNode.IsNull())
    {
      m_optInStatus = optInStatusNode.GetText();
      m_optInStatusHasBeenSet = true;
    }
    XmlNode currentApplyDateNode = resultNode.FirstChild("CurrentApplyDate");
    if(!currentApplyDateNode.IsNull())
    {
      m_currentApplyDate = DateTime(StringUtils::Trim(currentApplyDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_currentApplyDateHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
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
      oStream << location << index << locationValue << ".AutoAppliedAfterDate=" << StringUtils::URLEncode(m_autoAppliedAfterDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ForcedApplyDate=" << StringUtils::URLEncode(m_forcedApplyDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_optInStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }

  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentApplyDate=" << StringUtils::URLEncode(m_currentApplyDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".AutoAppliedAfterDate=" << StringUtils::URLEncode(m_autoAppliedAfterDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << ".ForcedApplyDate=" << StringUtils::URLEncode(m_forcedApplyDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }
  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << ".CurrentApplyDate=" << StringUtils::URLEncode(m_currentApplyDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
