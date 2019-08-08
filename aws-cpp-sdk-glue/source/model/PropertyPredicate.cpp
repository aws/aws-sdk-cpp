/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
