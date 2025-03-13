/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetFindingV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingV2Result::GetFindingV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingV2Result& GetFindingV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("analyzedAt"))
  {
    m_analyzedAt = jsonValue.GetString("analyzedAt");
    m_analyzedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceOwnerAccount"))
  {
    m_resourceOwnerAccount = jsonValue.GetString("resourceOwnerAccount");
    m_resourceOwnerAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("findingDetails"))
  {
    Aws::Utils::Array<JsonView> findingDetailsJsonList = jsonValue.GetArray("findingDetails");
    for(unsigned findingDetailsIndex = 0; findingDetailsIndex < findingDetailsJsonList.GetLength(); ++findingDetailsIndex)
    {
      m_findingDetails.push_back(findingDetailsJsonList[findingDetailsIndex].AsObject());
    }
    m_findingDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("findingType"))
  {
    m_findingType = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("findingType"));
    m_findingTypeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
