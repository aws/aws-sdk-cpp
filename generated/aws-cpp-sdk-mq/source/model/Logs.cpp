/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/Logs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

Logs::Logs() : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
}

Logs::Logs(JsonView jsonValue) : 
    m_audit(false),
    m_auditHasBeenSet(false),
    m_general(false),
    m_generalHasBeenSet(false)
{
  *this = jsonValue;
}

Logs& Logs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audit"))
  {
    m_audit = jsonValue.GetBool("audit");

    m_auditHasBeenSet = true;
  }

  if(jsonValue.ValueExists("general"))
  {
    m_general = jsonValue.GetBool("general");

    m_generalHasBeenSet = true;
  }

  return *this;
}

JsonValue Logs::Jsonize() const
{
  JsonValue payload;

  if(m_auditHasBeenSet)
  {
   payload.WithBool("audit", m_audit);

  }

  if(m_generalHasBeenSet)
  {
   payload.WithBool("general", m_general);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
