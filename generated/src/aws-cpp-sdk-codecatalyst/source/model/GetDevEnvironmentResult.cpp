/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetDevEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDevEnvironmentResult::GetDevEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDevEnvironmentResult& GetDevEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("spaceName"))
  {
    m_spaceName = jsonValue.GetString("spaceName");
    m_spaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorId"))
  {
    m_creatorId = jsonValue.GetString("creatorId");
    m_creatorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DevEnvironmentStatusMapper::GetDevEnvironmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repositories"))
  {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
    {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");
    m_aliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ides"))
  {
    Aws::Utils::Array<JsonView> idesJsonList = jsonValue.GetArray("ides");
    for(unsigned idesIndex = 0; idesIndex < idesJsonList.GetLength(); ++idesIndex)
    {
      m_ides.push_back(idesJsonList[idesIndex].AsObject());
    }
    m_idesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inactivityTimeoutMinutes"))
  {
    m_inactivityTimeoutMinutes = jsonValue.GetInteger("inactivityTimeoutMinutes");
    m_inactivityTimeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("persistentStorage"))
  {
    m_persistentStorage = jsonValue.GetObject("persistentStorage");
    m_persistentStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConnectionName"))
  {
    m_vpcConnectionName = jsonValue.GetString("vpcConnectionName");
    m_vpcConnectionNameHasBeenSet = true;
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
