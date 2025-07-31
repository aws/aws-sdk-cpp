/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Route.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Route::Route(JsonView jsonValue)
{
  *this = jsonValue;
}

Route& Route::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupFiltersList"))
  {
    Aws::Utils::Array<JsonView> groupFiltersListJsonList = jsonValue.GetArray("GroupFiltersList");
    for(unsigned groupFiltersListIndex = 0; groupFiltersListIndex < groupFiltersListJsonList.GetLength(); ++groupFiltersListIndex)
    {
      m_groupFiltersList.push_back(groupFiltersListJsonList[groupFiltersListIndex].AsObject());
    }
    m_groupFiltersListHasBeenSet = true;
  }
  return *this;
}

JsonValue Route::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_groupFiltersListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupFiltersListJsonList(m_groupFiltersList.size());
   for(unsigned groupFiltersListIndex = 0; groupFiltersListIndex < groupFiltersListJsonList.GetLength(); ++groupFiltersListIndex)
   {
     groupFiltersListJsonList[groupFiltersListIndex].AsObject(m_groupFiltersList[groupFiltersListIndex].Jsonize());
   }
   payload.WithArray("GroupFiltersList", std::move(groupFiltersListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
