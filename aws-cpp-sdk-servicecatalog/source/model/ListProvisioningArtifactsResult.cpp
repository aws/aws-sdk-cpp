﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListProvisioningArtifactsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProvisioningArtifactsResult::ListProvisioningArtifactsResult()
{
}

ListProvisioningArtifactsResult::ListProvisioningArtifactsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProvisioningArtifactsResult& ListProvisioningArtifactsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisioningArtifactDetails"))
  {
    Array<JsonView> provisioningArtifactDetailsJsonList = jsonValue.GetArray("ProvisioningArtifactDetails");
    for(unsigned provisioningArtifactDetailsIndex = 0; provisioningArtifactDetailsIndex < provisioningArtifactDetailsJsonList.GetLength(); ++provisioningArtifactDetailsIndex)
    {
      m_provisioningArtifactDetails.push_back(provisioningArtifactDetailsJsonList[provisioningArtifactDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
