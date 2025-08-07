/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergOptimizationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

IcebergOptimizationProperties::IcebergOptimizationProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergOptimizationProperties& IcebergOptimizationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compaction"))
  {
    Aws::Map<Aws::String, JsonView> compactionJsonMap = jsonValue.GetObject("Compaction").GetAllObjects();
    for(auto& compactionItem : compactionJsonMap)
    {
      m_compaction[compactionItem.first] = compactionItem.second.AsString();
    }
    m_compactionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Retention"))
  {
    Aws::Map<Aws::String, JsonView> retentionJsonMap = jsonValue.GetObject("Retention").GetAllObjects();
    for(auto& retentionItem : retentionJsonMap)
    {
      m_retention[retentionItem.first] = retentionItem.second.AsString();
    }
    m_retentionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrphanFileDeletion"))
  {
    Aws::Map<Aws::String, JsonView> orphanFileDeletionJsonMap = jsonValue.GetObject("OrphanFileDeletion").GetAllObjects();
    for(auto& orphanFileDeletionItem : orphanFileDeletionJsonMap)
    {
      m_orphanFileDeletion[orphanFileDeletionItem.first] = orphanFileDeletionItem.second.AsString();
    }
    m_orphanFileDeletionHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergOptimizationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_compactionHasBeenSet)
  {
   JsonValue compactionJsonMap;
   for(auto& compactionItem : m_compaction)
   {
     compactionJsonMap.WithString(compactionItem.first, compactionItem.second);
   }
   payload.WithObject("Compaction", std::move(compactionJsonMap));

  }

  if(m_retentionHasBeenSet)
  {
   JsonValue retentionJsonMap;
   for(auto& retentionItem : m_retention)
   {
     retentionJsonMap.WithString(retentionItem.first, retentionItem.second);
   }
   payload.WithObject("Retention", std::move(retentionJsonMap));

  }

  if(m_orphanFileDeletionHasBeenSet)
  {
   JsonValue orphanFileDeletionJsonMap;
   for(auto& orphanFileDeletionItem : m_orphanFileDeletion)
   {
     orphanFileDeletionJsonMap.WithString(orphanFileDeletionItem.first, orphanFileDeletionItem.second);
   }
   payload.WithObject("OrphanFileDeletion", std::move(orphanFileDeletionJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
