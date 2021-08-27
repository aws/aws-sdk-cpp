/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/DescribeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLimitsResult::DescribeLimitsResult() : 
    m_shardLimit(0),
    m_openShardCount(0)
{
}

DescribeLimitsResult::DescribeLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_shardLimit(0),
    m_openShardCount(0)
{
  *this = result;
}

DescribeLimitsResult& DescribeLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ShardLimit"))
  {
    m_shardLimit = jsonValue.GetInteger("ShardLimit");

  }

  if(jsonValue.ValueExists("OpenShardCount"))
  {
    m_openShardCount = jsonValue.GetInteger("OpenShardCount");

  }



  return *this;
}
