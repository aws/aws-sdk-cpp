/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DnsRequestAction.h>
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

DnsRequestAction::DnsRequestAction() : 
    m_domainHasBeenSet(false)
{
}

DnsRequestAction::DnsRequestAction(JsonView jsonValue) : 
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

DnsRequestAction& DnsRequestAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsRequestAction::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
