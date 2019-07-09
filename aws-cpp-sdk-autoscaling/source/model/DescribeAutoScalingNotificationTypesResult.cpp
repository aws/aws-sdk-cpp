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
