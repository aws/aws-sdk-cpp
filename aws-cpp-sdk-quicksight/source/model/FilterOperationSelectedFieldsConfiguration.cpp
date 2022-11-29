/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterOperationSelectedFieldsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FilterOperationSelectedFieldsConfiguration::FilterOperationSelectedFieldsConfiguration() : 
    m_selectedFieldsHasBeenSet(false),
    m_selectedFieldOptions(SelectedFieldOptions::NOT_SET),
    m_selectedFieldOptionsHasBeenSet(false)
{
}

FilterOperationSelectedFieldsConfiguration::FilterOperationSelectedFieldsConfiguration(JsonView jsonValue) : 
    m_selectedFieldsHasBeenSet(false),
    m_selectedFieldOptions(SelectedFieldOptions::NOT_SET),
    m_selectedFieldOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

FilterOperationSelectedFieldsConfiguration& FilterOperationSelectedFieldsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedFields"))
  {
    Aws::Utils::Array<JsonView> selectedFieldsJsonList = jsonValue.GetArray("SelectedFields");
    for(unsigned selectedFieldsIndex = 0; selectedFieldsIndex < selectedFieldsJsonList.GetLength(); ++selectedFieldsIndex)
    {
      m_selectedFields.push_back(selectedFieldsJsonList[selectedFieldsIndex].AsString());
    }
    m_selectedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectedFieldOptions"))
  {
    m_selectedFieldOptions = SelectedFieldOptionsMapper::GetSelectedFieldOptionsForName(jsonValue.GetString("SelectedFieldOptions"));

    m_selectedFieldOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterOperationSelectedFieldsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_selectedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedFieldsJsonList(m_selectedFields.size());
   for(unsigned selectedFieldsIndex = 0; selectedFieldsIndex < selectedFieldsJsonList.GetLength(); ++selectedFieldsIndex)
   {
     selectedFieldsJsonList[selectedFieldsIndex].AsString(m_selectedFields[selectedFieldsIndex]);
   }
   payload.WithArray("SelectedFields", std::move(selectedFieldsJsonList));

  }

  if(m_selectedFieldOptionsHasBeenSet)
  {
   payload.WithString("SelectedFieldOptions", SelectedFieldOptionsMapper::GetNameForSelectedFieldOptions(m_selectedFieldOptions));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
