/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListClassificationScopesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClassificationScopesResult::ListClassificationScopesResult()
{
}

ListClassificationScopesResult::ListClassificationScopesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClassificationScopesResult& ListClassificationScopesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("classificationScopes"))
  {
    Aws::Utils::Array<JsonView> classificationScopesJsonList = jsonValue.GetArray("classificationScopes");
    for(unsigned classificationScopesIndex = 0; classificationScopesIndex < classificationScopesJsonList.GetLength(); ++classificationScopesIndex)
    {
      m_classificationScopes.push_back(classificationScopesJsonList[classificationScopesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
