/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ListReplicationSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReplicationSetsResult::ListReplicationSetsResult()
{
}

ListReplicationSetsResult::ListReplicationSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReplicationSetsResult& ListReplicationSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("replicationSetArns"))
  {
    Aws::Utils::Array<JsonView> replicationSetArnsJsonList = jsonValue.GetArray("replicationSetArns");
    for(unsigned replicationSetArnsIndex = 0; replicationSetArnsIndex < replicationSetArnsJsonList.GetLength(); ++replicationSetArnsIndex)
    {
      m_replicationSetArns.push_back(replicationSetArnsJsonList[replicationSetArnsIndex].AsString());
    }
  }



  return *this;
}
