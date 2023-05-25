/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayConnectRequestOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CreateTransitGatewayConnectRequestOptions::CreateTransitGatewayConnectRequestOptions() : 
    m_protocol(ProtocolValue::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

CreateTransitGatewayConnectRequestOptions::CreateTransitGatewayConnectRequestOptions(const XmlNode& xmlNode) : 
    m_protocol(ProtocolValue::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = xmlNode;
}

CreateTransitGatewayConnectRequestOptions& CreateTransitGatewayConnectRequestOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolValueMapper::GetProtocolValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
  }

  return *this;
}

void CreateTransitGatewayConnectRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << ProtocolValueMapper::GetNameForProtocolValue(m_protocol) << "&";
  }

}

void CreateTransitGatewayConnectRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << ProtocolValueMapper::GetNameForProtocolValue(m_protocol) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
