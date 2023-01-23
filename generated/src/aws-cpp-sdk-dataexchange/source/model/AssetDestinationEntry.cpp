/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AssetDestinationEntry.h>
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

AssetDestinationEntry::AssetDestinationEntry() : 
    m_assetIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

AssetDestinationEntry::AssetDestinationEntry(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

AssetDestinationEntry& AssetDestinationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetDestinationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
