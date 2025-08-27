/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageUsageReportEntry.h>
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

ImageUsageReportEntry::ImageUsageReportEntry(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ImageUsageReportEntry& ImageUsageReportEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode reportIdNode = resultNode.FirstChild("reportId");
    if(!reportIdNode.IsNull())
    {
      m_reportId = Aws::Utils::Xml::DecodeEscapedXmlText(reportIdNode.GetText());
      m_reportIdHasBeenSet = true;
    }
    XmlNode usageCountNode = resultNode.FirstChild("usageCount");
    if(!usageCountNode.IsNull())
    {
      m_usageCount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usageCountNode.GetText()).c_str()).c_str());
      m_usageCountHasBeenSet = true;
    }
    XmlNode accountIdNode = resultNode.FirstChild("accountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode reportCreationTimeNode = resultNode.FirstChild("reportCreationTime");
    if(!reportCreationTimeNode.IsNull())
    {
      m_reportCreationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reportCreationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_reportCreationTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ImageUsageReportEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_reportIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReportId=" << StringUtils::URLEncode(m_reportId.c_str()) << "&";
  }

  if(m_usageCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageCount=" << m_usageCount << "&";
  }

  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_reportCreationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReportCreationTime=" << StringUtils::URLEncode(m_reportCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ImageUsageReportEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_reportIdHasBeenSet)
  {
      oStream << location << ".ReportId=" << StringUtils::URLEncode(m_reportId.c_str()) << "&";
  }
  if(m_usageCountHasBeenSet)
  {
      oStream << location << ".UsageCount=" << m_usageCount << "&";
  }
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_reportCreationTimeHasBeenSet)
  {
      oStream << location << ".ReportCreationTime=" << StringUtils::URLEncode(m_reportCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
