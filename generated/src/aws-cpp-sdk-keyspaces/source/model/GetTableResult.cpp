/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/GetTableResult.h>
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

GetTableResult::GetTableResult() : 
    m_status(TableStatus::NOT_SET),
    m_defaultTimeToLive(0)
{
}

GetTableResult::GetTableResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TableStatus::NOT_SET),
    m_defaultTimeToLive(0)
{
  *this = result;
}

GetTableResult& GetTableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("schemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetObject("schemaDefinition");

  }

  if(jsonValue.ValueExists("capacitySpecification"))
  {
    m_capacitySpecification = jsonValue.GetObject("capacitySpecification");

  }

  if(jsonValue.ValueExists("encryptionSpecification"))
  {
    m_encryptionSpecification = jsonValue.GetObject("encryptionSpecification");

  }

  if(jsonValue.ValueExists("pointInTimeRecovery"))
  {
    m_pointInTimeRecovery = jsonValue.GetObject("pointInTimeRecovery");

  }

  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetObject("ttl");

  }

  if(jsonValue.ValueExists("defaultTimeToLive"))
  {
    m_defaultTimeToLive = jsonValue.GetInteger("defaultTimeToLive");

  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");

  }

  if(jsonValue.ValueExists("clientSideTimestamps"))
  {
    m_clientSideTimestamps = jsonValue.GetObject("clientSideTimestamps");

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
