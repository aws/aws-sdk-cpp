/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CapacityLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

CapacityLimits::CapacityLimits() : 
    m_maxIndexingCapacityInOCU(0),
    m_maxIndexingCapacityInOCUHasBeenSet(false),
    m_maxSearchCapacityInOCU(0),
    m_maxSearchCapacityInOCUHasBeenSet(false)
{
}

CapacityLimits::CapacityLimits(JsonView jsonValue) : 
    m_maxIndexingCapacityInOCU(0),
    m_maxIndexingCapacityInOCUHasBeenSet(false),
    m_maxSearchCapacityInOCU(0),
    m_maxSearchCapacityInOCUHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityLimits& CapacityLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxIndexingCapacityInOCU"))
  {
    m_maxIndexingCapacityInOCU = jsonValue.GetInteger("maxIndexingCapacityInOCU");

    m_maxIndexingCapacityInOCUHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSearchCapacityInOCU"))
  {
    m_maxSearchCapacityInOCU = jsonValue.GetInteger("maxSearchCapacityInOCU");

    m_maxSearchCapacityInOCUHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityLimits::Jsonize() const
{
  JsonValue payload;

  if(m_maxIndexingCapacityInOCUHasBeenSet)
  {
   payload.WithInteger("maxIndexingCapacityInOCU", m_maxIndexingCapacityInOCU);

  }

  if(m_maxSearchCapacityInOCUHasBeenSet)
  {
   payload.WithInteger("maxSearchCapacityInOCU", m_maxSearchCapacityInOCU);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
