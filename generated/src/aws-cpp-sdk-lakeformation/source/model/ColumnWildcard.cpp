/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> excludedColumnNamesJsonList = jsonValue.GetArray("ExcludedColumnNames");
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
   Aws::Utils::Array<JsonValue> excludedColumnNamesJsonList(m_excludedColumnNames.size());
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
