﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetModelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAssetModelsRequest::SerializePayload() const
{
  return {};
}

void ListAssetModelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetModelTypesHasBeenSet)
    {
      for(const auto& item : m_assetModelTypes)
      {
        ss << AssetModelTypeMapper::GetNameForAssetModelType(item);
        uri.AddQueryStringParameter("assetModelTypes", ss.str());
        ss.str("");
      }
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_assetModelVersionHasBeenSet)
    {
      ss << m_assetModelVersion;
      uri.AddQueryStringParameter("assetModelVersion", ss.str());
      ss.str("");
    }

}



