/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

TaskTemplateField::TaskTemplateField() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(TaskTemplateFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_singleSelectOptionsHasBeenSet(false)
{
}

TaskTemplateField::TaskTemplateField(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(TaskTemplateFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_singleSelectOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskTemplateField& TaskTemplateField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetObject("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TaskTemplateFieldTypeMapper::GetTaskTemplateFieldTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingleSelectOptions"))
  {
    Aws::Utils::Array<JsonView> singleSelectOptionsJsonList = jsonValue.GetArray("SingleSelectOptions");
    for(unsigned singleSelectOptionsIndex = 0; singleSelectOptionsIndex < singleSelectOptionsJsonList.GetLength(); ++singleSelectOptionsIndex)
    {
      m_singleSelectOptions.push_back(singleSelectOptionsJsonList[singleSelectOptionsIndex].AsString());
    }
    m_singleSelectOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskTemplateField::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithObject("Id", m_id.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TaskTemplateFieldTypeMapper::GetNameForTaskTemplateFieldType(m_type));
  }

  if(m_singleSelectOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> singleSelectOptionsJsonList(m_singleSelectOptions.size());
   for(unsigned singleSelectOptionsIndex = 0; singleSelectOptionsIndex < singleSelectOptionsJsonList.GetLength(); ++singleSelectOptionsIndex)
   {
     singleSelectOptionsJsonList[singleSelectOptionsIndex].AsString(m_singleSelectOptions[singleSelectOptionsIndex]);
   }
   payload.WithArray("SingleSelectOptions", std::move(singleSelectOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
