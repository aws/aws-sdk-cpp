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

#include <aws/elasticloadbalancingv2/model/SslPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

SslPolicy::SslPolicy() : 
    m_sslProtocolsHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

SslPolicy::SslPolicy(const XmlNode& xmlNode) : 
    m_sslProtocolsHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = xmlNode;
}

SslPolicy& SslPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sslProtocolsNode = resultNode.FirstChild("SslProtocols");
    if(!sslProtocolsNode.IsNull())
    {
      XmlNode sslProtocolsMember = sslProtocolsNode.FirstChild("member");
      while(!sslProtocolsMember.IsNull())
      {
        m_sslProtocols.push_back(sslProtocolsMember.GetText());
        sslProtocolsMember = sslProtocolsMember.NextNode("member");
      }

      m_sslProtocolsHasBeenSet = true;
    }
    XmlNode ciphersNode = resultNode.FirstChild("Ciphers");
    if(!ciphersNode.IsNull())
    {
      XmlNode ciphersMember = ciphersNode.FirstChild("member");
      while(!ciphersMember.IsNull())
      {
        m_ciphers.push_back(ciphersMember);
        ciphersMember = ciphersMember.NextNode("member");
      }

      m_ciphersHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void SslPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sslProtocolsHasBeenSet)
  {
      unsigned sslProtocolsIdx = 1;
      for(auto& item : m_sslProtocols)
      {
        oStream << location << index << locationValue << ".SslProtocols.member." << sslProtocolsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_ciphersHasBeenSet)
  {
      unsigned ciphersIdx = 1;
      for(auto& item : m_ciphers)
      {
        Aws::StringStream ciphersSs;
        ciphersSs << location << index << locationValue << ".Ciphers.member." << ciphersIdx++;
        item.OutputToStream(oStream, ciphersSs.str().c_str());
      }
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

}

void SslPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sslProtocolsHasBeenSet)
  {
      unsigned sslProtocolsIdx = 1;
      for(auto& item : m_sslProtocols)
      {
        oStream << location << ".SslProtocols.member." << sslProtocolsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ciphersHasBeenSet)
  {
      unsigned ciphersIdx = 1;
      for(auto& item : m_ciphers)
      {
        Aws::StringStream ciphersSs;
        ciphersSs << location <<  ".Ciphers.member." << ciphersIdx++;
        item.OutputToStream(oStream, ciphersSs.str().c_str());
      }
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
