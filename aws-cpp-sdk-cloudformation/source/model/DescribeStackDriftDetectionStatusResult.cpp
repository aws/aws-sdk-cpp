/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_stackId = stackIdNode.GetText();
    }
    XmlNode stackDriftDetectionIdNode = resultNode.FirstChild("StackDriftDetectionId");
    if(!stackDriftDetectionIdNode.IsNull())
    {
      m_stackDriftDetectionId = stackDriftDetectionIdNode.GetText();
    }
    XmlNode stackDriftStatusNode = resultNode.FirstChild("StackDriftStatus");
    if(!stackDriftStatusNode.IsNull())
    {
      m_stackDriftStatus = StackDriftStatusMapper::GetStackDriftStatusForName(StringUtils::Trim(stackDriftStatusNode.GetText().c_str()).c_str());
    }
    XmlNode detectionStatusNode = resultNode.FirstChild("DetectionStatus");
    if(!detectionStatusNode.IsNull())
    {
      m_detectionStatus = StackDriftDetectionStatusMapper::GetStackDriftDetectionStatusForName(StringUtils::Trim(detectionStatusNode.GetText().c_str()).c_str());
    }
    XmlNode detectionStatusReasonNode = resultNode.FirstChild("DetectionStatusReason");
    if(!detectionStatusReasonNode.IsNull())
    {
      m_detectionStatusReason = detectionStatusReasonNode.GetText();
    }
    XmlNode driftedStackResourceCountNode = resultNode.FirstChild("DriftedStackResourceCount");
    if(!driftedStackResourceCountNode.IsNull())
    {
      m_driftedStackResourceCount = StringUtils::ConvertToInt32(StringUtils::Trim(driftedStackResourceCountNode.GetText().c_str()).c_str());
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackDriftDetectionStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
