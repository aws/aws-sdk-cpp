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

GetTableResult::GetTableResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableResult& GetTableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");
    m_keyspaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaDefinition"))
  {
    m_schemaDefinition = jsonValue.GetObject("schemaDefinition");
    m_schemaDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacitySpecification"))
  {
    m_capacitySpecification = jsonValue.GetObject("capacitySpecification");
    m_capacitySpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionSpecification"))
  {
    m_encryptionSpecification = jsonValue.GetObject("encryptionSpecification");
    m_encryptionSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pointInTimeRecovery"))
  {
    m_pointInTimeRecovery = jsonValue.GetObject("pointInTimeRecovery");
    m_pointInTimeRecoveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetObject("ttl");
    m_ttlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultTimeToLive"))
  {
    m_defaultTimeToLive = jsonValue.GetInteger("defaultTimeToLive");
    m_defaultTimeToLiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientSideTimestamps"))
  {
    m_clientSideTimestamps = jsonValue.GetObject("clientSideTimestamps");
    m_clientSideTimestampsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicaSpecifications"))
  {
    Aws::Utils::Array<JsonView> replicaSpecificationsJsonList = jsonValue.GetArray("replicaSpecifications");
    for(unsigned replicaSpecificationsIndex = 0; replicaSpecificationsIndex < replicaSpecificationsJsonList.GetLength(); ++replicaSpecificationsIndex)
    {
      m_replicaSpecifications.push_back(replicaSpecificationsJsonList[replicaSpecificationsIndex].AsObject());
    }
    m_replicaSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestStreamArn"))
  {
    m_latestStreamArn = jsonValue.GetString("latestStreamArn");
    m_latestStreamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cdcSpecification"))
  {
    m_cdcSpecification = jsonValue.GetObject("cdcSpecification");
    m_cdcSpecificationHasBeenSet = true;
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
