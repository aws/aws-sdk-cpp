/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ListHapgsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHapgsResult::ListHapgsResult()
{
}

ListHapgsResult::ListHapgsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHapgsResult& ListHapgsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HapgList"))
  {
    Aws::Utils::Array<JsonView> hapgListJsonList = jsonValue.GetArray("HapgList");
    for(unsigned hapgListIndex = 0; hapgListIndex < hapgListJsonList.GetLength(); ++hapgListIndex)
    {
      m_hapgList.push_back(hapgListJsonList[hapgListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
