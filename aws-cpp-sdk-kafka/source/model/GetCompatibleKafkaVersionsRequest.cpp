/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/GetCompatibleKafkaVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetCompatibleKafkaVersionsRequest::GetCompatibleKafkaVersionsRequest() : 
    m_clusterArnHasBeenSet(false)
{
}

Aws::String GetCompatibleKafkaVersionsRequest::SerializePayload() const
{
  return {};
}

void GetCompatibleKafkaVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clusterArnHasBeenSet)
    {
      ss << m_clusterArn;
      uri.AddQueryStringParameter("clusterArn", ss.str());
      ss.str("");
    }

}



