/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/S3DataAccessAsset.h>
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

S3DataAccessAsset::S3DataAccessAsset() : 
    m_bucketHasBeenSet(false),
    m_keyPrefixesHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_s3AccessPointAliasHasBeenSet(false),
    m_s3AccessPointArnHasBeenSet(false)
{
}

S3DataAccessAsset::S3DataAccessAsset(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPrefixesHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_s3AccessPointAliasHasBeenSet(false),
    m_s3AccessPointArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3DataAccessAsset& S3DataAccessAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPrefixes"))
  {
    Aws::Utils::Array<JsonView> keyPrefixesJsonList = jsonValue.GetArray("KeyPrefixes");
    for(unsigned keyPrefixesIndex = 0; keyPrefixesIndex < keyPrefixesJsonList.GetLength(); ++keyPrefixesIndex)
    {
      m_keyPrefixes.push_back(keyPrefixesJsonList[keyPrefixesIndex].AsString());
    }
    m_keyPrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsString());
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3AccessPointAlias"))
  {
    m_s3AccessPointAlias = jsonValue.GetString("S3AccessPointAlias");

    m_s3AccessPointAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3AccessPointArn"))
  {
    m_s3AccessPointArn = jsonValue.GetString("S3AccessPointArn");

    m_s3AccessPointArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DataAccessAsset::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyPrefixesJsonList(m_keyPrefixes.size());
   for(unsigned keyPrefixesIndex = 0; keyPrefixesIndex < keyPrefixesJsonList.GetLength(); ++keyPrefixesIndex)
   {
     keyPrefixesJsonList[keyPrefixesIndex].AsString(m_keyPrefixes[keyPrefixesIndex]);
   }
   payload.WithArray("KeyPrefixes", std::move(keyPrefixesJsonList));

  }

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  if(m_s3AccessPointAliasHasBeenSet)
  {
   payload.WithString("S3AccessPointAlias", m_s3AccessPointAlias);

  }

  if(m_s3AccessPointArnHasBeenSet)
  {
   payload.WithString("S3AccessPointArn", m_s3AccessPointArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
