/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/PipelineOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

PipelineOutputConfig::PipelineOutputConfig() : 
    m_bucketHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

PipelineOutputConfig::PipelineOutputConfig(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineOutputConfig& PipelineOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageClass"))
  {
    m_storageClass = jsonValue.GetString("StorageClass");

    m_storageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(permissionsJsonList[permissionsIndex].AsObject());
    }
    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("StorageClass", m_storageClass);

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
