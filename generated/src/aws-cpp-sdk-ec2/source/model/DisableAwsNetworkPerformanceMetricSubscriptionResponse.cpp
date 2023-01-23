/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableAwsNetworkPerformanceMetricSubscriptionResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DisableAwsNetworkPerformanceMetricSubscriptionResponse::DisableAwsNetworkPerformanceMetricSubscriptionResponse() : 
    m_output(false)
{
}

DisableAwsNetworkPerformanceMetricSubscriptionResponse::DisableAwsNetworkPerformanceMetricSubscriptionResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_output(false)
{
  *this = result;
}

DisableAwsNetworkPerformanceMetricSubscriptionResponse& DisableAwsNetworkPerformanceMetricSubscriptionResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisableAwsNetworkPerformanceMetricSubscriptionResponse"))
  {
    resultNode = rootNode.FirstChild("DisableAwsNetworkPerformanceMetricSubscriptionResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode outputNode = resultNode.FirstChild("output");
    if(!outputNode.IsNull())
    {
      m_output = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisableAwsNetworkPerformanceMetricSubscriptionResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
