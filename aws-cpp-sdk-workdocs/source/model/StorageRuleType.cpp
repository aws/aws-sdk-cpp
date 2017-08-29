/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/workdocs/model/StorageRuleType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

StorageRuleType::StorageRuleType() : 
    m_storageAllocatedInBytes(0),
    m_storageAllocatedInBytesHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false)
{
}

StorageRuleType::StorageRuleType(const JsonValue& jsonValue) : 
    m_storageAllocatedInBytes(0),
    m_storageAllocatedInBytesHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StorageRuleType& StorageRuleType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StorageAllocatedInBytes"))
  {
    m_storageAllocatedInBytes = jsonValue.GetInt64("StorageAllocatedInBytes");

    m_storageAllocatedInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));

    m_storageTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageRuleType::Jsonize() const
{
  JsonValue payload;

  if(m_storageAllocatedInBytesHasBeenSet)
  {
   payload.WithInt64("StorageAllocatedInBytes", m_storageAllocatedInBytes);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
