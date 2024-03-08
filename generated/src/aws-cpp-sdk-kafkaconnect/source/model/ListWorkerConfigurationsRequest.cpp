/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ListWorkerConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkerConfigurationsRequest::ListWorkerConfigurationsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListWorkerConfigurationsRequest::SerializePayload() const
{
  return {};
}

void ListWorkerConfigurationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_namePrefixHasBeenSet)
    {
      ss << m_namePrefix;
      uri.AddQueryStringParameter("namePrefix", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

}



