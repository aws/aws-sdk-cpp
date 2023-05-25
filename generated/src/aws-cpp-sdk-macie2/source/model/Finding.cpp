/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Finding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Finding::Finding() : 
    m_accountIdHasBeenSet(false),
    m_archived(false),
    m_archivedHasBeenSet(false),
    m_category(FindingCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_classificationDetailsHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourcesAffectedHasBeenSet(false),
    m_sample(false),
    m_sampleHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_type(FindingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Finding::Finding(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_archived(false),
    m_archivedHasBeenSet(false),
    m_category(FindingCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_classificationDetailsHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourcesAffectedHasBeenSet(false),
    m_sample(false),
    m_sampleHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_type(FindingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("archived"))
  {
    m_archived = jsonValue.GetBool("archived");

    m_archivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = FindingCategoryMapper::GetFindingCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("classificationDetails"))
  {
    m_classificationDetails = jsonValue.GetObject("classificationDetails");

    m_classificationDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("partition"))
  {
    m_partition = jsonValue.GetString("partition");

    m_partitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDetails"))
  {
    m_policyDetails = jsonValue.GetObject("policyDetails");

    m_policyDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesAffected"))
  {
    m_resourcesAffected = jsonValue.GetObject("resourcesAffected");

    m_resourcesAffectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sample"))
  {
    m_sample = jsonValue.GetBool("sample");

    m_sampleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetObject("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_archivedHasBeenSet)
  {
   payload.WithBool("archived", m_archived);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", FindingCategoryMapper::GetNameForFindingCategory(m_category));
  }

  if(m_classificationDetailsHasBeenSet)
  {
   payload.WithObject("classificationDetails", m_classificationDetails.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

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

  if(m_partitionHasBeenSet)
  {
   payload.WithString("partition", m_partition);

  }

  if(m_policyDetailsHasBeenSet)
  {
   payload.WithObject("policyDetails", m_policyDetails.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_resourcesAffectedHasBeenSet)
  {
   payload.WithObject("resourcesAffected", m_resourcesAffected.Jsonize());

  }

  if(m_sampleHasBeenSet)
  {
   payload.WithBool("sample", m_sample);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithObject("severity", m_severity.Jsonize());

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FindingTypeMapper::GetNameForFindingType(m_type));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
