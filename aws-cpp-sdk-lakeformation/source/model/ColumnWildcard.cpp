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

#include <aws/lakeformation/model/ColumnWildcard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

ColumnWildcard::ColumnWildcard() : 
    m_excludedColumnNamesHasBeenSet(false)
{
}

ColumnWildcard::ColumnWildcard(JsonView jsonValue) : 
    m_excludedColumnNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnWildcard& ColumnWildcard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExcludedColumnNames"))
  {
    Array<JsonView> excludedColumnNamesJsonList = jsonValue.GetArray("ExcludedColumnNames");
    for(unsigned excludedColumnNamesIndex = 0; excludedColumnNamesIndex < excludedColumnNamesJsonList.GetLength(); ++excludedColumnNamesIndex)
    {
      m_excludedColumnNames.push_back(excludedColumnNamesJsonList[excludedColumnNamesIndex].AsString());
    }
    m_excludedColumnNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnWildcard::Jsonize() const
{
  JsonValue payload;

  if(m_excludedColumnNamesHasBeenSet)
  {
   Array<JsonValue> excludedColumnNamesJsonList(m_excludedColumnNames.size());
   for(unsigned excludedColumnNamesIndex = 0; excludedColumnNamesIndex < excludedColumnNamesJsonList.GetLength(); ++excludedColumnNamesIndex)
   {
     excludedColumnNamesJsonList[excludedColumnNamesIndex].AsString(m_excludedColumnNames[excludedColumnNamesIndex]);
   }
   payload.WithArray("ExcludedColumnNames", std::move(excludedColumnNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
