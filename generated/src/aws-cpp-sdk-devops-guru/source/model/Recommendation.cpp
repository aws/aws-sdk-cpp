/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/Recommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

Recommendation::Recommendation() : 
    m_descriptionHasBeenSet(false),
    m_linkHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_relatedEventsHasBeenSet(false),
    m_relatedAnomaliesHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_linkHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_relatedEventsHasBeenSet(false),
    m_relatedAnomaliesHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Link"))
  {
    m_link = jsonValue.GetString("Link");

    m_linkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedEvents"))
  {
    Aws::Utils::Array<JsonView> relatedEventsJsonList = jsonValue.GetArray("RelatedEvents");
    for(unsigned relatedEventsIndex = 0; relatedEventsIndex < relatedEventsJsonList.GetLength(); ++relatedEventsIndex)
    {
      m_relatedEvents.push_back(relatedEventsJsonList[relatedEventsIndex].AsObject());
    }
    m_relatedEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedAnomalies"))
  {
    Aws::Utils::Array<JsonView> relatedAnomaliesJsonList = jsonValue.GetArray("RelatedAnomalies");
    for(unsigned relatedAnomaliesIndex = 0; relatedAnomaliesIndex < relatedAnomaliesJsonList.GetLength(); ++relatedAnomaliesIndex)
    {
      m_relatedAnomalies.push_back(relatedAnomaliesJsonList[relatedAnomaliesIndex].AsObject());
    }
    m_relatedAnomaliesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_linkHasBeenSet)
  {
   payload.WithString("Link", m_link);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_relatedEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedEventsJsonList(m_relatedEvents.size());
   for(unsigned relatedEventsIndex = 0; relatedEventsIndex < relatedEventsJsonList.GetLength(); ++relatedEventsIndex)
   {
     relatedEventsJsonList[relatedEventsIndex].AsObject(m_relatedEvents[relatedEventsIndex].Jsonize());
   }
   payload.WithArray("RelatedEvents", std::move(relatedEventsJsonList));

  }

  if(m_relatedAnomaliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedAnomaliesJsonList(m_relatedAnomalies.size());
   for(unsigned relatedAnomaliesIndex = 0; relatedAnomaliesIndex < relatedAnomaliesJsonList.GetLength(); ++relatedAnomaliesIndex)
   {
     relatedAnomaliesJsonList[relatedAnomaliesIndex].AsObject(m_relatedAnomalies[relatedAnomaliesIndex].Jsonize());
   }
   payload.WithArray("RelatedAnomalies", std::move(relatedAnomaliesJsonList));

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
