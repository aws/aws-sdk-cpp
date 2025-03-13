/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/StorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

StorageConfiguration::StorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageConfiguration& StorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetDouble("sizeInGb");
    m_sizeInGbHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithDouble("sizeInGb", m_sizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
