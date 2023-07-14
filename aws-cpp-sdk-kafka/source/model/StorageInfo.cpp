/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/StorageInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

StorageInfo::StorageInfo() : 
    m_ebsStorageInfoHasBeenSet(false)
{
}

StorageInfo::StorageInfo(JsonView jsonValue) : 
    m_ebsStorageInfoHasBeenSet(false)
{
  *this = jsonValue;
}

StorageInfo& StorageInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsStorageInfo"))
  {
    m_ebsStorageInfo = jsonValue.GetObject("ebsStorageInfo");

    m_ebsStorageInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ebsStorageInfoHasBeenSet)
  {
   payload.WithObject("ebsStorageInfo", m_ebsStorageInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
