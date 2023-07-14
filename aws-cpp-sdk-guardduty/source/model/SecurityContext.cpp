/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SecurityContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

SecurityContext::SecurityContext() : 
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
}

SecurityContext::SecurityContext(JsonView jsonValue) : 
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityContext& SecurityContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");

    m_privilegedHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityContext::Jsonize() const
{
  JsonValue payload;

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
