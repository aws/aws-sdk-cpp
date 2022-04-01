/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DeleteClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteClusterRequest::DeleteClusterRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String DeleteClusterRequest::SerializePayload() const
{
  return {};
}

void DeleteClusterRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_currentVersionHasBeenSet)
    {
      ss << m_currentVersion;
      uri.AddQueryStringParameter("currentVersion", ss.str());
      ss.str("");
    }

}



