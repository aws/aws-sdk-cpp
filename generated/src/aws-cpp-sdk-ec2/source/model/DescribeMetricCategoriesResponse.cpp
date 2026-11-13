/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeMetricCategoriesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeMetricCategoriesResponse::DescribeMetricCategoriesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeMetricCategoriesResponse& DescribeMetricCategoriesResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeMetricCategoriesResponse")) {
    resultNode = rootNode.FirstChild("DescribeMetricCategoriesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode metricCategoriesNode = resultNode.FirstChild("metricCategorySet");
    if (!metricCategoriesNode.IsNull()) {
      XmlNode metricCategoriesMember = metricCategoriesNode.FirstChild("item");
      m_metricCategoriesHasBeenSet = !metricCategoriesMember.IsNull();
      while (!metricCategoriesMember.IsNull()) {
        m_metricCategories.push_back(metricCategoriesMember);
        metricCategoriesMember = metricCategoriesMember.NextNode("item");
      }

      m_metricCategoriesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeMetricCategoriesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
