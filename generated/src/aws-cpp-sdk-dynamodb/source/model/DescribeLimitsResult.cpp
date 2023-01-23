/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLimitsResult::DescribeLimitsResult() : 
    m_accountMaxReadCapacityUnits(0),
    m_accountMaxWriteCapacityUnits(0),
    m_tableMaxReadCapacityUnits(0),
    m_tableMaxWriteCapacityUnits(0)
{
}

DescribeLimitsResult::DescribeLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_accountMaxReadCapacityUnits(0),
    m_accountMaxWriteCapacityUnits(0),
    m_tableMaxReadCapacityUnits(0),
    m_tableMaxWriteCapacityUnits(0)
{
  *this = result;
}

DescribeLimitsResult& DescribeLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountMaxReadCapacityUnits"))
  {
    m_accountMaxReadCapacityUnits = jsonValue.GetInt64("AccountMaxReadCapacityUnits");

  }

  if(jsonValue.ValueExists("AccountMaxWriteCapacityUnits"))
  {
    m_accountMaxWriteCapacityUnits = jsonValue.GetInt64("AccountMaxWriteCapacityUnits");

  }

  if(jsonValue.ValueExists("TableMaxReadCapacityUnits"))
  {
    m_tableMaxReadCapacityUnits = jsonValue.GetInt64("TableMaxReadCapacityUnits");

  }

  if(jsonValue.ValueExists("TableMaxWriteCapacityUnits"))
  {
    m_tableMaxWriteCapacityUnits = jsonValue.GetInt64("TableMaxWriteCapacityUnits");

  }



  return *this;
}
