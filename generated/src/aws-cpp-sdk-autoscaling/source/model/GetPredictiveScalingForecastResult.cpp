/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/GetPredictiveScalingForecastResult.h>
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

GetPredictiveScalingForecastResult::GetPredictiveScalingForecastResult()
{
}

GetPredictiveScalingForecastResult::GetPredictiveScalingForecastResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetPredictiveScalingForecastResult& GetPredictiveScalingForecastResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetPredictiveScalingForecastResult"))
  {
    resultNode = rootNode.FirstChild("GetPredictiveScalingForecastResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loadForecastNode = resultNode.FirstChild("LoadForecast");
    if(!loadForecastNode.IsNull())
    {
      XmlNode loadForecastMember = loadForecastNode.FirstChild("member");
      while(!loadForecastMember.IsNull())
      {
        m_loadForecast.push_back(loadForecastMember);
        loadForecastMember = loadForecastMember.NextNode("member");
      }

    }
    XmlNode capacityForecastNode = resultNode.FirstChild("CapacityForecast");
    if(!capacityForecastNode.IsNull())
    {
      m_capacityForecast = capacityForecastNode;
    }
    XmlNode updateTimeNode = resultNode.FirstChild("UpdateTime");
    if(!updateTimeNode.IsNull())
    {
      m_updateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::GetPredictiveScalingForecastResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
