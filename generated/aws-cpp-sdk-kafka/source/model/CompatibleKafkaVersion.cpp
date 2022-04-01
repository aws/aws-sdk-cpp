﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CompatibleKafkaVersion.h>
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

CompatibleKafkaVersion::CompatibleKafkaVersion() : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
}

CompatibleKafkaVersion::CompatibleKafkaVersion(JsonView jsonValue) : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

CompatibleKafkaVersion& CompatibleKafkaVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetVersions"))
  {
    Array<JsonView> targetVersionsJsonList = jsonValue.GetArray("targetVersions");
    for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
    {
      m_targetVersions.push_back(targetVersionsJsonList[targetVersionsIndex].AsString());
    }
    m_targetVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CompatibleKafkaVersion::Jsonize() const
{
  JsonValue payload;

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_targetVersionsHasBeenSet)
  {
   Array<JsonValue> targetVersionsJsonList(m_targetVersions.size());
   for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
   {
     targetVersionsJsonList[targetVersionsIndex].AsString(m_targetVersions[targetVersionsIndex]);
   }
   payload.WithArray("targetVersions", std::move(targetVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
