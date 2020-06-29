/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Region.h>
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

Region::Region() : 
    m_endpointHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_optInStatusHasBeenSet(false)
{
}

Region::Region(const XmlNode& xmlNode) : 
    m_endpointHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_optInStatusHasBeenSet(false)
{
  *this = xmlNode;
}

Region& Region::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode endpointNode = resultNode.FirstChild("regionEndpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode regionNameNode = resultNode.FirstChild("regionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = Aws::Utils::Xml::DecodeEscapedXmlText(regionNameNode.GetText());
      m_regionNameHasBeenSet = true;
    }
    XmlNode optInStatusNode = resultNode.FirstChild("optInStatus");
    if(!optInStatusNode.IsNull())
    {
      m_optInStatus = Aws::Utils::Xml::DecodeEscapedXmlText(optInStatusNode.GetText());
      m_optInStatusHasBeenSet = true;
    }
  }

  return *this;
}

void Region::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

  if(m_optInStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }

}

void Region::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
  if(m_optInStatusHasBeenSet)
  {
      oStream << location << ".OptInStatus=" << StringUtils::URLEncode(m_optInStatus.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
