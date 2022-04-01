/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ImportSummary::ImportSummary() : 
    m_importIdHasBeenSet(false),
    m_importedResourceIdHasBeenSet(false),
    m_importedResourceNameHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_mergeStrategyHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_importedResourceType(ImportResourceType::NOT_SET),
    m_importedResourceTypeHasBeenSet(false)
{
}

ImportSummary::ImportSummary(JsonView jsonValue) : 
    m_importIdHasBeenSet(false),
    m_importedResourceIdHasBeenSet(false),
    m_importedResourceNameHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_mergeStrategyHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_importedResourceType(ImportResourceType::NOT_SET),
    m_importedResourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ImportSummary& ImportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importId"))
  {
    m_importId = jsonValue.GetString("importId");

    m_importIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importedResourceId"))
  {
    m_importedResourceId = jsonValue.GetString("importedResourceId");

    m_importedResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importedResourceName"))
  {
    m_importedResourceName = jsonValue.GetString("importedResourceName");

    m_importedResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("importStatus"));

    m_importStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeStrategy"))
  {
    m_mergeStrategy = MergeStrategyMapper::GetMergeStrategyForName(jsonValue.GetString("mergeStrategy"));

    m_mergeStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importedResourceType"))
  {
    m_importedResourceType = ImportResourceTypeMapper::GetImportResourceTypeForName(jsonValue.GetString("importedResourceType"));

    m_importedResourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_importIdHasBeenSet)
  {
   payload.WithString("importId", m_importId);

  }

  if(m_importedResourceIdHasBeenSet)
  {
   payload.WithString("importedResourceId", m_importedResourceId);

  }

  if(m_importedResourceNameHasBeenSet)
  {
   payload.WithString("importedResourceName", m_importedResourceName);

  }

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("importStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if(m_mergeStrategyHasBeenSet)
  {
   payload.WithString("mergeStrategy", MergeStrategyMapper::GetNameForMergeStrategy(m_mergeStrategy));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_importedResourceTypeHasBeenSet)
  {
   payload.WithString("importedResourceType", ImportResourceTypeMapper::GetNameForImportResourceType(m_importedResourceType));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
