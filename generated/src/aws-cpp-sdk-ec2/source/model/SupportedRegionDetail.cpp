/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SupportedRegionDetail.h>
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

SupportedRegionDetail::SupportedRegionDetail(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SupportedRegionDetail& SupportedRegionDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNode = resultNode.FirstChild("region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode serviceStateNode = resultNode.FirstChild("serviceState");
    if(!serviceStateNode.IsNull())
    {
      m_serviceState = Aws::Utils::Xml::DecodeEscapedXmlText(serviceStateNode.GetText());
      m_serviceStateHasBeenSet = true;
    }
  }

  return *this;
}

void SupportedRegionDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if(m_serviceStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceState=" << StringUtils::URLEncode(m_serviceState.c_str()) << "&";
  }

}

void SupportedRegionDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionHasBeenSet)
  {
      oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if(m_serviceStateHasBeenSet)
  {
      oStream << location << ".ServiceState=" << StringUtils::URLEncode(m_serviceState.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
