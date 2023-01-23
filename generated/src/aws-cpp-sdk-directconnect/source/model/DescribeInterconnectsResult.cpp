/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeInterconnectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInterconnectsResult::DescribeInterconnectsResult()
{
}

DescribeInterconnectsResult::DescribeInterconnectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInterconnectsResult& DescribeInterconnectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("interconnects"))
  {
    Aws::Utils::Array<JsonView> interconnectsJsonList = jsonValue.GetArray("interconnects");
    for(unsigned interconnectsIndex = 0; interconnectsIndex < interconnectsJsonList.GetLength(); ++interconnectsIndex)
    {
      m_interconnects.push_back(interconnectsJsonList[interconnectsIndex].AsObject());
    }
  }



  return *this;
}
