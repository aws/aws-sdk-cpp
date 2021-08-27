/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_instancePort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePortNode.GetText()).c_str()).c_str());
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
