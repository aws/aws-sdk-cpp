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

#include <aws/elasticloadbalancing/model/BackendServerDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

BackendServerDescription::BackendServerDescription() : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

BackendServerDescription::BackendServerDescription(const XmlNode& xmlNode) : 
    m_instancePort(0),
    m_instancePortHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
  *this = xmlNode;
}

BackendServerDescription& BackendServerDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instancePortNode = resultNode.FirstChild("InstancePort");
    if(!instancePortNode.IsNull())
    {
      m_instancePort = StringUtils::ConvertToInt32(StringUtils::Trim(instancePortNode.GetText().c_str()).c_str());
      m_instancePortHasBeenSet = true;
    }
    XmlNode policyNamesNode = resultNode.FirstChild("PolicyNames");
    if(!policyNamesNode.IsNull())
    {
      XmlNode policyNamesMember = policyNamesNode.FirstChild("member");
      while(!policyNamesMember.IsNull())
      {
        m_policyNames.push_back(policyNamesMember.GetText());
        policyNamesMember = policyNamesMember.NextNode("member");
      }

      m_policyNamesHasBeenSet = true;
    }
  }

  return *this;
}

void BackendServerDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instancePortHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePort=" << m_instancePort << "&";
  }

  if(m_policyNamesHasBeenSet)
  {
      unsigned policyNamesIdx = 1;
      for(auto& item : m_policyNames)
      {
        oStream << location << index << locationValue << ".PolicyNames.member." << policyNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void BackendServerDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instancePortHasBeenSet)
  {
      oStream << location << ".InstancePort=" << m_instancePort << "&";
  }
  if(m_policyNamesHasBeenSet)
  {
      unsigned policyNamesIdx = 1;
      for(auto& item : m_policyNames)
      {
        oStream << location << ".PolicyNames.member." << policyNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
