/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ShuffleConfig.h>
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

ShuffleConfig::ShuffleConfig() : 
    m_seed(0),
    m_seedHasBeenSet(false)
{
}

ShuffleConfig::ShuffleConfig(JsonView jsonValue) : 
    m_seed(0),
    m_seedHasBeenSet(false)
{
  *this = jsonValue;
}

ShuffleConfig& ShuffleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Seed"))
  {
    m_seed = jsonValue.GetInt64("Seed");

    m_seedHasBeenSet = true;
  }

  return *this;
}

JsonValue ShuffleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_seedHasBeenSet)
  {
   payload.WithInt64("Seed", m_seed);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
