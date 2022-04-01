/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeModelStat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

EdgeModelStat::EdgeModelStat() : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_offlineDeviceCount(0),
    m_offlineDeviceCountHasBeenSet(false),
    m_connectedDeviceCount(0),
    m_connectedDeviceCountHasBeenSet(false),
    m_activeDeviceCount(0),
    m_activeDeviceCountHasBeenSet(false),
    m_samplingDeviceCount(0),
    m_samplingDeviceCountHasBeenSet(false)
{
}

EdgeModelStat::EdgeModelStat(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_offlineDeviceCount(0),
    m_offlineDeviceCountHasBeenSet(false),
    m_connectedDeviceCount(0),
    m_connectedDeviceCountHasBeenSet(false),
    m_activeDeviceCount(0),
    m_activeDeviceCountHasBeenSet(false),
    m_samplingDeviceCount(0),
    m_samplingDeviceCountHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeModelStat& EdgeModelStat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfflineDeviceCount"))
  {
    m_offlineDeviceCount = jsonValue.GetInt64("OfflineDeviceCount");

    m_offlineDeviceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedDeviceCount"))
  {
    m_connectedDeviceCount = jsonValue.GetInt64("ConnectedDeviceCount");

    m_connectedDeviceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveDeviceCount"))
  {
    m_activeDeviceCount = jsonValue.GetInt64("ActiveDeviceCount");

    m_activeDeviceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SamplingDeviceCount"))
  {
    m_samplingDeviceCount = jsonValue.GetInt64("SamplingDeviceCount");

    m_samplingDeviceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeModelStat::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_offlineDeviceCountHasBeenSet)
  {
   payload.WithInt64("OfflineDeviceCount", m_offlineDeviceCount);

  }

  if(m_connectedDeviceCountHasBeenSet)
  {
   payload.WithInt64("ConnectedDeviceCount", m_connectedDeviceCount);

  }

  if(m_activeDeviceCountHasBeenSet)
  {
   payload.WithInt64("ActiveDeviceCount", m_activeDeviceCount);

  }

  if(m_samplingDeviceCountHasBeenSet)
  {
   payload.WithInt64("SamplingDeviceCount", m_samplingDeviceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
