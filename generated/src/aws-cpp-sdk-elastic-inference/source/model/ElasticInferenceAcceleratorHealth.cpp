/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/ElasticInferenceAcceleratorHealth.h>
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

ElasticInferenceAcceleratorHealth::ElasticInferenceAcceleratorHealth() : 
    m_statusHasBeenSet(false)
{
}

ElasticInferenceAcceleratorHealth::ElasticInferenceAcceleratorHealth(JsonView jsonValue) : 
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticInferenceAcceleratorHealth& ElasticInferenceAcceleratorHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticInferenceAcceleratorHealth::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
