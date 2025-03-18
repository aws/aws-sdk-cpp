/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RoutingCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RoutingCriteria::RoutingCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingCriteria& RoutingCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("responseQualityDifference"))
  {
    m_responseQualityDifference = jsonValue.GetDouble("responseQualityDifference");
    m_responseQualityDifferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_responseQualityDifferenceHasBeenSet)
  {
   payload.WithDouble("responseQualityDifference", m_responseQualityDifference);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
