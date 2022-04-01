/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

UserStorageMetadata::UserStorageMetadata(JsonView jsonValue) : 
    m_storageUtilizedInBytes(0),
    m_storageUtilizedInBytesHasBeenSet(false),
    m_storageRuleHasBeenSet(false)
{
  *this = jsonValue;
}

UserStorageMetadata& UserStorageMetadata::operator =(JsonView jsonValue)
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
