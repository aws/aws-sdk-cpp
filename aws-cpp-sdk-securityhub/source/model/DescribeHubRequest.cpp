/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeHubRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeHubRequest::DescribeHubRequest() : 
    m_hubArnHasBeenSet(false)
{
}

Aws::String DescribeHubRequest::SerializePayload() const
{
  return {};
}

void DescribeHubRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_hubArnHasBeenSet)
    {
      ss << m_hubArn;
      uri.AddQueryStringParameter("HubArn", ss.str());
      ss.str("");
    }

}



