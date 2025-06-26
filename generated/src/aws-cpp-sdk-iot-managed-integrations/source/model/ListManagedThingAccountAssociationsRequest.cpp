/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListManagedThingAccountAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListManagedThingAccountAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_managedThingIdHasBeenSet)
    {
      ss << m_managedThingId;
      uri.AddQueryStringParameter("ManagedThingId", ss.str());
      ss.str("");
    }

    if(m_accountAssociationIdHasBeenSet)
    {
      ss << m_accountAssociationId;
      uri.AddQueryStringParameter("AccountAssociationId", ss.str());
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



