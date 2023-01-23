/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListMLTransformsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMLTransformsResult::ListMLTransformsResult()
{
}

ListMLTransformsResult::ListMLTransformsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMLTransformsResult& ListMLTransformsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformIds"))
  {
    Aws::Utils::Array<JsonView> transformIdsJsonList = jsonValue.GetArray("TransformIds");
    for(unsigned transformIdsIndex = 0; transformIdsIndex < transformIdsJsonList.GetLength(); ++transformIdsIndex)
    {
      m_transformIds.push_back(transformIdsJsonList[transformIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
