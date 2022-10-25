/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CancelExportTaskResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CancelExportTaskResult::CancelExportTaskResult() : 
    m_percentProgress(0),
    m_totalExtractedDataInGB(0),
    m_sourceType(ExportSourceType::NOT_SET)
{
}

CancelExportTaskResult::CancelExportTaskResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_percentProgress(0),
    m_totalExtractedDataInGB(0),
    m_sourceType(ExportSourceType::NOT_SET)
{
  *this = result;
}

CancelExportTaskResult& CancelExportTaskResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelExportTaskResult"))
  {
    resultNode = rootNode.FirstChild("CancelExportTaskResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode exportTaskIdentifierNode = resultNode.FirstChild("ExportTaskIdentifier");
    if(!exportTaskIdentifierNode.IsNull())
    {
      m_exportTaskIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(exportTaskIdentifierNode.GetText());
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
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

    }
    XmlNode snapshotTimeNode = resultNode.FirstChild("SnapshotTime");
    if(!snapshotTimeNode.IsNull())
    {
      m_snapshotTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode taskStartTimeNode = resultNode.FirstChild("TaskStartTime");
    if(!taskStartTimeNode.IsNull())
    {
      m_taskStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode taskEndTimeNode = resultNode.FirstChild("TaskEndTime");
    if(!taskEndTimeNode.IsNull())
    {
      m_taskEndTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskEndTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode s3BucketNode = resultNode.FirstChild("S3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("S3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3PrefixNode.GetText());
    }
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleArnNode.GetText());
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
    }
    XmlNode totalExtractedDataInGBNode = resultNode.FirstChild("TotalExtractedDataInGB");
    if(!totalExtractedDataInGBNode.IsNull())
    {
      m_totalExtractedDataInGB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalExtractedDataInGBNode.GetText()).c_str()).c_str());
    }
    XmlNode failureCauseNode = resultNode.FirstChild("FailureCause");
    if(!failureCauseNode.IsNull())
    {
      m_failureCause = Aws::Utils::Xml::DecodeEscapedXmlText(failureCauseNode.GetText());
    }
    XmlNode warningMessageNode = resultNode.FirstChild("WarningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = Aws::Utils::Xml::DecodeEscapedXmlText(warningMessageNode.GetText());
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = ExportSourceTypeMapper::GetExportSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::CancelExportTaskResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
