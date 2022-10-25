/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ExportTask.h>
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

ExportTask::ExportTask() : 
    m_exportTaskIdentifierHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_exportOnlyHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_totalExtractedDataInGB(0),
    m_totalExtractedDataInGBHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_sourceType(ExportSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

ExportTask::ExportTask(const XmlNode& xmlNode) : 
    m_exportTaskIdentifierHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_exportOnlyHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_totalExtractedDataInGB(0),
    m_totalExtractedDataInGBHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_warningMessageHasBeenSet(false),
    m_sourceType(ExportSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

ExportTask& ExportTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode exportTaskIdentifierNode = resultNode.FirstChild("ExportTaskIdentifier");
    if(!exportTaskIdentifierNode.IsNull())
    {
      m_exportTaskIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(exportTaskIdentifierNode.GetText());
      m_exportTaskIdentifierHasBeenSet = true;
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode exportOnlyNode = resultNode.FirstChild("ExportOnly");
    if(!exportOnlyNode.IsNull())
    {
      XmlNode exportOnlyMember = exportOnlyNode.FirstChild("member");
      while(!exportOnlyMember.IsNull())
      {
        m_exportOnly.push_back(exportOnlyMember.GetText());
        exportOnlyMember = exportOnlyMember.NextNode("member");
      }

      m_exportOnlyHasBeenSet = true;
    }
    XmlNode snapshotTimeNode = resultNode.FirstChild("SnapshotTime");
    if(!snapshotTimeNode.IsNull())
    {
      m_snapshotTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotTimeHasBeenSet = true;
    }
    XmlNode taskStartTimeNode = resultNode.FirstChild("TaskStartTime");
    if(!taskStartTimeNode.IsNull())
    {
      m_taskStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_taskStartTimeHasBeenSet = true;
    }
    XmlNode taskEndTimeNode = resultNode.FirstChild("TaskEndTime");
    if(!taskEndTimeNode.IsNull())
    {
      m_taskEndTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskEndTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_taskEndTimeHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("S3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("S3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3PrefixNode.GetText());
      m_s3PrefixHasBeenSet = true;
    }
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleArnNode.GetText());
      m_iamRoleArnHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode totalExtractedDataInGBNode = resultNode.FirstChild("TotalExtractedDataInGB");
    if(!totalExtractedDataInGBNode.IsNull())
    {
      m_totalExtractedDataInGB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalExtractedDataInGBNode.GetText()).c_str()).c_str());
      m_totalExtractedDataInGBHasBeenSet = true;
    }
    XmlNode failureCauseNode = resultNode.FirstChild("FailureCause");
    if(!failureCauseNode.IsNull())
    {
      m_failureCause = Aws::Utils::Xml::DecodeEscapedXmlText(failureCauseNode.GetText());
      m_failureCauseHasBeenSet = true;
    }
    XmlNode warningMessageNode = resultNode.FirstChild("WarningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = Aws::Utils::Xml::DecodeEscapedXmlText(warningMessageNode.GetText());
      m_warningMessageHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = ExportSourceTypeMapper::GetExportSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ExportTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_exportTaskIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_exportOnlyHasBeenSet)
  {
      unsigned exportOnlyIdx = 1;
      for(auto& item : m_exportOnly)
      {
        oStream << location << index << locationValue << ".ExportOnly.member." << exportOnlyIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_snapshotTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotTime=" << StringUtils::URLEncode(m_snapshotTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_taskStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskStartTime=" << StringUtils::URLEncode(m_taskStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_taskEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskEndTime=" << StringUtils::URLEncode(m_taskEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }

  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << m_percentProgress << "&";
  }

  if(m_totalExtractedDataInGBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalExtractedDataInGB=" << m_totalExtractedDataInGB << "&";
  }

  if(m_failureCauseHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureCause=" << StringUtils::URLEncode(m_failureCause.c_str()) << "&";
  }

  if(m_warningMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".WarningMessage=" << StringUtils::URLEncode(m_warningMessage.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << ExportSourceTypeMapper::GetNameForExportSourceType(m_sourceType) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void ExportTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_exportTaskIdentifierHasBeenSet)
  {
      oStream << location << ".ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if(m_exportOnlyHasBeenSet)
  {
      unsigned exportOnlyIdx = 1;
      for(auto& item : m_exportOnly)
      {
        oStream << location << ".ExportOnly.member." << exportOnlyIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_snapshotTimeHasBeenSet)
  {
      oStream << location << ".SnapshotTime=" << StringUtils::URLEncode(m_snapshotTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_taskStartTimeHasBeenSet)
  {
      oStream << location << ".TaskStartTime=" << StringUtils::URLEncode(m_taskStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_taskEndTimeHasBeenSet)
  {
      oStream << location << ".TaskEndTime=" << StringUtils::URLEncode(m_taskEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }
  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << m_percentProgress << "&";
  }
  if(m_totalExtractedDataInGBHasBeenSet)
  {
      oStream << location << ".TotalExtractedDataInGB=" << m_totalExtractedDataInGB << "&";
  }
  if(m_failureCauseHasBeenSet)
  {
      oStream << location << ".FailureCause=" << StringUtils::URLEncode(m_failureCause.c_str()) << "&";
  }
  if(m_warningMessageHasBeenSet)
  {
      oStream << location << ".WarningMessage=" << StringUtils::URLEncode(m_warningMessage.c_str()) << "&";
  }
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << ExportSourceTypeMapper::GetNameForExportSourceType(m_sourceType) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
