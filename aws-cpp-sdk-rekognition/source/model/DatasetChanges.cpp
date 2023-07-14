/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetChanges.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetChanges::DatasetChanges() : 
    m_groundTruthHasBeenSet(false)
{
}

DatasetChanges::DatasetChanges(JsonView jsonValue) : 
    m_groundTruthHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetChanges& DatasetChanges::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroundTruth"))
  {
    m_groundTruth = HashingUtils::Base64Decode(jsonValue.GetString("GroundTruth"));
    m_groundTruthHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetChanges::Jsonize() const
{
  JsonValue payload;

  if(m_groundTruthHasBeenSet)
  {
   payload.WithString("GroundTruth", HashingUtils::Base64Encode(m_groundTruth));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
