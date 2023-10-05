/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentBlueprintSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentBlueprintSummary::EnvironmentBlueprintSummary() : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_provisioningPropertiesHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EnvironmentBlueprintSummary::EnvironmentBlueprintSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_provisioningPropertiesHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentBlueprintSummary& EnvironmentBlueprintSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisioningProperties"))
  {
    m_provisioningProperties = jsonValue.GetObject("provisioningProperties");

    m_provisioningPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentBlueprintSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_provisioningPropertiesHasBeenSet)
  {
   payload.WithObject("provisioningProperties", m_provisioningProperties.Jsonize());

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
