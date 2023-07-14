/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GroundTruthManifest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

GroundTruthManifest::GroundTruthManifest() : 
    m_s3ObjectHasBeenSet(false)
{
}

GroundTruthManifest::GroundTruthManifest(JsonView jsonValue) : 
    m_s3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

GroundTruthManifest& GroundTruthManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Object"))
  {
    m_s3Object = jsonValue.GetObject("S3Object");

    m_s3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue GroundTruthManifest::Jsonize() const
{
  JsonValue payload;

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("S3Object", m_s3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
