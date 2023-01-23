/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ArrayPropertiesSummary.h>
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

ArrayPropertiesSummary::ArrayPropertiesSummary() : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
}

ArrayPropertiesSummary::ArrayPropertiesSummary(JsonView jsonValue) : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayPropertiesSummary& ArrayPropertiesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");

    m_indexHasBeenSet = true;
  }

  return *this;
}

JsonValue ArrayPropertiesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
