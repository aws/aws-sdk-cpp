/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StudioComponentSummary::StudioComponentSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_subtype(StudioComponentSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_type(StudioComponentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

StudioComponentSummary::StudioComponentSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_subtype(StudioComponentSubtype::NOT_SET),
    m_subtypeHasBeenSet(false),
    m_type(StudioComponentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

StudioComponentSummary& StudioComponentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentId"))
  {
    m_studioComponentId = jsonValue.GetString("studioComponentId");

    m_studioComponentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subtype"))
  {
    m_subtype = StudioComponentSubtypeMapper::GetStudioComponentSubtypeForName(jsonValue.GetString("subtype"));

    m_subtypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = StudioComponentTypeMapper::GetStudioComponentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioComponentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_studioComponentIdHasBeenSet)
  {
   payload.WithString("studioComponentId", m_studioComponentId);

  }

  if(m_subtypeHasBeenSet)
  {
   payload.WithString("subtype", StudioComponentSubtypeMapper::GetNameForStudioComponentSubtype(m_subtype));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StudioComponentTypeMapper::GetNameForStudioComponentType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
