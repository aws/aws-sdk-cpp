/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SlotDateTimeRangeRequest.h>
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

SlotDateTimeRangeRequest::SlotDateTimeRangeRequest() : 
    m_earliestTimeHasBeenSet(false),
    m_latestTimeHasBeenSet(false)
{
}

SlotDateTimeRangeRequest::SlotDateTimeRangeRequest(const XmlNode& xmlNode) : 
    m_earliestTimeHasBeenSet(false),
    m_latestTimeHasBeenSet(false)
{
  *this = xmlNode;
}

SlotDateTimeRangeRequest& SlotDateTimeRangeRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode earliestTimeNode = resultNode.FirstChild("EarliestTime");
    if(!earliestTimeNode.IsNull())
    {
      m_earliestTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(earliestTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_earliestTimeHasBeenSet = true;
    }
    XmlNode latestTimeNode = resultNode.FirstChild("LatestTime");
    if(!latestTimeNode.IsNull())
    {
      m_latestTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_latestTimeHasBeenSet = true;
    }
  }

  return *this;
}

void SlotDateTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_earliestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EarliestTime=" << StringUtils::URLEncode(m_earliestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_latestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestTime=" << StringUtils::URLEncode(m_latestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SlotDateTimeRangeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_earliestTimeHasBeenSet)
  {
      oStream << location << ".EarliestTime=" << StringUtils::URLEncode(m_earliestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_latestTimeHasBeenSet)
  {
      oStream << location << ".LatestTime=" << StringUtils::URLEncode(m_latestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
