/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeDimensionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDimensionResult::DescribeDimensionResult() : 
    m_type(DimensionType::NOT_SET)
{
}

DescribeDimensionResult::DescribeDimensionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(DimensionType::NOT_SET)
{
  *this = result;
}

DescribeDimensionResult& DescribeDimensionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DimensionTypeMapper::GetDimensionTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("stringValues"))
  {
    Aws::Utils::Array<JsonView> stringValuesJsonList = jsonValue.GetArray("stringValues");
    for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
    {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }



  return *this;
}
