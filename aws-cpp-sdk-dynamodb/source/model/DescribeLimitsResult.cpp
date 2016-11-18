/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

DescribeLimitsResult::DescribeLimitsResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_accountMaxReadCapacityUnits(0),
    m_accountMaxWriteCapacityUnits(0),
    m_tableMaxReadCapacityUnits(0),
    m_tableMaxWriteCapacityUnits(0)
{
  *this = result;
}

DescribeLimitsResult& DescribeLimitsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
