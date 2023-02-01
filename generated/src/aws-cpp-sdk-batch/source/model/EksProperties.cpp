/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksProperties.h>
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

EksProperties::EksProperties() : 
    m_podPropertiesHasBeenSet(false)
{
}

EksProperties::EksProperties(JsonView jsonValue) : 
    m_podPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

EksProperties& EksProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("podProperties"))
  {
    m_podProperties = jsonValue.GetObject("podProperties");

    m_podPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue EksProperties::Jsonize() const
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
