/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/AuroraDbClusterStorageConfiguration.h>
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

AuroraDbClusterStorageConfiguration::AuroraDbClusterStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AuroraDbClusterStorageConfiguration& AuroraDbClusterStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = jsonValue.GetString("storageType");
    m_storageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AuroraDbClusterStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", m_storageType);

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
