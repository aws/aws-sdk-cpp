/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListCloudConnectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListCloudConnectorsRequest::SerializePayload() const
{
  return {};
}

void ListCloudConnectorsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_typeHasBeenSet)
    {
      ss << CloudConnectorTypeMapper::GetNameForCloudConnectorType(m_type);
      uri.AddQueryStringParameter("Type", ss.str());
      ss.str("");
    }

    if(m_lambdaArnHasBeenSet)
    {
      ss << m_lambdaArn;
      uri.AddQueryStringParameter("LambdaArn", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



