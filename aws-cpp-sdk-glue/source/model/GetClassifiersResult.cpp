/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetClassifiersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetClassifiersResult::GetClassifiersResult()
{
}

GetClassifiersResult::GetClassifiersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetClassifiersResult& GetClassifiersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Classifiers"))
  {
    Aws::Utils::Array<JsonView> classifiersJsonList = jsonValue.GetArray("Classifiers");
    for(unsigned classifiersIndex = 0; classifiersIndex < classifiersJsonList.GetLength(); ++classifiersIndex)
    {
      m_classifiers.push_back(classifiersJsonList[classifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
