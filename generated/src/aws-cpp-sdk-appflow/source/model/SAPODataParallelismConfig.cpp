/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataParallelismConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SAPODataParallelismConfig::SAPODataParallelismConfig() : 
    m_maxParallelism(0),
    m_maxParallelismHasBeenSet(false)
{
}

SAPODataParallelismConfig::SAPODataParallelismConfig(JsonView jsonValue) : 
    m_maxParallelism(0),
    m_maxParallelismHasBeenSet(false)
{
  *this = jsonValue;
}

SAPODataParallelismConfig& SAPODataParallelismConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxParallelism"))
  {
    m_maxParallelism = jsonValue.GetInteger("maxParallelism");

    m_maxParallelismHasBeenSet = true;
  }

  return *this;
}

JsonValue SAPODataParallelismConfig::Jsonize() const
{
  JsonValue payload;

  if(m_maxParallelismHasBeenSet)
  {
   payload.WithInteger("maxParallelism", m_maxParallelism);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
