/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceScanSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

ResourceScanSummary::ResourceScanSummary() : 
    m_resourceScanIdHasBeenSet(false),
    m_status(ResourceScanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_percentageCompleted(0.0),
    m_percentageCompletedHasBeenSet(false)
{
}

ResourceScanSummary::ResourceScanSummary(const XmlNode& xmlNode) : 
    m_resourceScanIdHasBeenSet(false),
    m_status(ResourceScanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_percentageCompleted(0.0),
    m_percentageCompletedHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceScanSummary& ResourceScanSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceScanIdNode = resultNode.FirstChild("ResourceScanId");
    if(!resourceScanIdNode.IsNull())
    {
      m_resourceScanId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceScanIdNode.GetText());
      m_resourceScanIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ResourceScanStatusMapper::GetResourceScanStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode percentageCompletedNode = resultNode.FirstChild("PercentageCompleted");
    if(!percentageCompletedNode.IsNull())
    {
      m_percentageCompleted = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompletedNode.GetText()).c_str()).c_str());
      m_percentageCompletedHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceScanSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceScanIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceScanId=" << StringUtils::URLEncode(m_resourceScanId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ResourceScanStatusMapper::GetNameForResourceScanStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_percentageCompletedHasBeenSet)
  {
        oStream << location << index << locationValue << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }

}

void ResourceScanSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceScanIdHasBeenSet)
  {
      oStream << location << ".ResourceScanId=" << StringUtils::URLEncode(m_resourceScanId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ResourceScanStatusMapper::GetNameForResourceScanStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_percentageCompletedHasBeenSet)
  {
        oStream << location << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
