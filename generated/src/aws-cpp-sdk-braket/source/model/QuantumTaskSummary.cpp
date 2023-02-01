/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QuantumTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

QuantumTaskSummary::QuantumTaskSummary() : 
    m_createdAtHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_outputS3BucketHasBeenSet(false),
    m_outputS3DirectoryHasBeenSet(false),
    m_quantumTaskArnHasBeenSet(false),
    m_shots(0),
    m_shotsHasBeenSet(false),
    m_status(QuantumTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

QuantumTaskSummary::QuantumTaskSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_outputS3BucketHasBeenSet(false),
    m_outputS3DirectoryHasBeenSet(false),
    m_quantumTaskArnHasBeenSet(false),
    m_shots(0),
    m_shotsHasBeenSet(false),
    m_status(QuantumTaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

QuantumTaskSummary& QuantumTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3Bucket"))
  {
    m_outputS3Bucket = jsonValue.GetString("outputS3Bucket");

    m_outputS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3Directory"))
  {
    m_outputS3Directory = jsonValue.GetString("outputS3Directory");

    m_outputS3DirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quantumTaskArn"))
  {
    m_quantumTaskArn = jsonValue.GetString("quantumTaskArn");

    m_quantumTaskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shots"))
  {
    m_shots = jsonValue.GetInt64("shots");

    m_shotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QuantumTaskStatusMapper::GetQuantumTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue QuantumTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_outputS3BucketHasBeenSet)
  {
   payload.WithString("outputS3Bucket", m_outputS3Bucket);

  }

  if(m_outputS3DirectoryHasBeenSet)
  {
   payload.WithString("outputS3Directory", m_outputS3Directory);

  }

  if(m_quantumTaskArnHasBeenSet)
  {
   payload.WithString("quantumTaskArn", m_quantumTaskArn);

  }

  if(m_shotsHasBeenSet)
  {
   payload.WithInt64("shots", m_shots);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QuantumTaskStatusMapper::GetNameForQuantumTaskStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
