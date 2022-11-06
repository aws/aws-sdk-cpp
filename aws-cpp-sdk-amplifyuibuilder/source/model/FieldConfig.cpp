/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FieldConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FieldConfig::FieldConfig() : 
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_validationsHasBeenSet(false)
{
}

FieldConfig::FieldConfig(JsonView jsonValue) : 
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_validationsHasBeenSet(false)
{
  *this = jsonValue;
}

FieldConfig& FieldConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excluded"))
  {
    m_excluded = jsonValue.GetBool("excluded");

    m_excludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputType"))
  {
    m_inputType = jsonValue.GetObject("inputType");

    m_inputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetObject("position");

    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validations"))
  {
    Aws::Utils::Array<JsonView> validationsJsonList = jsonValue.GetArray("validations");
    for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
    {
      m_validations.push_back(validationsJsonList[validationsIndex].AsObject());
    }
    m_validationsHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldConfig::Jsonize() const
{
  JsonValue payload;

  if(m_excludedHasBeenSet)
  {
   payload.WithBool("excluded", m_excluded);

  }

  if(m_inputTypeHasBeenSet)
  {
   payload.WithObject("inputType", m_inputType.Jsonize());

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_validationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationsJsonList(m_validations.size());
   for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
   {
     validationsJsonList[validationsIndex].AsObject(m_validations[validationsIndex].Jsonize());
   }
   payload.WithArray("validations", std::move(validationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
