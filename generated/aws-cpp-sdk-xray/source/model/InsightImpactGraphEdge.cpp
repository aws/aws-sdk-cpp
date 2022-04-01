/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightImpactGraphEdge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

InsightImpactGraphEdge::InsightImpactGraphEdge() : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false)
{
}

InsightImpactGraphEdge::InsightImpactGraphEdge(JsonView jsonValue) : 
    m_referenceId(0),
    m_referenceIdHasBeenSet(false)
{
  *this = jsonValue;
}

InsightImpactGraphEdge& InsightImpactGraphEdge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetInteger("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightImpactGraphEdge::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithInteger("ReferenceId", m_referenceId);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
