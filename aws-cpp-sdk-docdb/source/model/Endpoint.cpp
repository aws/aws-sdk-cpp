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

#include <aws/docdb/model/Endpoint.h>
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

Endpoint::Endpoint() : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

Endpoint::Endpoint(const XmlNode& xmlNode) : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

Endpoint& Endpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addressNode = resultNode.FirstChild("Address");
    if(!addressNode.IsNull())
    {
      m_address = addressNode.GetText();
      m_addressHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = hostedZoneIdNode.GetText();
      m_hostedZoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }

}

void Endpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
