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

#include <aws/redshift/model/DeferredMaintenanceWindow.h>
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

DeferredMaintenanceWindow::DeferredMaintenanceWindow() : 
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false),
    m_deferMaintenanceEndTimeHasBeenSet(false)
{
}

DeferredMaintenanceWindow::DeferredMaintenanceWindow(const XmlNode& xmlNode) : 
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false),
    m_deferMaintenanceEndTimeHasBeenSet(false)
{
  *this = xmlNode;
}

DeferredMaintenanceWindow& DeferredMaintenanceWindow::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deferMaintenanceIdentifierNode = resultNode.FirstChild("DeferMaintenanceIdentifier");
    if(!deferMaintenanceIdentifierNode.IsNull())
    {
      m_deferMaintenanceIdentifier = deferMaintenanceIdentifierNode.GetText();
      m_deferMaintenanceIdentifierHasBeenSet = true;
    }
    XmlNode deferMaintenanceStartTimeNode = resultNode.FirstChild("DeferMaintenanceStartTime");
    if(!deferMaintenanceStartTimeNode.IsNull())
    {
      m_deferMaintenanceStartTime = DateTime(StringUtils::Trim(deferMaintenanceStartTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_deferMaintenanceStartTimeHasBeenSet = true;
    }
    XmlNode deferMaintenanceEndTimeNode = resultNode.FirstChild("DeferMaintenanceEndTime");
    if(!deferMaintenanceEndTimeNode.IsNull())
    {
      m_deferMaintenanceEndTime = DateTime(StringUtils::Trim(deferMaintenanceEndTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_deferMaintenanceEndTimeHasBeenSet = true;
    }
  }

  return *this;
}

void DeferredMaintenanceWindow::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deferMaintenanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeferMaintenanceIdentifier=" << StringUtils::URLEncode(m_deferMaintenanceIdentifier.c_str()) << "&";
  }

  if(m_deferMaintenanceStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeferMaintenanceStartTime=" << StringUtils::URLEncode(m_deferMaintenanceStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deferMaintenanceEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeferMaintenanceEndTime=" << StringUtils::URLEncode(m_deferMaintenanceEndTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DeferredMaintenanceWindow::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deferMaintenanceIdentifierHasBeenSet)
  {
      oStream << location << ".DeferMaintenanceIdentifier=" << StringUtils::URLEncode(m_deferMaintenanceIdentifier.c_str()) << "&";
  }
  if(m_deferMaintenanceStartTimeHasBeenSet)
  {
      oStream << location << ".DeferMaintenanceStartTime=" << StringUtils::URLEncode(m_deferMaintenanceStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deferMaintenanceEndTimeHasBeenSet)
  {
      oStream << location << ".DeferMaintenanceEndTime=" << StringUtils::URLEncode(m_deferMaintenanceEndTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
