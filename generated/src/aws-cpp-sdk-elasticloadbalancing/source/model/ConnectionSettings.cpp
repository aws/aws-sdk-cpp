/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ConnectionSettings.h>
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

ConnectionSettings::ConnectionSettings() : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
}

ConnectionSettings::ConnectionSettings(const XmlNode& xmlNode) : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionSettings& ConnectionSettings::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idleTimeoutNode = resultNode.FirstChild("IdleTimeout");
    if(!idleTimeoutNode.IsNull())
    {
      m_idleTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(idleTimeoutNode.GetText()).c_str()).c_str());
      m_idleTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionSettings::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idleTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdleTimeout=" << m_idleTimeout << "&";
  }

}

void ConnectionSettings::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idleTimeoutHasBeenSet)
  {
      oStream << location << ".IdleTimeout=" << m_idleTimeout << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
