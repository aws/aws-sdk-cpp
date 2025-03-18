/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ColumnFilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

ColumnFilterConfiguration::ColumnFilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ColumnFilterConfiguration& ColumnFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includedColumnNames"))
  {
    Aws::Utils::Array<JsonView> includedColumnNamesJsonList = jsonValue.GetArray("includedColumnNames");
    for(unsigned includedColumnNamesIndex = 0; includedColumnNamesIndex < includedColumnNamesJsonList.GetLength(); ++includedColumnNamesIndex)
    {
      m_includedColumnNames.push_back(includedColumnNamesJsonList[includedColumnNamesIndex].AsString());
    }
    m_includedColumnNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_includedColumnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedColumnNamesJsonList(m_includedColumnNames.size());
   for(unsigned includedColumnNamesIndex = 0; includedColumnNamesIndex < includedColumnNamesJsonList.GetLength(); ++includedColumnNamesIndex)
   {
     includedColumnNamesJsonList[includedColumnNamesIndex].AsString(m_includedColumnNames[includedColumnNamesIndex]);
   }
   payload.WithArray("includedColumnNames", std::move(includedColumnNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
