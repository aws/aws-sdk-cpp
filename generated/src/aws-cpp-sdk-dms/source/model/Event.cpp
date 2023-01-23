/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Event::Event() : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_dateHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceIdentifier"))
  {
    m_sourceIdentifier = jsonValue.GetString("SourceIdentifier");

    m_sourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCategories"))
  {
    Aws::Utils::Array<JsonView> eventCategoriesJsonList = jsonValue.GetArray("EventCategories");
    for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
    {
      m_eventCategories.push_back(eventCategoriesJsonList[eventCategoriesIndex].AsString());
    }
    m_eventCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdentifierHasBeenSet)
  {
   payload.WithString("SourceIdentifier", m_sourceIdentifier);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_eventCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventCategoriesJsonList(m_eventCategories.size());
   for(unsigned eventCategoriesIndex = 0; eventCategoriesIndex < eventCategoriesJsonList.GetLength(); ++eventCategoriesIndex)
   {
     eventCategoriesJsonList[eventCategoriesIndex].AsString(m_eventCategories[eventCategoriesIndex]);
   }
   payload.WithArray("EventCategories", std::move(eventCategoriesJsonList));

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
