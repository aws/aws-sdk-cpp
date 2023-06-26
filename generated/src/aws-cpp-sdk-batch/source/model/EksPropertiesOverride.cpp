/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPropertiesOverride.h>
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

EksPropertiesOverride::EksPropertiesOverride() : 
    m_podPropertiesHasBeenSet(false)
{
}

EksPropertiesOverride::EksPropertiesOverride(JsonView jsonValue) : 
    m_podPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

EksPropertiesOverride& EksPropertiesOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("podProperties"))
  {
    m_podProperties = jsonValue.GetObject("podProperties");

    m_podPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue EksPropertiesOverride::Jsonize() const
{
  JsonValue payload;

  if(m_podPropertiesHasBeenSet)
  {
   payload.WithObject("podProperties", m_podProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
