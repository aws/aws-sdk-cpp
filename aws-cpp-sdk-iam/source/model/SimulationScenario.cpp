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
#include <aws/iam/model/SimulationScenario.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SimulationScenario::SimulationScenario() : 
    m_scenarioIdHasBeenSet(false),
    m_actionNamesHasBeenSet(false),
    m_resourceNamesHasBeenSet(false),
    m_contextEntriesHasBeenSet(false)
{
}

SimulationScenario::SimulationScenario(const XmlNode& xmlNode) : 
    m_scenarioIdHasBeenSet(false),
    m_actionNamesHasBeenSet(false),
    m_resourceNamesHasBeenSet(false),
    m_contextEntriesHasBeenSet(false)
{
  *this = xmlNode;
}

SimulationScenario& SimulationScenario::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scenarioIdNode = resultNode.FirstChild("ScenarioId");
    if(!scenarioIdNode.IsNull())
    {
      m_scenarioId = StringUtils::Trim(scenarioIdNode.GetText().c_str());
      m_scenarioIdHasBeenSet = true;
    }
    XmlNode actionNamesNodeParent = resultNode.FirstChild("ActionNames");
    XmlNode actionNamesNode = actionNamesNodeParent.FirstChild("member");
    if(!actionNamesNode.IsNull())
    {
      while(!actionNamesNode.IsNull())
      {
        m_actionNames.push_back(StringUtils::Trim(actionNamesNode.GetText().c_str()));
        actionNamesNode = actionNamesNode.NextNode("member");
      }

      m_actionNamesHasBeenSet = true;
    }
    XmlNode resourceNamesNodeParent = resultNode.FirstChild("ResourceNames");
    XmlNode resourceNamesNode = resourceNamesNodeParent.FirstChild("member");
    if(!resourceNamesNode.IsNull())
    {
      while(!resourceNamesNode.IsNull())
      {
        m_resourceNames.push_back(StringUtils::Trim(resourceNamesNode.GetText().c_str()));
        resourceNamesNode = resourceNamesNode.NextNode("member");
      }

      m_resourceNamesHasBeenSet = true;
    }
    XmlNode contextEntriesNodeParent = resultNode.FirstChild("ContextEntries");
    XmlNode contextEntriesNode = contextEntriesNodeParent.FirstChild("member");
    if(!contextEntriesNode.IsNull())
    {
      while(!contextEntriesNode.IsNull())
      {
        m_contextEntries.push_back(contextEntriesNode);
        contextEntriesNode = contextEntriesNode.NextNode("member");
      }

      m_contextEntriesHasBeenSet = true;
    }
  }

  return *this;
}

void SimulationScenario::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scenarioIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScenarioId=" << StringUtils::URLEncode(m_scenarioId.c_str()) << "&";
  }
  if(m_actionNamesHasBeenSet)
  {
      for(auto& item : m_actionNames)
      {
        oStream << location << index << locationValue << ".ActionNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceNamesHasBeenSet)
  {
      for(auto& item : m_resourceNames)
      {
        oStream << location << index << locationValue << ".ResourceNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_contextEntriesHasBeenSet)
  {
      for(auto& item : m_contextEntries)
      {
        Aws::StringStream contextEntriesSs;
        contextEntriesSs << location << index << locationValue << ".ContextEntries";
        item.OutputToStream(oStream, contextEntriesSs.str().c_str());
      }
  }
}

void SimulationScenario::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scenarioIdHasBeenSet)
  {
      oStream << location << ".ScenarioId=" << StringUtils::URLEncode(m_scenarioId.c_str()) << "&";
  }
  if(m_actionNamesHasBeenSet)
  {
      for(auto& item : m_actionNames)
      {
        oStream << location << ".ActionNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceNamesHasBeenSet)
  {
      for(auto& item : m_resourceNames)
      {
        oStream << location << ".ResourceNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_contextEntriesHasBeenSet)
  {
      for(auto& item : m_contextEntries)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".ContextEntries";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
