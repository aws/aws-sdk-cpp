/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorPortRangeRequest.h>
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

TrafficMirrorPortRangeRequest::TrafficMirrorPortRangeRequest() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
}

TrafficMirrorPortRangeRequest::TrafficMirrorPortRangeRequest(const XmlNode& xmlNode) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficMirrorPortRangeRequest& TrafficMirrorPortRangeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromPortNode = resultNode.FirstChild("FromPort");
    if(!fromPortNode.IsNull())
    {
      m_fromPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fromPortNode.GetText()).c_str()).c_str());
      m_fromPortHasBeenSet = true;
    }
    XmlNode toPortNode = resultNode.FirstChild("ToPort");
    if(!toPortNode.IsNull())
    {
      m_toPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(toPortNode.GetText()).c_str()).c_str());
      m_toPortHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficMirrorPortRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromPort=" << m_fromPort << "&";
  }

  if(m_toPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".ToPort=" << m_toPort << "&";
  }

}

void TrafficMirrorPortRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromPortHasBeenSet)
  {
      oStream << location << ".FromPort=" << m_fromPort << "&";
  }
  if(m_toPortHasBeenSet)
  {
      oStream << location << ".ToPort=" << m_toPort << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
