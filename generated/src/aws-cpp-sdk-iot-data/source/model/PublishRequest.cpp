/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/PublishRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PublishRequest::PublishRequest() : 
    m_topicHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false),
    m_retain(false),
    m_retainHasBeenSet(false),
    m_userPropertiesHasBeenSet(false),
    m_payloadFormatIndicator(PayloadFormatIndicator::NOT_SET),
    m_payloadFormatIndicatorHasBeenSet(false),
    m_responseTopicHasBeenSet(false),
    m_correlationDataHasBeenSet(false),
    m_messageExpiry(0),
    m_messageExpiryHasBeenSet(false)
{
}


void PublishRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_qosHasBeenSet)
    {
      ss << m_qos;
      uri.AddQueryStringParameter("qos", ss.str());
      ss.str("");
    }

    if(m_retainHasBeenSet)
    {
      ss << m_retain;
      uri.AddQueryStringParameter("retain", ss.str());
      ss.str("");
    }

    if(m_responseTopicHasBeenSet)
    {
      ss << m_responseTopic;
      uri.AddQueryStringParameter("responseTopic", ss.str());
      ss.str("");
    }

    if(m_messageExpiryHasBeenSet)
    {
      ss << m_messageExpiry;
      uri.AddQueryStringParameter("messageExpiry", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection PublishRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_userPropertiesHasBeenSet)
  {
    ss << m_userProperties;
    headers.emplace("x-amz-mqtt5-user-properties",  ss.str());
    ss.str("");
  }

  if(m_payloadFormatIndicatorHasBeenSet)
  {
    headers.emplace("x-amz-mqtt5-payload-format-indicator", PayloadFormatIndicatorMapper::GetNameForPayloadFormatIndicator(m_payloadFormatIndicator));
  }

  if(m_correlationDataHasBeenSet)
  {
    ss << m_correlationData;
    headers.emplace("x-amz-mqtt5-correlation-data",  ss.str());
    ss.str("");
  }

  return headers;

}
