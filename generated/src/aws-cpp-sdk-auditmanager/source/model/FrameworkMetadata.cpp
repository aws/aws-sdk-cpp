/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/FrameworkMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

FrameworkMetadata::FrameworkMetadata() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_complianceTypeHasBeenSet(false)
{
}

FrameworkMetadata::FrameworkMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_complianceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FrameworkMetadata& FrameworkMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logo"))
  {
    m_logo = jsonValue.GetString("logo");

    m_logoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceType"))
  {
    m_complianceType = jsonValue.GetString("complianceType");

    m_complianceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameworkMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_logoHasBeenSet)
  {
   payload.WithString("logo", m_logo);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("complianceType", m_complianceType);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
