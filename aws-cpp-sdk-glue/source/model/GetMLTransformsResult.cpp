/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTransformsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTransformsResult::GetMLTransformsResult()
{
}

GetMLTransformsResult::GetMLTransformsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLTransformsResult& GetMLTransformsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Transforms"))
  {
    Aws::Utils::Array<JsonView> transformsJsonList = jsonValue.GetArray("Transforms");
    for(unsigned transformsIndex = 0; transformsIndex < transformsJsonList.GetLength(); ++transformsIndex)
    {
      m_transforms.push_back(transformsJsonList[transformsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
