/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ValidatorMetric.h>
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

ValidatorMetric::ValidatorMetric() : 
    m_validationLoss(0.0),
    m_validationLossHasBeenSet(false)
{
}

ValidatorMetric::ValidatorMetric(JsonView jsonValue) : 
    m_validationLoss(0.0),
    m_validationLossHasBeenSet(false)
{
  *this = jsonValue;
}

ValidatorMetric& ValidatorMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationLoss"))
  {
    m_validationLoss = jsonValue.GetDouble("validationLoss");

    m_validationLossHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidatorMetric::Jsonize() const
{
  JsonValue payload;

  if(m_validationLossHasBeenSet)
  {
   payload.WithDouble("validationLoss", m_validationLoss);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
