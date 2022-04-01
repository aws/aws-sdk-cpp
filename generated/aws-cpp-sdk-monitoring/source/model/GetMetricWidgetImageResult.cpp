/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricWidgetImageResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetMetricWidgetImageResult::GetMetricWidgetImageResult()
{
}

GetMetricWidgetImageResult::GetMetricWidgetImageResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetMetricWidgetImageResult& GetMetricWidgetImageResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetMetricWidgetImageResult"))
  {
    resultNode = rootNode.FirstChild("GetMetricWidgetImageResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metricWidgetImageNode = resultNode.FirstChild("MetricWidgetImage");
    if(!metricWidgetImageNode.IsNull())
    {
      m_metricWidgetImage = HashingUtils::Base64Decode(Aws::Utils::Xml::DecodeEscapedXmlText(metricWidgetImageNode.GetText()));
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::GetMetricWidgetImageResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
