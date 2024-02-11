/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetEnvironmentProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnvironmentProfileResult::GetEnvironmentProfileResult()
{
}

GetEnvironmentProfileResult::GetEnvironmentProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEnvironmentProfileResult& GetEnvironmentProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

  }

  if(jsonValue.ValueExists("awsAccountRegion"))
  {
    m_awsAccountRegion = jsonValue.GetString("awsAccountRegion");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("userParameters"))
  {
    Aws::Utils::Array<JsonView> userParametersJsonList = jsonValue.GetArray("userParameters");
    for(unsigned userParametersIndex = 0; userParametersIndex < userParametersJsonList.GetLength(); ++userParametersIndex)
    {
      m_userParameters.push_back(userParametersJsonList[userParametersIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
