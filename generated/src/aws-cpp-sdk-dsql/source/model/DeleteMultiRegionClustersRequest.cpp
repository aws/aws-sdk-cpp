/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/DeleteMultiRegionClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteMultiRegionClustersRequest::DeleteMultiRegionClustersRequest() : 
    m_linkedClusterArnsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DeleteMultiRegionClustersRequest::SerializePayload() const
{
  return {};
}

void DeleteMultiRegionClustersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_linkedClusterArnsHasBeenSet)
    {
      for(const auto& item : m_linkedClusterArns)
      {
        ss << item;
        uri.AddQueryStringParameter("linked-cluster-arns", ss.str());
        ss.str("");
      }
    }

    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("client-token", ss.str());
      ss.str("");
    }

}



