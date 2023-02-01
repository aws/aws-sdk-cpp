/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateGlobalTableSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGlobalTableSettingsResult::UpdateGlobalTableSettingsResult()
{
}

UpdateGlobalTableSettingsResult::UpdateGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateGlobalTableSettingsResult& UpdateGlobalTableSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GlobalTableName"))
  {
    m_globalTableName = jsonValue.GetString("GlobalTableName");

  }

  if(jsonValue.ValueExists("ReplicaSettings"))
  {
    Aws::Utils::Array<JsonView> replicaSettingsJsonList = jsonValue.GetArray("ReplicaSettings");
    for(unsigned replicaSettingsIndex = 0; replicaSettingsIndex < replicaSettingsJsonList.GetLength(); ++replicaSettingsIndex)
    {
      m_replicaSettings.push_back(replicaSettingsJsonList[replicaSettingsIndex].AsObject());
    }
  }



  return *this;
}
