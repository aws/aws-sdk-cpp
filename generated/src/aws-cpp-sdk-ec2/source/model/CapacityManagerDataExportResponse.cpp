/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityManagerDataExportResponse.h>
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

CapacityManagerDataExportResponse::CapacityManagerDataExportResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityManagerDataExportResponse& CapacityManagerDataExportResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityManagerDataExportIdNode = resultNode.FirstChild("capacityManagerDataExportId");
    if(!capacityManagerDataExportIdNode.IsNull())
    {
      m_capacityManagerDataExportId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityManagerDataExportIdNode.GetText());
      m_capacityManagerDataExportIdHasBeenSet = true;
    }
    XmlNode s3BucketNameNode = resultNode.FirstChild("s3BucketName");
    if(!s3BucketNameNode.IsNull())
    {
      m_s3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNameNode.GetText());
      m_s3BucketNameHasBeenSet = true;
    }
    XmlNode s3BucketPrefixNode = resultNode.FirstChild("s3BucketPrefix");
    if(!s3BucketPrefixNode.IsNull())
    {
      m_s3BucketPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketPrefixNode.GetText());
      m_s3BucketPrefixHasBeenSet = true;
    }
    XmlNode scheduleNode = resultNode.FirstChild("schedule");
    if(!scheduleNode.IsNull())
    {
      m_schedule = ScheduleMapper::GetScheduleForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scheduleNode.GetText()).c_str()));
      m_scheduleHasBeenSet = true;
    }
    XmlNode outputFormatNode = resultNode.FirstChild("outputFormat");
    if(!outputFormatNode.IsNull())
    {
      m_outputFormat = OutputFormatMapper::GetOutputFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputFormatNode.GetText()).c_str()));
      m_outputFormatHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode latestDeliveryStatusNode = resultNode.FirstChild("latestDeliveryStatus");
    if(!latestDeliveryStatusNode.IsNull())
    {
      m_latestDeliveryStatus = CapacityManagerDataExportStatusMapper::GetCapacityManagerDataExportStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestDeliveryStatusNode.GetText()).c_str()));
      m_latestDeliveryStatusHasBeenSet = true;
    }
    XmlNode latestDeliveryStatusMessageNode = resultNode.FirstChild("latestDeliveryStatusMessage");
    if(!latestDeliveryStatusMessageNode.IsNull())
    {
      m_latestDeliveryStatusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(latestDeliveryStatusMessageNode.GetText());
      m_latestDeliveryStatusMessageHasBeenSet = true;
    }
    XmlNode latestDeliveryS3LocationUriNode = resultNode.FirstChild("latestDeliveryS3LocationUri");
    if(!latestDeliveryS3LocationUriNode.IsNull())
    {
      m_latestDeliveryS3LocationUri = Aws::Utils::Xml::DecodeEscapedXmlText(latestDeliveryS3LocationUriNode.GetText());
      m_latestDeliveryS3LocationUriHasBeenSet = true;
    }
    XmlNode latestDeliveryTimeNode = resultNode.FirstChild("latestDeliveryTime");
    if(!latestDeliveryTimeNode.IsNull())
    {
      m_latestDeliveryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestDeliveryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_latestDeliveryTimeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityManagerDataExportResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityManagerDataExportIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityManagerDataExportId=" << StringUtils::URLEncode(m_capacityManagerDataExportId.c_str()) << "&";
  }

  if(m_s3BucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  if(m_s3BucketPrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3BucketPrefix=" << StringUtils::URLEncode(m_s3BucketPrefix.c_str()) << "&";
  }

  if(m_scheduleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Schedule=" << StringUtils::URLEncode(ScheduleMapper::GetNameForSchedule(m_schedule)) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutputFormat=" << StringUtils::URLEncode(OutputFormatMapper::GetNameForOutputFormat(m_outputFormat)) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_latestDeliveryStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestDeliveryStatus=" << StringUtils::URLEncode(CapacityManagerDataExportStatusMapper::GetNameForCapacityManagerDataExportStatus(m_latestDeliveryStatus)) << "&";
  }

  if(m_latestDeliveryStatusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestDeliveryStatusMessage=" << StringUtils::URLEncode(m_latestDeliveryStatusMessage.c_str()) << "&";
  }

  if(m_latestDeliveryS3LocationUriHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestDeliveryS3LocationUri=" << StringUtils::URLEncode(m_latestDeliveryS3LocationUri.c_str()) << "&";
  }

  if(m_latestDeliveryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestDeliveryTime=" << StringUtils::URLEncode(m_latestDeliveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void CapacityManagerDataExportResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityManagerDataExportIdHasBeenSet)
  {
      oStream << location << ".CapacityManagerDataExportId=" << StringUtils::URLEncode(m_capacityManagerDataExportId.c_str()) << "&";
  }
  if(m_s3BucketNameHasBeenSet)
  {
      oStream << location << ".S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }
  if(m_s3BucketPrefixHasBeenSet)
  {
      oStream << location << ".S3BucketPrefix=" << StringUtils::URLEncode(m_s3BucketPrefix.c_str()) << "&";
  }
  if(m_scheduleHasBeenSet)
  {
      oStream << location << ".Schedule=" << StringUtils::URLEncode(ScheduleMapper::GetNameForSchedule(m_schedule)) << "&";
  }
  if(m_outputFormatHasBeenSet)
  {
      oStream << location << ".OutputFormat=" << StringUtils::URLEncode(OutputFormatMapper::GetNameForOutputFormat(m_outputFormat)) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_latestDeliveryStatusHasBeenSet)
  {
      oStream << location << ".LatestDeliveryStatus=" << StringUtils::URLEncode(CapacityManagerDataExportStatusMapper::GetNameForCapacityManagerDataExportStatus(m_latestDeliveryStatus)) << "&";
  }
  if(m_latestDeliveryStatusMessageHasBeenSet)
  {
      oStream << location << ".LatestDeliveryStatusMessage=" << StringUtils::URLEncode(m_latestDeliveryStatusMessage.c_str()) << "&";
  }
  if(m_latestDeliveryS3LocationUriHasBeenSet)
  {
      oStream << location << ".LatestDeliveryS3LocationUri=" << StringUtils::URLEncode(m_latestDeliveryS3LocationUri.c_str()) << "&";
  }
  if(m_latestDeliveryTimeHasBeenSet)
  {
      oStream << location << ".LatestDeliveryTime=" << StringUtils::URLEncode(m_latestDeliveryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
