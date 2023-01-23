/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Sort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Sort::Sort() : 
    m_keyHasBeenSet(false),
    m_value(SortValue::NOT_SET),
    m_valueHasBeenSet(false)
{
}

Sort::Sort(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_value(SortValue::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Sort& Sort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = SortValueMapper::GetSortValueForName(jsonValue.GetString("Value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Sort::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", SortValueMapper::GetNameForSortValue(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
