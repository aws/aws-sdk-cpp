/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/View.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

View::View() : 
    m_filtersHasBeenSet(false),
    m_includedPropertiesHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
}

View::View(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_includedPropertiesHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
  *this = jsonValue;
}

View& View::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");

    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedProperties"))
  {
    Aws::Utils::Array<JsonView> includedPropertiesJsonList = jsonValue.GetArray("IncludedProperties");
    for(unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength(); ++includedPropertiesIndex)
    {
      m_includedProperties.push_back(includedPropertiesJsonList[includedPropertiesIndex].AsObject());
    }
    m_includedPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViewArn"))
  {
    m_viewArn = jsonValue.GetString("ViewArn");

    m_viewArnHasBeenSet = true;
  }

  return *this;
}

JsonValue View::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_includedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedPropertiesJsonList(m_includedProperties.size());
   for(unsigned includedPropertiesIndex = 0; includedPropertiesIndex < includedPropertiesJsonList.GetLength(); ++includedPropertiesIndex)
   {
     includedPropertiesJsonList[includedPropertiesIndex].AsObject(m_includedProperties[includedPropertiesIndex].Jsonize());
   }
   payload.WithArray("IncludedProperties", std::move(includedPropertiesJsonList));

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("LastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
