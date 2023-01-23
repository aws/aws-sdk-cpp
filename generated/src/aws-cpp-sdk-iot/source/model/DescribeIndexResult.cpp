/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIndexResult::DescribeIndexResult() : 
    m_indexStatus(IndexStatus::NOT_SET)
{
}

DescribeIndexResult::DescribeIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_indexStatus(IndexStatus::NOT_SET)
{
  *this = result;
}

DescribeIndexResult& DescribeIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");

  }

  if(jsonValue.ValueExists("indexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("indexStatus"));

  }

  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetString("schema");

  }



  return *this;
}
