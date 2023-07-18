/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ReadinessCheckSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

ReadinessCheckSummary::ReadinessCheckSummary() : 
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_readinessCheckNameHasBeenSet(false)
{
}

ReadinessCheckSummary::ReadinessCheckSummary(JsonView jsonValue) : 
    m_readiness(Readiness::NOT_SET),
    m_readinessHasBeenSet(false),
    m_readinessCheckNameHasBeenSet(false)
{
  *this = jsonValue;
}

ReadinessCheckSummary& ReadinessCheckSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("readiness"))
  {
    m_readiness = ReadinessMapper::GetReadinessForName(jsonValue.GetString("readiness"));

    m_readinessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readinessCheckName"))
  {
    m_readinessCheckName = jsonValue.GetString("readinessCheckName");

    m_readinessCheckNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadinessCheckSummary::Jsonize() const
{
  JsonValue payload;

  if(m_readinessHasBeenSet)
  {
   payload.WithString("readiness", ReadinessMapper::GetNameForReadiness(m_readiness));
  }

  if(m_readinessCheckNameHasBeenSet)
  {
   payload.WithString("readinessCheckName", m_readinessCheckName);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
