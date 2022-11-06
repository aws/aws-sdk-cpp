/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FieldValidationConfiguration.h>
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

FieldValidationConfiguration::FieldValidationConfiguration() : 
    m_numValuesHasBeenSet(false),
    m_strValuesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_validationMessageHasBeenSet(false)
{
}

FieldValidationConfiguration::FieldValidationConfiguration(JsonView jsonValue) : 
    m_numValuesHasBeenSet(false),
    m_strValuesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_validationMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FieldValidationConfiguration& FieldValidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numValues"))
  {
    Aws::Utils::Array<JsonView> numValuesJsonList = jsonValue.GetArray("numValues");
    for(unsigned numValuesIndex = 0; numValuesIndex < numValuesJsonList.GetLength(); ++numValuesIndex)
    {
      m_numValues.push_back(numValuesJsonList[numValuesIndex].AsInteger());
    }
    m_numValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strValues"))
  {
    Aws::Utils::Array<JsonView> strValuesJsonList = jsonValue.GetArray("strValues");
    for(unsigned strValuesIndex = 0; strValuesIndex < strValuesJsonList.GetLength(); ++strValuesIndex)
    {
      m_strValues.push_back(strValuesJsonList[strValuesIndex].AsString());
    }
    m_strValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationMessage"))
  {
    m_validationMessage = jsonValue.GetString("validationMessage");

    m_validationMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldValidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> numValuesJsonList(m_numValues.size());
   for(unsigned numValuesIndex = 0; numValuesIndex < numValuesJsonList.GetLength(); ++numValuesIndex)
   {
     numValuesJsonList[numValuesIndex].AsInteger(m_numValues[numValuesIndex]);
   }
   payload.WithArray("numValues", std::move(numValuesJsonList));

  }

  if(m_strValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> strValuesJsonList(m_strValues.size());
   for(unsigned strValuesIndex = 0; strValuesIndex < strValuesJsonList.GetLength(); ++strValuesIndex)
   {
     strValuesJsonList[strValuesIndex].AsString(m_strValues[strValuesIndex]);
   }
   payload.WithArray("strValues", std::move(strValuesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_validationMessageHasBeenSet)
  {
   payload.WithString("validationMessage", m_validationMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
