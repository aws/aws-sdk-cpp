/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/AdvancedFieldSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

AdvancedFieldSelector::AdvancedFieldSelector() : 
    m_fieldHasBeenSet(false),
    m_equalsHasBeenSet(false),
    m_startsWithHasBeenSet(false),
    m_endsWithHasBeenSet(false),
    m_notEqualsHasBeenSet(false),
    m_notStartsWithHasBeenSet(false),
    m_notEndsWithHasBeenSet(false)
{
}

AdvancedFieldSelector::AdvancedFieldSelector(JsonView jsonValue) : 
    m_fieldHasBeenSet(false),
    m_equalsHasBeenSet(false),
    m_startsWithHasBeenSet(false),
    m_endsWithHasBeenSet(false),
    m_notEqualsHasBeenSet(false),
    m_notStartsWithHasBeenSet(false),
    m_notEndsWithHasBeenSet(false)
{
  *this = jsonValue;
}

AdvancedFieldSelector& AdvancedFieldSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = jsonValue.GetString("Field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Equals"))
  {
    Aws::Utils::Array<JsonView> equalsJsonList = jsonValue.GetArray("Equals");
    for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
    {
      m_equals.push_back(equalsJsonList[equalsIndex].AsString());
    }
    m_equalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartsWith"))
  {
    Aws::Utils::Array<JsonView> startsWithJsonList = jsonValue.GetArray("StartsWith");
    for(unsigned startsWithIndex = 0; startsWithIndex < startsWithJsonList.GetLength(); ++startsWithIndex)
    {
      m_startsWith.push_back(startsWithJsonList[startsWithIndex].AsString());
    }
    m_startsWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndsWith"))
  {
    Aws::Utils::Array<JsonView> endsWithJsonList = jsonValue.GetArray("EndsWith");
    for(unsigned endsWithIndex = 0; endsWithIndex < endsWithJsonList.GetLength(); ++endsWithIndex)
    {
      m_endsWith.push_back(endsWithJsonList[endsWithIndex].AsString());
    }
    m_endsWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotEquals"))
  {
    Aws::Utils::Array<JsonView> notEqualsJsonList = jsonValue.GetArray("NotEquals");
    for(unsigned notEqualsIndex = 0; notEqualsIndex < notEqualsJsonList.GetLength(); ++notEqualsIndex)
    {
      m_notEquals.push_back(notEqualsJsonList[notEqualsIndex].AsString());
    }
    m_notEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotStartsWith"))
  {
    Aws::Utils::Array<JsonView> notStartsWithJsonList = jsonValue.GetArray("NotStartsWith");
    for(unsigned notStartsWithIndex = 0; notStartsWithIndex < notStartsWithJsonList.GetLength(); ++notStartsWithIndex)
    {
      m_notStartsWith.push_back(notStartsWithJsonList[notStartsWithIndex].AsString());
    }
    m_notStartsWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotEndsWith"))
  {
    Aws::Utils::Array<JsonView> notEndsWithJsonList = jsonValue.GetArray("NotEndsWith");
    for(unsigned notEndsWithIndex = 0; notEndsWithIndex < notEndsWithJsonList.GetLength(); ++notEndsWithIndex)
    {
      m_notEndsWith.push_back(notEndsWithJsonList[notEndsWithIndex].AsString());
    }
    m_notEndsWithHasBeenSet = true;
  }

  return *this;
}

JsonValue AdvancedFieldSelector::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", m_field);

  }

  if(m_equalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> equalsJsonList(m_equals.size());
   for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
   {
     equalsJsonList[equalsIndex].AsString(m_equals[equalsIndex]);
   }
   payload.WithArray("Equals", std::move(equalsJsonList));

  }

  if(m_startsWithHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> startsWithJsonList(m_startsWith.size());
   for(unsigned startsWithIndex = 0; startsWithIndex < startsWithJsonList.GetLength(); ++startsWithIndex)
   {
     startsWithJsonList[startsWithIndex].AsString(m_startsWith[startsWithIndex]);
   }
   payload.WithArray("StartsWith", std::move(startsWithJsonList));

  }

  if(m_endsWithHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endsWithJsonList(m_endsWith.size());
   for(unsigned endsWithIndex = 0; endsWithIndex < endsWithJsonList.GetLength(); ++endsWithIndex)
   {
     endsWithJsonList[endsWithIndex].AsString(m_endsWith[endsWithIndex]);
   }
   payload.WithArray("EndsWith", std::move(endsWithJsonList));

  }

  if(m_notEqualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notEqualsJsonList(m_notEquals.size());
   for(unsigned notEqualsIndex = 0; notEqualsIndex < notEqualsJsonList.GetLength(); ++notEqualsIndex)
   {
     notEqualsJsonList[notEqualsIndex].AsString(m_notEquals[notEqualsIndex]);
   }
   payload.WithArray("NotEquals", std::move(notEqualsJsonList));

  }

  if(m_notStartsWithHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notStartsWithJsonList(m_notStartsWith.size());
   for(unsigned notStartsWithIndex = 0; notStartsWithIndex < notStartsWithJsonList.GetLength(); ++notStartsWithIndex)
   {
     notStartsWithJsonList[notStartsWithIndex].AsString(m_notStartsWith[notStartsWithIndex]);
   }
   payload.WithArray("NotStartsWith", std::move(notStartsWithJsonList));

  }

  if(m_notEndsWithHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notEndsWithJsonList(m_notEndsWith.size());
   for(unsigned notEndsWithIndex = 0; notEndsWithIndex < notEndsWithJsonList.GetLength(); ++notEndsWithIndex)
   {
     notEndsWithJsonList[notEndsWithIndex].AsString(m_notEndsWith[notEndsWithIndex]);
   }
   payload.WithArray("NotEndsWith", std::move(notEndsWithJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
