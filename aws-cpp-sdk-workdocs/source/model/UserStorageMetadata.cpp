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

#include <aws/workdocs/model/UserStorageMetadata.h>
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

UserStorageMetadata::UserStorageMetadata() : 
    m_storageUtilizedInBytes(0),
    m_storageUtilizedInBytesHasBeenSet(false),
    m_storageRuleHasBeenSet(false)
{
}

UserStorageMetadata::UserStorageMetadata(const JsonValue& jsonValue) : 
    m_storageUtilizedInBytes(0),
    m_storageUtilizedInBytesHasBeenSet(false),
    m_storageRuleHasBeenSet(false)
{
  *this = jsonValue;
}

UserStorageMetadata& UserStorageMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StorageUtilizedInBytes"))
  {
    m_storageUtilizedInBytes = jsonValue.GetInt64("StorageUtilizedInBytes");

    m_storageUtilizedInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageRule"))
  {
    m_storageRule = jsonValue.GetObject("StorageRule");

    m_storageRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue UserStorageMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_storageUtilizedInBytesHasBeenSet)
  {
   payload.WithInt64("StorageUtilizedInBytes", m_storageUtilizedInBytes);

  }

  if(m_storageRuleHasBeenSet)
  {
   payload.WithObject("StorageRule", m_storageRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
