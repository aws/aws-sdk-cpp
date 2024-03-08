/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/GetTableAutoScalingSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableAutoScalingSettingsResult::GetTableAutoScalingSettingsResult()
{
}

GetTableAutoScalingSettingsResult::GetTableAutoScalingSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableAutoScalingSettingsResult& GetTableAutoScalingSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");

  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

  }

  if(jsonValue.ValueExists("autoScalingSpecification"))
  {
    m_autoScalingSpecification = jsonValue.GetObject("autoScalingSpecification");

  }

  if(jsonValue.ValueExists("replicaSpecifications"))
  {
    Aws::Utils::Array<JsonView> replicaSpecificationsJsonList = jsonValue.GetArray("replicaSpecifications");
    for(unsigned replicaSpecificationsIndex = 0; replicaSpecificationsIndex < replicaSpecificationsJsonList.GetLength(); ++replicaSpecificationsIndex)
    {
      m_replicaSpecifications.push_back(replicaSpecificationsJsonList[replicaSpecificationsIndex].AsObject());
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
