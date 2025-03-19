/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RootCauseImpact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RootCauseImpact::RootCauseImpact(JsonView jsonValue)
{
  *this = jsonValue;
}

RootCauseImpact& RootCauseImpact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Contribution"))
  {
    m_contribution = jsonValue.GetDouble("Contribution");
    m_contributionHasBeenSet = true;
  }
  return *this;
}

JsonValue RootCauseImpact::Jsonize() const
{
  JsonValue payload;

  if(m_contributionHasBeenSet)
  {
   payload.WithDouble("Contribution", m_contribution);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
