/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ServiceUpdate::ServiceUpdate(const XmlNode& xmlNode)
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
      m_serviceUpdateName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateNameNode.GetText());
      m_serviceUpdateNameHasBeenSet = true;
    }
    XmlNode serviceUpdateReleaseDateNode = resultNode.FirstChild("ServiceUpdateReleaseDate");
    if(!serviceUpdateReleaseDateNode.IsNull())
    {
      m_serviceUpdateReleaseDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateReleaseDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_serviceUpdateReleaseDateHasBeenSet = true;
    }
    XmlNode serviceUpdateEndDateNode = resultNode.FirstChild("ServiceUpdateEndDate");
    if(!serviceUpdateEndDateNode.IsNull())
    {
      m_serviceUpdateEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_serviceUpdateEndDateHasBeenSet = true;
    }
    XmlNode serviceUpdateSeverityNode = resultNode.FirstChild("ServiceUpdateSeverity");
    if(!serviceUpdateSeverityNode.IsNull())
    {
      m_serviceUpdateSeverity = ServiceUpdateSeverityMapper::GetServiceUpdateSeverityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateSeverityNode.GetText()).c_str()));
      m_serviceUpdateSeverityHasBeenSet = true;
    }
    XmlNode serviceUpdateRecommendedApplyByDateNode = resultNode.FirstChild("ServiceUpdateRecommendedApplyByDate");
    if(!serviceUpdateRecommendedApplyByDateNode.IsNull())
    {
      m_serviceUpdateRecommendedApplyByDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateRecommendedApplyByDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_serviceUpdateRecommendedApplyByDateHasBeenSet = true;
    }
    XmlNode serviceUpdateStatusNode = resultNode.FirstChild("ServiceUpdateStatus");
    if(!serviceUpdateStatusNode.IsNull())
    {
      m_serviceUpdateStatus = ServiceUpdateStatusMapper::GetServiceUpdateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateStatusNode.GetText()).c_str()));
      m_serviceUpdateStatusHasBeenSet = true;
    }
    XmlNode serviceUpdateDescriptionNode = resultNode.FirstChild("ServiceUpdateDescription");
    if(!serviceUpdateDescriptionNode.IsNull())
    {
      m_serviceUpdateDescription = Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateDescriptionNode.GetText());
      m_serviceUpdateDescriptionHasBeenSet = true;
    }
    XmlNode serviceUpdateTypeNode = resultNode.FirstChild("ServiceUpdateType");
    if(!serviceUpdateTypeNode.IsNull())
    {
      m_serviceUpdateType = ServiceUpdateTypeMapper::GetServiceUpdateTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceUpdateTypeNode.GetText()).c_str()));
      m_serviceUpdateTypeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode autoUpdateAfterRecommendedApplyByDateNode = resultNode.FirstChild("AutoUpdateAfterRecommendedApplyByDate");
    if(!autoUpdateAfterRecommendedApplyByDateNode.IsNull())
    {
      m_autoUpdateAfterRecommendedApplyByDate = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoUpdateAfterRecommendedApplyByDateNode.GetText()).c_str()).c_str());
      m_autoUpdateAfterRecommendedApplyByDateHasBeenSet = true;
    }
    XmlNode estimatedUpdateTimeNode = resultNode.FirstChild("EstimatedUpdateTime");
    if(!estimatedUpdateTimeNode.IsNull())
    {
      m_estimatedUpdateTime = Aws::Utils::Xml::DecodeEscapedXmlText(estimatedUpdateTimeNode.GetText());
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
      oStream << location << index << locationValue << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateEndDate=" << StringUtils::URLEncode(m_serviceUpdateEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateSeverity=" << StringUtils::URLEncode(ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity)) << "&";
  }

  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateStatus=" << StringUtils::URLEncode(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus)) << "&";
  }

  if(m_serviceUpdateDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateDescription=" << StringUtils::URLEncode(m_serviceUpdateDescription.c_str()) << "&";
  }

  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceUpdateType=" << StringUtils::URLEncode(ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType)) << "&";
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
      oStream << location << ".ServiceUpdateReleaseDate=" << StringUtils::URLEncode(m_serviceUpdateReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateEndDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateEndDate=" << StringUtils::URLEncode(m_serviceUpdateEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateSeverityHasBeenSet)
  {
      oStream << location << ".ServiceUpdateSeverity=" << StringUtils::URLEncode(ServiceUpdateSeverityMapper::GetNameForServiceUpdateSeverity(m_serviceUpdateSeverity)) << "&";
  }
  if(m_serviceUpdateRecommendedApplyByDateHasBeenSet)
  {
      oStream << location << ".ServiceUpdateRecommendedApplyByDate=" << StringUtils::URLEncode(m_serviceUpdateRecommendedApplyByDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_serviceUpdateStatusHasBeenSet)
  {
      oStream << location << ".ServiceUpdateStatus=" << StringUtils::URLEncode(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_serviceUpdateStatus)) << "&";
  }
  if(m_serviceUpdateDescriptionHasBeenSet)
  {
      oStream << location << ".ServiceUpdateDescription=" << StringUtils::URLEncode(m_serviceUpdateDescription.c_str()) << "&";
  }
  if(m_serviceUpdateTypeHasBeenSet)
  {
      oStream << location << ".ServiceUpdateType=" << StringUtils::URLEncode(ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_serviceUpdateType)) << "&";
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
