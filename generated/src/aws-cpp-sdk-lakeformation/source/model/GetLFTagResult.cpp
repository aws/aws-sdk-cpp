/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetLFTagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLFTagResult::GetLFTagResult()
{
}

GetLFTagResult::GetLFTagResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLFTagResult& GetLFTagResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

  }

  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

  }

  if(jsonValue.ValueExists("TagValues"))
  {
    Aws::Utils::Array<JsonView> tagValuesJsonList = jsonValue.GetArray("TagValues");
    for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
    {
      m_tagValues.push_back(tagValuesJsonList[tagValuesIndex].AsString());
    }
  }



  return *this;
}
