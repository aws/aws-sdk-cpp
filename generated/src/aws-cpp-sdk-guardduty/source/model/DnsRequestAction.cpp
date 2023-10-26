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
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_domainWithSuffixHasBeenSet(false)
{
}

DnsRequestAction::DnsRequestAction(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false),
    m_domainWithSuffixHasBeenSet(false)
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

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blocked"))
  {
    m_blocked = jsonValue.GetBool("blocked");

    m_blockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainWithSuffix"))
  {
    m_domainWithSuffix = jsonValue.GetString("domainWithSuffix");

    m_domainWithSuffixHasBeenSet = true;
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

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("blocked", m_blocked);

  }

  if(m_domainWithSuffixHasBeenSet)
  {
   payload.WithString("domainWithSuffix", m_domainWithSuffix);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
