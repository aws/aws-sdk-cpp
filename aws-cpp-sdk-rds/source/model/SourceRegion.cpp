/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SourceRegion.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

SourceRegion::SourceRegion() : 
    m_regionNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

SourceRegion::SourceRegion(const XmlNode& xmlNode) : 
    m_regionNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

SourceRegion& SourceRegion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNameNode = resultNode.FirstChild("RegionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = Aws::Utils::Xml::DecodeEscapedXmlText(regionNameNode.GetText());
      m_regionNameHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void SourceRegion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void SourceRegion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
