/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ConnectionDraining.h>
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

ConnectionDraining::ConnectionDraining() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

ConnectionDraining::ConnectionDraining(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ConnectionDraining& ConnectionDraining::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode timeoutNode = resultNode.FirstChild("Timeout");
    if(!timeoutNode.IsNull())
    {
      m_timeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeoutNode.GetText()).c_str()).c_str());
      m_timeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionDraining::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_timeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timeout=" << m_timeout << "&";
  }

}

void ConnectionDraining::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_timeoutHasBeenSet)
  {
      oStream << location << ".Timeout=" << m_timeout << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
