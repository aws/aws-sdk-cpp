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
#include <aws/iam/model/SimulationPolicySource.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SimulationPolicySource::SimulationPolicySource() : 
    m_policyInputListHasBeenSet(false),
    m_getPolicyForHasBeenSet(false)
{
}

SimulationPolicySource::SimulationPolicySource(const XmlNode& xmlNode) : 
    m_policyInputListHasBeenSet(false),
    m_getPolicyForHasBeenSet(false)
{
  *this = xmlNode;
}

SimulationPolicySource& SimulationPolicySource::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyInputListNodeParent = resultNode.FirstChild("PolicyInputList");
    XmlNode policyInputListNode = policyInputListNodeParent.FirstChild("member");
    if(!policyInputListNode.IsNull())
    {
      while(!policyInputListNode.IsNull())
      {
        m_policyInputList.push_back(policyInputListNode);
        policyInputListNode = policyInputListNode.NextNode("member");
      }

      m_policyInputListHasBeenSet = true;
    }
    XmlNode getPolicyForNode = resultNode.FirstChild("GetPolicyFor");
    if(!policyInputListNode.IsNull())
    {
      m_getPolicyFor = StringUtils::Trim(getPolicyForNode.GetText().c_str());
      m_getPolicyForHasBeenSet = true;
    }
  }

  return *this;
}

void SimulationPolicySource::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyInputListHasBeenSet)
  {
      for(auto& item : m_policyInputList)
      {
        Aws::StringStream policyInputListSs;
        policyInputListSs << location << index << locationValue << ".PolicyInputList";
        item.OutputToStream(oStream, policyInputListSs.str().c_str());
      }
  }
  if(m_getPolicyForHasBeenSet)
  {
      oStream << location << index << locationValue << ".GetPolicyFor=" << StringUtils::URLEncode(m_getPolicyFor.c_str()) << "&";
  }
}

void SimulationPolicySource::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyInputListHasBeenSet)
  {
      for(auto& item : m_policyInputList)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".PolicyInputList";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_getPolicyForHasBeenSet)
  {
      oStream << location << ".GetPolicyFor=" << StringUtils::URLEncode(m_getPolicyFor.c_str()) << "&";
  }
}
