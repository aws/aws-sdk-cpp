/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeAssetRequest::DescribeAssetRequest() : 
    m_assetIdHasBeenSet(false),
    m_excludeProperties(false),
    m_excludePropertiesHasBeenSet(false)
{
}

Aws::String DescribeAssetRequest::SerializePayload() const
{
  return {};
}

void DescribeAssetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_excludePropertiesHasBeenSet)
    {
      ss << m_excludeProperties;
      uri.AddQueryStringParameter("excludeProperties", ss.str());
      ss.str("");
    }

}



