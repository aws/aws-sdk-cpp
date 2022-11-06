/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/LaunchPathSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

LaunchPathSummary::LaunchPathSummary() : 
    m_idHasBeenSet(false),
    m_constraintSummariesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

LaunchPathSummary::LaunchPathSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_constraintSummariesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchPathSummary& LaunchPathSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConstraintSummaries"))
  {
    Aws::Utils::Array<JsonView> constraintSummariesJsonList = jsonValue.GetArray("ConstraintSummaries");
    for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
    {
      m_constraintSummaries.push_back(constraintSummariesJsonList[constraintSummariesIndex].AsObject());
    }
    m_constraintSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchPathSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_constraintSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> constraintSummariesJsonList(m_constraintSummaries.size());
   for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
   {
     constraintSummariesJsonList[constraintSummariesIndex].AsObject(m_constraintSummaries[constraintSummariesIndex].Jsonize());
   }
   payload.WithArray("ConstraintSummaries", std::move(constraintSummariesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
