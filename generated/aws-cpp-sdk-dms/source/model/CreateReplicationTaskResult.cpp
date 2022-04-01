/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateReplicationTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateReplicationTaskResult::CreateReplicationTaskResult()
{
}

CreateReplicationTaskResult::CreateReplicationTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateReplicationTaskResult& CreateReplicationTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReplicationTask"))
  {
    m_replicationTask = jsonValue.GetObject("ReplicationTask");

  }



  return *this;
}
