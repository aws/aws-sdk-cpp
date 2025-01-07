/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/UpdateClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateClusterResult::UpdateClusterResult() : 
    m_status(ClusterStatus::NOT_SET),
    m_deletionProtectionEnabled(false)
{
}

UpdateClusterResult::UpdateClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateClusterResult()
{
  *this = result;
}

UpdateClusterResult& UpdateClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("deletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");

  }

  if(jsonValue.ValueExists("witnessRegion"))
  {
    m_witnessRegion = jsonValue.GetString("witnessRegion");

  }

  if(jsonValue.ValueExists("linkedClusterArns"))
  {
    Aws::Utils::Array<JsonView> linkedClusterArnsJsonList = jsonValue.GetArray("linkedClusterArns");
    for(unsigned linkedClusterArnsIndex = 0; linkedClusterArnsIndex < linkedClusterArnsJsonList.GetLength(); ++linkedClusterArnsIndex)
    {
      m_linkedClusterArns.push_back(linkedClusterArnsJsonList[linkedClusterArnsIndex].AsString());
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
