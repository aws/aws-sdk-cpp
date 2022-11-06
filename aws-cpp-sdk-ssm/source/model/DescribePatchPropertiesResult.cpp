/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchPropertiesResult::DescribePatchPropertiesResult()
{
}

DescribePatchPropertiesResult::DescribePatchPropertiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePatchPropertiesResult& DescribePatchPropertiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      Aws::Map<Aws::String, JsonView> patchPropertyEntryJsonMap = propertiesJsonList[propertiesIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> patchPropertyEntryMap;
      for(auto& patchPropertyEntryItem : patchPropertyEntryJsonMap)
      {
        patchPropertyEntryMap[patchPropertyEntryItem.first] = patchPropertyEntryItem.second.AsString();
      }
      m_properties.push_back(std::move(patchPropertyEntryMap));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
