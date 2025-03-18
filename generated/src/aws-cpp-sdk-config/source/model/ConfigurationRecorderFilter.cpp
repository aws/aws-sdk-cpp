/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationRecorderFilter.h>
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

ConfigurationRecorderFilter::ConfigurationRecorderFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationRecorderFilter& ConfigurationRecorderFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterName"))
  {
    m_filterName = ConfigurationRecorderFilterNameMapper::GetConfigurationRecorderFilterNameForName(jsonValue.GetString("filterName"));
    m_filterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterValue"))
  {
    Aws::Utils::Array<JsonView> filterValueJsonList = jsonValue.GetArray("filterValue");
    for(unsigned filterValueIndex = 0; filterValueIndex < filterValueJsonList.GetLength(); ++filterValueIndex)
    {
      m_filterValue.push_back(filterValueJsonList[filterValueIndex].AsString());
    }
    m_filterValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationRecorderFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", ConfigurationRecorderFilterNameMapper::GetNameForConfigurationRecorderFilterName(m_filterName));
  }

  if(m_filterValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterValueJsonList(m_filterValue.size());
   for(unsigned filterValueIndex = 0; filterValueIndex < filterValueJsonList.GetLength(); ++filterValueIndex)
   {
     filterValueJsonList[filterValueIndex].AsString(m_filterValue[filterValueIndex]);
   }
   payload.WithArray("filterValue", std::move(filterValueJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
