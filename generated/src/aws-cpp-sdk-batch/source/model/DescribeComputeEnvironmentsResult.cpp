/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeComputeEnvironmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeComputeEnvironmentsResult::DescribeComputeEnvironmentsResult()
{
}

DescribeComputeEnvironmentsResult::DescribeComputeEnvironmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeComputeEnvironmentsResult& DescribeComputeEnvironmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("computeEnvironments"))
  {
    Aws::Utils::Array<JsonView> computeEnvironmentsJsonList = jsonValue.GetArray("computeEnvironments");
    for(unsigned computeEnvironmentsIndex = 0; computeEnvironmentsIndex < computeEnvironmentsJsonList.GetLength(); ++computeEnvironmentsIndex)
    {
      m_computeEnvironments.push_back(computeEnvironmentsJsonList[computeEnvironmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
