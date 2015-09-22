/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/PendingMaintenanceAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

PendingMaintenanceAction::PendingMaintenanceAction() : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDate(0.0),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDate(0.0),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDate(0.0),
    m_currentApplyDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

PendingMaintenanceAction::PendingMaintenanceAction(const XmlNode& xmlNode) : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDate(0.0),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDate(0.0),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDate(0.0),
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
      m_action = StringUtils::Trim(actionNode.GetText().c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode autoAppliedAfterDateNode = resultNode.FirstChild("AutoAppliedAfterDate");
    if(!autoAppliedAfterDateNode.IsNull())
    {
      m_autoAppliedAfterDate = StringUtils::ConvertToDouble(StringUtils::Trim(autoAppliedAfterDateNode.GetText().c_str()).c_str());
      m_autoAppliedAfterDateHasBeenSet = true;
    }
    XmlNode forcedApplyDateNode = resultNode.FirstChild("ForcedApplyDate");
    if(!forcedApplyDateNode.IsNull())
    {
      m_forcedApplyDate = StringUtils::ConvertToDouble(StringUtils::Trim(forcedApplyDateNode.GetText().c_str()).c_str());
      m_forcedApplyDateHasBeenSet = true;
    }
    XmlNode optInStatusNode = resultNode.FirstChild("OptInStatus");
    if(!optInStatusNode.IsNull())
    {
      m_optInStatus = StringUtils::Trim(optInStatusNode.GetText().c_str());
      m_optInStatusHasBeenSet = true;
    }
    XmlNode currentApplyDateNode = resultNode.FirstChild("CurrentApplyDate");
    if(!currentApplyDateNode.IsNull())
    {
      m_currentApplyDate = StringUtils::ConvertToDouble(StringUtils::Trim(currentApplyDateNode.GetText().c_str()).c_str());
      m_currentApplyDateHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
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
      oStream << location << index << locationValue << ".AutoAppliedAfterDate=" << m_autoAppliedAfterDate << "&";
  }
  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ForcedApplyDate=" << m_forcedApplyDate << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }
  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentApplyDate=" << m_currentApplyDate << "&";
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
      oStream << location << ".AutoAppliedAfterDate=" << m_autoAppliedAfterDate << "&";
  }
  if(m_forcedApplyDateHasBeenSet)
  {
      oStream << location << ".ForcedApplyDate=" << m_forcedApplyDate << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }
  if(m_currentApplyDateHasBeenSet)
  {
      oStream << location << ".CurrentApplyDate=" << m_currentApplyDate << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}
