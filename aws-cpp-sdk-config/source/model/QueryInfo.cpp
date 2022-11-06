/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/QueryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

QueryInfo::QueryInfo() : 
    m_selectFieldsHasBeenSet(false)
{
}

QueryInfo::QueryInfo(JsonView jsonValue) : 
    m_selectFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

QueryInfo& QueryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectFields"))
  {
    Aws::Utils::Array<JsonView> selectFieldsJsonList = jsonValue.GetArray("SelectFields");
    for(unsigned selectFieldsIndex = 0; selectFieldsIndex < selectFieldsJsonList.GetLength(); ++selectFieldsIndex)
    {
      m_selectFields.push_back(selectFieldsJsonList[selectFieldsIndex].AsObject());
    }
    m_selectFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_selectFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectFieldsJsonList(m_selectFields.size());
   for(unsigned selectFieldsIndex = 0; selectFieldsIndex < selectFieldsJsonList.GetLength(); ++selectFieldsIndex)
   {
     selectFieldsJsonList[selectFieldsIndex].AsObject(m_selectFields[selectFieldsIndex].Jsonize());
   }
   payload.WithArray("SelectFields", std::move(selectFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
