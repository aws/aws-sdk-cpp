/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMappingResult::GetMappingResult()
{
}

GetMappingResult::GetMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMappingResult& GetMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Mapping"))
  {
    Aws::Utils::Array<JsonView> mappingJsonList = jsonValue.GetArray("Mapping");
    for(unsigned mappingIndex = 0; mappingIndex < mappingJsonList.GetLength(); ++mappingIndex)
    {
      m_mapping.push_back(mappingJsonList[mappingIndex].AsObject());
    }
  }



  return *this;
}
