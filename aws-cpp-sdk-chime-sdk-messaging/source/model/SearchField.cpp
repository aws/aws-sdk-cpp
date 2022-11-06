/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SearchField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

SearchField::SearchField() : 
    m_key(SearchFieldKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(SearchFieldOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

SearchField::SearchField(JsonView jsonValue) : 
    m_key(SearchFieldKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(SearchFieldOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

SearchField& SearchField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = SearchFieldKeyMapper::GetSearchFieldKeyForName(jsonValue.GetString("Key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = SearchFieldOperatorMapper::GetSearchFieldOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchField::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", SearchFieldKeyMapper::GetNameForSearchFieldKey(m_key));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", SearchFieldOperatorMapper::GetNameForSearchFieldOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
