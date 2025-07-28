/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeComputationModelExecutionSummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeComputationModelExecutionSummaryRequest::SerializePayload() const
{
  return {};
}

void DescribeComputationModelExecutionSummaryRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resolveToResourceTypeHasBeenSet)
    {
      ss << ResolveToResourceTypeMapper::GetNameForResolveToResourceType(m_resolveToResourceType);
      uri.AddQueryStringParameter("resolveToResourceType", ss.str());
      ss.str("");
    }

    if(m_resolveToResourceIdHasBeenSet)
    {
      ss << m_resolveToResourceId;
      uri.AddQueryStringParameter("resolveToResourceId", ss.str());
      ss.str("");
    }

}



