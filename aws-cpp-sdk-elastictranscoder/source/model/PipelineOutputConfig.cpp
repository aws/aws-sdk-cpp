/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

PipelineOutputConfig::PipelineOutputConfig(const JsonValue& jsonValue) : 
    m_bucketHasBeenSet(false),
    m_storageClassHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineOutputConfig& PipelineOutputConfig::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> permissionsJsonList = jsonValue.GetArray("Permissions");
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
   Array<JsonValue> permissionsJsonList(m_permissions.size());
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