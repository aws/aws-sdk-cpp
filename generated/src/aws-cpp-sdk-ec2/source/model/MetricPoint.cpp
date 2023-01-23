/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MetricPoint.h>
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

MetricPoint::MetricPoint() : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

MetricPoint::MetricPoint(const XmlNode& xmlNode) : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

MetricPoint& MetricPoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText()).c_str()).c_str());
      m_valueHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void MetricPoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << m_value << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void MetricPoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << m_value << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
