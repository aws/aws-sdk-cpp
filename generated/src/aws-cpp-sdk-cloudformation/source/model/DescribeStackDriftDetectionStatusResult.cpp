/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackDriftDetectionStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeStackDriftDetectionStatusResult::DescribeStackDriftDetectionStatusResult() : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_detectionStatus(StackDriftDetectionStatus::NOT_SET),
    m_driftedStackResourceCount(0)
{
}

DescribeStackDriftDetectionStatusResult::DescribeStackDriftDetectionStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_stackDriftStatus(StackDriftStatus::NOT_SET),
    m_detectionStatus(StackDriftDetectionStatus::NOT_SET),
    m_driftedStackResourceCount(0)
{
  *this = result;
}

DescribeStackDriftDetectionStatusResult& DescribeStackDriftDetectionStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeStackDriftDetectionStatusResult"))
  {
    resultNode = rootNode.FirstChild("DescribeStackDriftDetectionStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
    }
    XmlNode stackDriftDetectionIdNode = resultNode.FirstChild("StackDriftDetectionId");
    if(!stackDriftDetectionIdNode.IsNull())
    {
      m_stackDriftDetectionId = Aws::Utils::Xml::DecodeEscapedXmlText(stackDriftDetectionIdNode.GetText());
    }
    XmlNode stackDriftStatusNode = resultNode.FirstChild("StackDriftStatus");
    if(!stackDriftStatusNode.IsNull())
    {
      m_stackDriftStatus = StackDriftStatusMapper::GetStackDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stackDriftStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode detectionStatusNode = resultNode.FirstChild("DetectionStatus");
    if(!detectionStatusNode.IsNull())
    {
      m_detectionStatus = StackDriftDetectionStatusMapper::GetStackDriftDetectionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(detectionStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode detectionStatusReasonNode = resultNode.FirstChild("DetectionStatusReason");
    if(!detectionStatusReasonNode.IsNull())
    {
      m_detectionStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(detectionStatusReasonNode.GetText());
    }
    XmlNode driftedStackResourceCountNode = resultNode.FirstChild("DriftedStackResourceCount");
    if(!driftedStackResourceCountNode.IsNull())
    {
      m_driftedStackResourceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftedStackResourceCountNode.GetText()).c_str()).c_str());
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackDriftDetectionStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
