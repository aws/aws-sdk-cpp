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

#include <aws/docdb/model/DBEngineVersion.h>
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

DBEngineVersion::DBEngineVersion() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_dBEngineDescriptionHasBeenSet(false),
    m_dBEngineVersionDescriptionHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false)
{
}

DBEngineVersion::DBEngineVersion(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_dBEngineDescriptionHasBeenSet(false),
    m_dBEngineVersionDescriptionHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false)
{
  *this = xmlNode;
}

DBEngineVersion& DBEngineVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = dBParameterGroupFamilyNode.GetText();
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = dBEngineDescriptionNode.GetText();
      m_dBEngineDescriptionHasBeenSet = true;
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = dBEngineVersionDescriptionNode.GetText();
      m_dBEngineVersionDescriptionHasBeenSet = true;
    }
    XmlNode validUpgradeTargetNode = resultNode.FirstChild("ValidUpgradeTarget");
    if(!validUpgradeTargetNode.IsNull())
    {
      XmlNode validUpgradeTargetMember = validUpgradeTargetNode.FirstChild("UpgradeTarget");
      while(!validUpgradeTargetMember.IsNull())
      {
        m_validUpgradeTarget.push_back(validUpgradeTargetMember);
        validUpgradeTargetMember = validUpgradeTargetMember.NextNode("UpgradeTarget");
      }

      m_validUpgradeTargetHasBeenSet = true;
    }
    XmlNode exportableLogTypesNode = resultNode.FirstChild("ExportableLogTypes");
    if(!exportableLogTypesNode.IsNull())
    {
      XmlNode exportableLogTypesMember = exportableLogTypesNode.FirstChild("member");
      while(!exportableLogTypesMember.IsNull())
      {
        m_exportableLogTypes.push_back(exportableLogTypesMember.GetText());
        exportableLogTypesMember = exportableLogTypesMember.NextNode("member");
      }

      m_exportableLogTypesHasBeenSet = true;
    }
    XmlNode supportsLogExportsToCloudwatchLogsNode = resultNode.FirstChild("SupportsLogExportsToCloudwatchLogs");
    if(!supportsLogExportsToCloudwatchLogsNode.IsNull())
    {
      m_supportsLogExportsToCloudwatchLogs = StringUtils::ConvertToBool(StringUtils::Trim(supportsLogExportsToCloudwatchLogsNode.GetText().c_str()).c_str());
      m_supportsLogExportsToCloudwatchLogsHasBeenSet = true;
    }
  }

  return *this;
}

void DBEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_dBEngineDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBEngineDescription=" << StringUtils::URLEncode(m_dBEngineDescription.c_str()) << "&";
  }

  if(m_dBEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBEngineVersionDescription=" << StringUtils::URLEncode(m_dBEngineVersionDescription.c_str()) << "&";
  }

  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location << index << locationValue << ".UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
      }
  }

  if(m_exportableLogTypesHasBeenSet)
  {
      unsigned exportableLogTypesIdx = 1;
      for(auto& item : m_exportableLogTypes)
      {
        oStream << location << index << locationValue << ".ExportableLogTypes.member." << exportableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsLogExportsToCloudwatchLogsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsLogExportsToCloudwatchLogs=" << std::boolalpha << m_supportsLogExportsToCloudwatchLogs << "&";
  }

}

void DBEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_dBEngineDescriptionHasBeenSet)
  {
      oStream << location << ".DBEngineDescription=" << StringUtils::URLEncode(m_dBEngineDescription.c_str()) << "&";
  }
  if(m_dBEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << ".DBEngineVersionDescription=" << StringUtils::URLEncode(m_dBEngineVersionDescription.c_str()) << "&";
  }
  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location <<  ".UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
      }
  }
  if(m_exportableLogTypesHasBeenSet)
  {
      unsigned exportableLogTypesIdx = 1;
      for(auto& item : m_exportableLogTypes)
      {
        oStream << location << ".ExportableLogTypes.member." << exportableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsLogExportsToCloudwatchLogsHasBeenSet)
  {
      oStream << location << ".SupportsLogExportsToCloudwatchLogs=" << std::boolalpha << m_supportsLogExportsToCloudwatchLogs << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
