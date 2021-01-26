/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/EBSStorageInfo.h>
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

EBSStorageInfo::EBSStorageInfo() : 
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false)
{
}

EBSStorageInfo::EBSStorageInfo(JsonView jsonValue) : 
    m_volumeSize(0),
    m_volumeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

EBSStorageInfo& EBSStorageInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeSize"))
  {
    m_volumeSize = jsonValue.GetInteger("volumeSize");

    m_volumeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue EBSStorageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSizeHasBeenSet)
  {
   payload.WithInteger("volumeSize", m_volumeSize);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
