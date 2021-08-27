/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesResult.h>
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

DescribeAutoScalingNotificationTypesResult::DescribeAutoScalingNotificationTypesResult()
{
}

DescribeAutoScalingNotificationTypesResult::DescribeAutoScalingNotificationTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAutoScalingNotificationTypesResult& DescribeAutoScalingNotificationTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAutoScalingNotificationTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeAutoScalingNotificationTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingNotificationTypesNode = resultNode.FirstChild("AutoScalingNotificationTypes");
    if(!autoScalingNotificationTypesNode.IsNull())
    {
      XmlNode autoScalingNotificationTypesMember = autoScalingNotificationTypesNode.FirstChild("member");
      while(!autoScalingNotificationTypesMember.IsNull())
      {
        m_autoScalingNotificationTypes.push_back(autoScalingNotificationTypesMember.GetText());
        autoScalingNotificationTypesMember = autoScalingNotificationTypesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeAutoScalingNotificationTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
