/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CapabilitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

CapabilitySummary::CapabilitySummary() : 
    m_capabilityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(CapabilityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

CapabilitySummary::CapabilitySummary(JsonView jsonValue) : 
    m_capabilityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(CapabilityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CapabilitySummary& CapabilitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capabilityId"))
  {
    m_capabilityId = jsonValue.GetString("capabilityId");

    m_capabilityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = CapabilityTypeMapper::GetCapabilityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CapabilitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_capabilityIdHasBeenSet)
  {
   payload.WithString("capabilityId", m_capabilityId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CapabilityTypeMapper::GetNameForCapabilityType(m_type));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
