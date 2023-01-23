/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DataSetEntry.h>
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

DataSetEntry::DataSetEntry() : 
    m_arnHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_origin(Origin::NOT_SET),
    m_originHasBeenSet(false),
    m_originDetailsHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DataSetEntry::DataSetEntry(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_assetType(AssetType::NOT_SET),
    m_assetTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_origin(Origin::NOT_SET),
    m_originHasBeenSet(false),
    m_originDetailsHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetEntry& DataSetEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = OriginMapper::GetOriginForName(jsonValue.GetString("Origin"));

    m_originHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginDetails"))
  {
    m_originDetails = jsonValue.GetObject("OriginDetails");

    m_originDetailsHasBeenSet = true;
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

JsonValue DataSetEntry::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_assetTypeHasBeenSet)
  {
   payload.WithString("AssetType", AssetTypeMapper::GetNameForAssetType(m_assetType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", OriginMapper::GetNameForOrigin(m_origin));
  }

  if(m_originDetailsHasBeenSet)
  {
   payload.WithObject("OriginDetails", m_originDetails.Jsonize());

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
