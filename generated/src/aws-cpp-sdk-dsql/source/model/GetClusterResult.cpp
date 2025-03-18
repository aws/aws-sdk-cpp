﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/GetClusterResult.h>
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

GetClusterResult::GetClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetClusterResult& GetClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("witnessRegion"))
  {
    m_witnessRegion = jsonValue.GetString("witnessRegion");
    m_witnessRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("linkedClusterArns"))
  {
    Aws::Utils::Array<JsonView> linkedClusterArnsJsonList = jsonValue.GetArray("linkedClusterArns");
    for(unsigned linkedClusterArnsIndex = 0; linkedClusterArnsIndex < linkedClusterArnsJsonList.GetLength(); ++linkedClusterArnsIndex)
    {
      m_linkedClusterArns.push_back(linkedClusterArnsJsonList[linkedClusterArnsIndex].AsString());
    }
    m_linkedClusterArnsHasBeenSet = true;
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
