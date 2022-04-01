/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/MemoryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

MemoryInfo::MemoryInfo() : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
}

MemoryInfo::MemoryInfo(JsonView jsonValue) : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
  *this = jsonValue;
}

MemoryInfo& MemoryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sizeInMiB"))
  {
    m_sizeInMiB = jsonValue.GetInteger("sizeInMiB");

    m_sizeInMiBHasBeenSet = true;
  }

  return *this;
}

JsonValue MemoryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInMiBHasBeenSet)
  {
   payload.WithInteger("sizeInMiB", m_sizeInMiB);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
