/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentFrameworkMetadata.h>
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

AssessmentFrameworkMetadata::AssessmentFrameworkMetadata() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(FrameworkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_controlsCount(0),
    m_controlsCountHasBeenSet(false),
    m_controlSetsCount(0),
    m_controlSetsCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

AssessmentFrameworkMetadata::AssessmentFrameworkMetadata(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(FrameworkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_controlsCount(0),
    m_controlsCountHasBeenSet(false),
    m_controlSetsCount(0),
    m_controlSetsCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentFrameworkMetadata& AssessmentFrameworkMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FrameworkTypeMapper::GetFrameworkTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("controlsCount"))
  {
    m_controlsCount = jsonValue.GetInteger("controlsCount");

    m_controlsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetsCount"))
  {
    m_controlSetsCount = jsonValue.GetInteger("controlSetsCount");

    m_controlSetsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentFrameworkMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FrameworkTypeMapper::GetNameForFrameworkType(m_type));
  }

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

  if(m_controlsCountHasBeenSet)
  {
   payload.WithInteger("controlsCount", m_controlsCount);

  }

  if(m_controlSetsCountHasBeenSet)
  {
   payload.WithInteger("controlSetsCount", m_controlSetsCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
