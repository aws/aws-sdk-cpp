/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/MultiRegionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

MultiRegionConfiguration::MultiRegionConfiguration() : 
    m_multiRegionKeyType(MultiRegionKeyType::NOT_SET),
    m_multiRegionKeyTypeHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_replicaKeysHasBeenSet(false)
{
}

MultiRegionConfiguration::MultiRegionConfiguration(JsonView jsonValue) : 
    m_multiRegionKeyType(MultiRegionKeyType::NOT_SET),
    m_multiRegionKeyTypeHasBeenSet(false),
    m_primaryKeyHasBeenSet(false),
    m_replicaKeysHasBeenSet(false)
{
  *this = jsonValue;
}

MultiRegionConfiguration& MultiRegionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiRegionKeyType"))
  {
    m_multiRegionKeyType = MultiRegionKeyTypeMapper::GetMultiRegionKeyTypeForName(jsonValue.GetString("MultiRegionKeyType"));

    m_multiRegionKeyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryKey"))
  {
    m_primaryKey = jsonValue.GetObject("PrimaryKey");

    m_primaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaKeys"))
  {
    Aws::Utils::Array<JsonView> replicaKeysJsonList = jsonValue.GetArray("ReplicaKeys");
    for(unsigned replicaKeysIndex = 0; replicaKeysIndex < replicaKeysJsonList.GetLength(); ++replicaKeysIndex)
    {
      m_replicaKeys.push_back(replicaKeysJsonList[replicaKeysIndex].AsObject());
    }
    m_replicaKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiRegionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_multiRegionKeyTypeHasBeenSet)
  {
   payload.WithString("MultiRegionKeyType", MultiRegionKeyTypeMapper::GetNameForMultiRegionKeyType(m_multiRegionKeyType));
  }

  if(m_primaryKeyHasBeenSet)
  {
   payload.WithObject("PrimaryKey", m_primaryKey.Jsonize());

  }

  if(m_replicaKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaKeysJsonList(m_replicaKeys.size());
   for(unsigned replicaKeysIndex = 0; replicaKeysIndex < replicaKeysJsonList.GetLength(); ++replicaKeysIndex)
   {
     replicaKeysJsonList[replicaKeysIndex].AsObject(m_replicaKeys[replicaKeysIndex].Jsonize());
   }
   payload.WithArray("ReplicaKeys", std::move(replicaKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
