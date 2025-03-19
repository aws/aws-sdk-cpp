/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/DescribeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLimitsResult::DescribeLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLimitsResult& DescribeLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ShardLimit"))
  {
    m_shardLimit = jsonValue.GetInteger("ShardLimit");
    m_shardLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenShardCount"))
  {
    m_openShardCount = jsonValue.GetInteger("OpenShardCount");
    m_openShardCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandStreamCount"))
  {
    m_onDemandStreamCount = jsonValue.GetInteger("OnDemandStreamCount");
    m_onDemandStreamCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnDemandStreamCountLimit"))
  {
    m_onDemandStreamCountLimit = jsonValue.GetInteger("OnDemandStreamCountLimit");
    m_onDemandStreamCountLimitHasBeenSet = true;
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
