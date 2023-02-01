/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DatasetSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

DatasetSource::DatasetSource() : 
    m_groundTruthManifestHasBeenSet(false)
{
}

DatasetSource::DatasetSource(JsonView jsonValue) : 
    m_groundTruthManifestHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSource& DatasetSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroundTruthManifest"))
  {
    m_groundTruthManifest = jsonValue.GetObject("GroundTruthManifest");

    m_groundTruthManifestHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSource::Jsonize() const
{
  JsonValue payload;

  if(m_groundTruthManifestHasBeenSet)
  {
   payload.WithObject("GroundTruthManifest", m_groundTruthManifest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
