﻿/*
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
    m_databaseVersionHasBeenSet(false)
{
}

UpdateTarget::UpdateTarget(const XmlNode& xmlNode) : 
    m_maintenanceTrackNameHasBeenSet(false),
    m_databaseVersionHasBeenSet(false)
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
      m_maintenanceTrackName = StringUtils::Trim(maintenanceTrackNameNode.GetText().c_str());
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode databaseVersionNode = resultNode.FirstChild("DatabaseVersion");
    if(!databaseVersionNode.IsNull())
    {
      m_databaseVersion = StringUtils::Trim(databaseVersionNode.GetText().c_str());
      m_databaseVersionHasBeenSet = true;
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
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
