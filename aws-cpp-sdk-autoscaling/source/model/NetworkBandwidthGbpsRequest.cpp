/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/NetworkBandwidthGbpsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

NetworkBandwidthGbpsRequest::NetworkBandwidthGbpsRequest() : 
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
}

NetworkBandwidthGbpsRequest::NetworkBandwidthGbpsRequest(const XmlNode& xmlNode) : 
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkBandwidthGbpsRequest& NetworkBandwidthGbpsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minNode = resultNode.FirstChild("Min");
    if(!minNode.IsNull())
    {
      m_min = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minNode.GetText()).c_str()).c_str());
      m_minHasBeenSet = true;
    }
    XmlNode maxNode = resultNode.FirstChild("Max");
    if(!maxNode.IsNull())
    {
      m_max = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxNode.GetText()).c_str()).c_str());
      m_maxHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkBandwidthGbpsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minHasBeenSet)
  {
        oStream << location << index << locationValue << ".Min=" << StringUtils::URLEncode(m_min) << "&";
  }

  if(m_maxHasBeenSet)
  {
        oStream << location << index << locationValue << ".Max=" << StringUtils::URLEncode(m_max) << "&";
  }

}

void NetworkBandwidthGbpsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minHasBeenSet)
  {
        oStream << location << ".Min=" << StringUtils::URLEncode(m_min) << "&";
  }
  if(m_maxHasBeenSet)
  {
        oStream << location << ".Max=" << StringUtils::URLEncode(m_max) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
