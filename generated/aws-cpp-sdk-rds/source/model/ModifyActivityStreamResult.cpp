/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyActivityStreamResult.h>
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

ModifyActivityStreamResult::ModifyActivityStreamResult() : 
    m_status(ActivityStreamStatus::NOT_SET),
    m_mode(ActivityStreamMode::NOT_SET),
    m_engineNativeAuditFieldsIncluded(false),
    m_policyStatus(ActivityStreamPolicyStatus::NOT_SET)
{
}

ModifyActivityStreamResult::ModifyActivityStreamResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(ActivityStreamStatus::NOT_SET),
    m_mode(ActivityStreamMode::NOT_SET),
    m_engineNativeAuditFieldsIncluded(false),
    m_policyStatus(ActivityStreamPolicyStatus::NOT_SET)
{
  *this = result;
}

ModifyActivityStreamResult& ModifyActivityStreamResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyActivityStreamResult"))
  {
    resultNode = rootNode.FirstChild("ModifyActivityStreamResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
    }
    XmlNode kinesisStreamNameNode = resultNode.FirstChild("KinesisStreamName");
    if(!kinesisStreamNameNode.IsNull())
    {
      m_kinesisStreamName = Aws::Utils::Xml::DecodeEscapedXmlText(kinesisStreamNameNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ActivityStreamStatusMapper::GetActivityStreamStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = ActivityStreamModeMapper::GetActivityStreamModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()).c_str());
    }
    XmlNode engineNativeAuditFieldsIncludedNode = resultNode.FirstChild("EngineNativeAuditFieldsIncluded");
    if(!engineNativeAuditFieldsIncludedNode.IsNull())
    {
      m_engineNativeAuditFieldsIncluded = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(engineNativeAuditFieldsIncludedNode.GetText()).c_str()).c_str());
    }
    XmlNode policyStatusNode = resultNode.FirstChild("PolicyStatus");
    if(!policyStatusNode.IsNull())
    {
      m_policyStatus = ActivityStreamPolicyStatusMapper::GetActivityStreamPolicyStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(policyStatusNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ModifyActivityStreamResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
