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

#include <aws/elasticache/model/ServiceUpdate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

ServiceUpdate::ServiceUpdate() : 
    m_serviceUpdateNameHasBeenSet(false),
    m_serviceUpdateReleaseDateHasBeenSet(false),
    m_serviceUpdateEndDateHasBeenSet(false),
    m_serviceUpdateSeverity(ServiceUpdateSeverity::NOT_SET),
    m_serviceUpdateSeverityHasBeenSet(false),
    m_serviceUpdateRecommendedApplyByDateHasBeenSet(false),
    m_serviceUpdateStatus(ServiceUpdateStatus::NOT_SET),
    m_serviceUpdateStatusHasBeenSet(false),
    m_serviceUpdateDescriptionHasBeenSet(false),
    m_serviceUpdateType(ServiceUpdateType::NOT_SET),
    m_serviceUpdateTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoUpdateAfterRecommendedApplyByDate(false),
    m_autoUpdateAfterRecommendedApplyByDateHasBeenSet(false),
    m_estimatedUpdateTimeHasBeenSet(false)
{
}

ServiceUpdate::ServiceUpdate(const XmlNode& xmlNode) : 
    m_serviceUpdateNameHasBeenSet(false),
    m_serviceUpdateReleaseDateHasBeenSet(false),
    m_serviceUpdateEndDateHasBeenSet(false),
    m_serviceUpdateSeverity(ServiceUpdateSeverity::NOT_SET),
    m_serviceUpdateSeverityHasBeenSet(false),
    m_serviceUpdateRecommendedApplyByDateHasBeenSet(false),
    m_serviceUpdateStatus(ServiceUpdateStatus::NOT_SET),
    m_serviceUpdateStatusHasBeenSet(false),
    m_serviceUpdateDescriptionHasBeenSet(false),
    m_serviceUpdateType(ServiceUpdateType::NOT_SET),
    m_serviceUpdateTypeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_autoUpdateAfterRecommendedApplyByDate(false),
    m_autoUpdateAfterRecommendedApplyByDateHasBeenSet(false),
    m_estimatedUpdateTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceUpdate& ServiceUpdate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceUpdateNameNode = resultNode.FirstChild("ServiceUpdateName");
    if(!serviceUpdateNameNode.IsNull())
    {
      m_serviceUpdateName = serviceUpdateNameNode.GetText();
      m_serviceUpdateNameHasBeenSet = true;
    }
    XmlNode serviceUpdateReleaseDateNode = resultNode.FirstChild("ServiceUpdateReleaseDate");
    if(!serviceUpdateReleaseDateNode.IsNull())
    {
      m_serviceUpdateReleaseDate = DateTime(StringUtils::Trim(serviceUpdateReleaseDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_serviceUpdateReleaseDateHasBeenSet = true;
    }
    XmlNode serviceUpdateEndDateNode = resultNode.FirstChild("ServiceUpdateEndDate");
    if(!serviceUpdateEndDateNode.IsNull())
    {
      m_serviceUpdateEndDate = DateTime(StringUtils::Trim(serviceUpdateEndDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_serviceUpdateEndDateHasBeenSet = true;
    }
    XmlNode serviceUpdateSeverityNode = resultNode.FirstChild("ServiceUpdateSeverity");
    if(!serviceUpdateSeverityNode.IsNull())
    {
      m_serviceUpdateSeverity = ServiceUpdateSeverityMapper::GetServiceUpdateSeverityForName(StringUtils::Trim(serviceUpdateSeverityNode.GetText().c_str()).c_str());
      m_serviceUpdateSeverityHasBeenSet = true;
    }
    XmlNode serviceUpdateRecommendedApplyByDateNode = resultNode.FirstChild("ServiceUpdateRecommendedApplyByDate");
    if(!serviceUpdateRecommendedApplyByDateNode.IsNull())
    {
      m_serviceUpdateRecommendedApplyByDate = DateTime(StringUtils::Trim(serviceUpdateRecommendedApplyByDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_serviceUpdateRecommendedApplyByDateHasBeenSet = true;
    }
    XmlNode serviceUpdateStatusNode = resultNode.FirstChild("ServiceUpdateStatus");
    if(!serviceUpdateStatusNode.IsNull())
    {
      m_serviceUpdateStatus = ServiceUpdateStatusMapper::GetServiceUpdateStatusForName(StringUtils::Trim(serviceUpdateStatusNode.GetText().c_str()).c_str());
      m_serviceUpdateStatusHasBeenSet = true;
    }
    XmlNode serviceUpdateDescriptionNode = resultNode.FirstChild("ServiceUpdateDescription");
    if(!serviceUpdateDescriptionNode.IsNull())
    {
      m_serviceUpdateDescription = serviceUpdateDescriptionNode.GetText();
      m_serviceUpdateDescriptionHasBeenSet = true;
    }
    XmlNode serviceUpdateTypeNode = resultNode.FirstChild("ServiceUpdateType");
    if(!serviceUpdateTypeNode.IsNull())
    {
      m_serviceUpdateType = ServiceUpdateTypeMapper::GetServiceUpdateTypeForName(StringUtils::Trim(serviceUpdateTypeNode.GetText().c_str()).c_str());
      m_serviceUpdateTypeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode autoUpdateAfterRecommendedApplyByDateNode = resultNode.FirstChild("AutoUpdateAfterRecommendedApplyByDate");
    if(!autoUpdateAfterRecommendedApplyByDateNode.IsNull())
    {
      m_autoUpdateAfterRecommendedApplyByDate = StringUtils::ConvertToBool(StringUtils::Trim(autoUpdateAfterRecommendedApplyByDateNode.GetText().c_str()).c_str());
      m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = true;
    }
    XmlNode estimatedUpdateTimeNode = resultNode.FirstChild("EstimatedUpdateTime");
    if(!estimatedUpdateTimeNode.IsNull())
    {
      m_estimatedUpdateTime = estimatedUpdateTimeNode.GetText();
      m_estimatedUpdateTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceUpdate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  if(m_serviceUpdateReleaseDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateEndDate=" << StringUtils::URLEncode(m_serviceUpdateEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateSeverity=" << ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity) << "&";
  }

  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateStatus=" << ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus) << "&";
  }

  if(m_serviceUpdateDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateDescription=" << StringUtils::URLEncode(m_serviceUpdateDescription.c_str()) << "&";
  }

  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateType=" << ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoUpdateAfterRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoUpdateAfterRecommendedApplyByDate=" << std::boolalpha << m_autoUpdateAfterRecommendedApplyByDate << "&";
  }

  if(m_estimatedUpdateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedUpdateTime=" << StringUtils::URLEncode(m_estimatedUpdateTime.c_str()) << "&";
  }

}

void ServiceUpdate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceUpdateNameHasBeenSet)
  {
      oStream << location << ".ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }
  if(m_serviceUpdateReleaseDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateEndDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateEndDate=" << StringUtils::URLEncode(m_serviceUpdateEndDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << ".ServiceUpdateSeverity=" << ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity) << "&";
  }
  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << ".ServiceUpdateStatus=" << ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus) << "&";
  }
  if(m_serviceUpdateDescriptionHasBeenSet)
  {
      oStream << location << ".ServiceUpdateDescription=" << StringUtils::URLEncode(m_serviceUpdateDescription.c_str()) << "&";
  }
  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << ".ServiceUpdateType=" << ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_autoUpdateAfterRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << ".AutoUpdateAfterRecommendedApplyByDate=" << std::boolalpha << m_autoUpdateAfterRecommendedApplyByDate << "&";
  }
  if(m_estimatedUpdateTimeHasBeenSet)
  {
      oStream << location << ".EstimatedUpdateTime=" << StringUtils::URLEncode(m_estimatedUpdateTime.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
