/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/RemoveLFTagsFromResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RemoveLFTagsFromResourceResult::RemoveLFTagsFromResourceResult()
{
}

RemoveLFTagsFromResourceResult::RemoveLFTagsFromResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RemoveLFTagsFromResourceResult& RemoveLFTagsFromResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("Failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
  }



  return *this;
}
