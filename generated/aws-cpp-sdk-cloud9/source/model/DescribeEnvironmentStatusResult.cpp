/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/DescribeEnvironmentStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Cloud9::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEnvironmentStatusResult::DescribeEnvironmentStatusResult() : 
    m_status(EnvironmentStatus::NOT_SET)
{
}

DescribeEnvironmentStatusResult::DescribeEnvironmentStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EnvironmentStatus::NOT_SET)
{
  *this = result;
}

DescribeEnvironmentStatusResult& DescribeEnvironmentStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }



  return *this;
}
