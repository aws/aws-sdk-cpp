/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProvisioningArtifactsForServiceActionResult::ListProvisioningArtifactsForServiceActionResult()
{
}

ListProvisioningArtifactsForServiceActionResult::ListProvisioningArtifactsForServiceActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProvisioningArtifactsForServiceActionResult& ListProvisioningArtifactsForServiceActionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisioningArtifactViews"))
  {
    Aws::Utils::Array<JsonView> provisioningArtifactViewsJsonList = jsonValue.GetArray("ProvisioningArtifactViews");
    for(unsigned provisioningArtifactViewsIndex = 0; provisioningArtifactViewsIndex < provisioningArtifactViewsJsonList.GetLength(); ++provisioningArtifactViewsIndex)
    {
      m_provisioningArtifactViews.push_back(provisioningArtifactViewsJsonList[provisioningArtifactViewsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
