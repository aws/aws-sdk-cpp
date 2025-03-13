/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetModelCompositeModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeAssetModelCompositeModelRequest::SerializePayload() const
{
  return {};
}

void DescribeAssetModelCompositeModelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetModelVersionHasBeenSet)
    {
      ss << m_assetModelVersion;
      uri.AddQueryStringParameter("assetModelVersion", ss.str());
      ss.str("");
    }

}



