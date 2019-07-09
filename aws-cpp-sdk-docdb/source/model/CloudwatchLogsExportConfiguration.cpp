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

#include <aws/docdb/model/CloudwatchLogsExportConfiguration.h>
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

CloudwatchLogsExportConfiguration::CloudwatchLogsExportConfiguration() : 
    m_enableLogTypesHasBeenSet(false),
    m_disableLogTypesHasBeenSet(false)
{
}

CloudwatchLogsExportConfiguration::CloudwatchLogsExportConfiguration(const XmlNode& xmlNode) : 
    m_enableLogTypesHasBeenSet(false),
    m_disableLogTypesHasBeenSet(false)
{
  *this = xmlNode;
}

CloudwatchLogsExportConfiguration& CloudwatchLogsExportConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enableLogTypesNode = resultNode.FirstChild("EnableLogTypes");
    if(!enableLogTypesNode.IsNull())
    {
      XmlNode enableLogTypesMember = enableLogTypesNode.FirstChild("member");
      while(!enableLogTypesMember.IsNull())
      {
        m_enableLogTypes.push_back(enableLogTypesMember.GetText());
        enableLogTypesMember = enableLogTypesMember.NextNode("member");
      }

      m_enableLogTypesHasBeenSet = true;
    }
    XmlNode disableLogTypesNode = resultNode.FirstChild("DisableLogTypes");
    if(!disableLogTypesNode.IsNull())
    {
      XmlNode disableLogTypesMember = disableLogTypesNode.FirstChild("member");
      while(!disableLogTypesMember.IsNull())
      {
        m_disableLogTypes.push_back(disableLogTypesMember.GetText());
        disableLogTypesMember = disableLogTypesMember.NextNode("member");
      }

      m_disableLogTypesHasBeenSet = true;
    }
  }

  return *this;
}

void CloudwatchLogsExportConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enableLogTypesHasBeenSet)
  {
      unsigned enableLogTypesIdx = 1;
      for(auto& item : m_enableLogTypes)
      {
        oStream << location << index << locationValue << ".EnableLogTypes.member." << enableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_disableLogTypesHasBeenSet)
  {
      unsigned disableLogTypesIdx = 1;
      for(auto& item : m_disableLogTypes)
      {
        oStream << location << index << locationValue << ".DisableLogTypes.member." << disableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void CloudwatchLogsExportConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enableLogTypesHasBeenSet)
  {
      unsigned enableLogTypesIdx = 1;
      for(auto& item : m_enableLogTypes)
      {
        oStream << location << ".EnableLogTypes.member." << enableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_disableLogTypesHasBeenSet)
  {
      unsigned disableLogTypesIdx = 1;
      for(auto& item : m_disableLogTypes)
      {
        oStream << location << ".DisableLogTypes.member." << disableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
