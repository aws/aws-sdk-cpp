/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AssetEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

AssetEntry::AssetEntry() : 
    m_arnHasBeenSet(false),
    m_assetDetailsHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AssetEntry::AssetEntry(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_assetDetailsHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AssetEntry& AssetEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssetDetails"))
  {
    m_assetDetails = jsonValue.GetObject("AssetDetails");

    m_assetDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssetType"))
  {
    m_assetType = AssetTypeMapper::GetAssetTypeForName(jsonValue.GetString("AssetType"));

    m_assetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetEntry::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_assetDetailsHasBeenSet)
  {
   payload.WithObject("AssetDetails", m_assetDetails.Jsonize());

  }

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("AssetType", AssetTypeMapper::GetNameForAssetType(m_assetType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
