/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeScalingProcessTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeScalingProcessTypesResult::DescribeScalingProcessTypesResult()
{
}

DescribeScalingProcessTypesResult::DescribeScalingProcessTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeScalingProcessTypesResult& DescribeScalingProcessTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeScalingProcessTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeScalingProcessTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode processesNode = resultNode.FirstChild("Processes");
    if(!processesNode.IsNull())
    {
      XmlNode processesMember = processesNode.FirstChild("member");
      while(!processesMember.IsNull())
      {
        m_processes.push_back(processesMember);
        processesMember = processesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeScalingProcessTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
