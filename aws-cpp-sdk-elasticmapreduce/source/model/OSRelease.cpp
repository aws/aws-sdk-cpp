/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OSRelease.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

OSRelease::OSRelease() : 
    m_labelHasBeenSet(false)
{
}

OSRelease::OSRelease(JsonView jsonValue) : 
    m_labelHasBeenSet(false)
{
  *this = jsonValue;
}

OSRelease& OSRelease::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  return *this;
}

JsonValue OSRelease::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
