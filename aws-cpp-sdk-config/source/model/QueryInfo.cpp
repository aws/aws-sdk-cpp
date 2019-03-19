/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> selectFieldsJsonList = jsonValue.GetArray("SelectFields");
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
   Array<JsonValue> selectFieldsJsonList(m_selectFields.size());
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
