/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SimpleScopeTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SimpleScopeTerm::SimpleScopeTerm() : 
    m_comparator(JobComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_key(ScopeFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

SimpleScopeTerm::SimpleScopeTerm(JsonView jsonValue) : 
    m_comparator(JobComparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_key(ScopeFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleScopeTerm& SimpleScopeTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparator"))
  {
    m_comparator = JobComparatorMapper::GetJobComparatorForName(jsonValue.GetString("comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = ScopeFilterKeyMapper::GetScopeFilterKeyForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleScopeTerm::Jsonize() const
{
  JsonValue payload;

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("comparator", JobComparatorMapper::GetNameForJobComparator(m_comparator));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", ScopeFilterKeyMapper::GetNameForScopeFilterKey(m_key));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
