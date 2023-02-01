/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ArrayProperties.h>
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

ArrayProperties::ArrayProperties() : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

ArrayProperties::ArrayProperties(JsonView jsonValue) : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayProperties& ArrayProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue ArrayProperties::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
