/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RuntimePlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

RuntimePlatform::RuntimePlatform() : 
    m_operatingSystemFamilyHasBeenSet(false),
    m_cpuArchitectureHasBeenSet(false)
{
}

RuntimePlatform::RuntimePlatform(JsonView jsonValue) : 
    m_operatingSystemFamilyHasBeenSet(false),
    m_cpuArchitectureHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimePlatform& RuntimePlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operatingSystemFamily"))
  {
    m_operatingSystemFamily = jsonValue.GetString("operatingSystemFamily");

    m_operatingSystemFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuArchitecture"))
  {
    m_cpuArchitecture = jsonValue.GetString("cpuArchitecture");

    m_cpuArchitectureHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimePlatform::Jsonize() const
{
  JsonValue payload;

  if(m_operatingSystemFamilyHasBeenSet)
  {
   payload.WithString("operatingSystemFamily", m_operatingSystemFamily);

  }

  if(m_cpuArchitectureHasBeenSet)
  {
   payload.WithString("cpuArchitecture", m_cpuArchitecture);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
