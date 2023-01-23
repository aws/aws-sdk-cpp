/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PropertyPredicate.h>
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

PropertyPredicate::PropertyPredicate() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false)
{
}

PropertyPredicate::PropertyPredicate(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyPredicate& PropertyPredicate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparator"))
  {
    m_comparator = ComparatorMapper::GetComparatorForName(jsonValue.GetString("Comparator"));

    m_comparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyPredicate::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("Comparator", ComparatorMapper::GetNameForComparator(m_comparator));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
