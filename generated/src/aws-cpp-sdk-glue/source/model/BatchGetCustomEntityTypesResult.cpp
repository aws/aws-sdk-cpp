/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetCustomEntityTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCustomEntityTypesResult::BatchGetCustomEntityTypesResult()
{
}

BatchGetCustomEntityTypesResult::BatchGetCustomEntityTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCustomEntityTypesResult& BatchGetCustomEntityTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomEntityTypes"))
  {
    Aws::Utils::Array<JsonView> customEntityTypesJsonList = jsonValue.GetArray("CustomEntityTypes");
    for(unsigned customEntityTypesIndex = 0; customEntityTypesIndex < customEntityTypesJsonList.GetLength(); ++customEntityTypesIndex)
    {
      m_customEntityTypes.push_back(customEntityTypesJsonList[customEntityTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CustomEntityTypesNotFound"))
  {
    Aws::Utils::Array<JsonView> customEntityTypesNotFoundJsonList = jsonValue.GetArray("CustomEntityTypesNotFound");
    for(unsigned customEntityTypesNotFoundIndex = 0; customEntityTypesNotFoundIndex < customEntityTypesNotFoundJsonList.GetLength(); ++customEntityTypesNotFoundIndex)
    {
      m_customEntityTypesNotFound.push_back(customEntityTypesNotFoundJsonList[customEntityTypesNotFoundIndex].AsString());
    }
  }



  return *this;
}
