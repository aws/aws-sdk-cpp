/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ProtocolDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ProtocolDetails::ProtocolDetails() : 
    m_passiveIpHasBeenSet(false),
    m_tlsSessionResumptionMode(TlsSessionResumptionMode::NOT_SET),
    m_tlsSessionResumptionModeHasBeenSet(false),
    m_setStatOption(SetStatOption::NOT_SET),
    m_setStatOptionHasBeenSet(false)
{
}

ProtocolDetails::ProtocolDetails(JsonView jsonValue) : 
    m_passiveIpHasBeenSet(false),
    m_tlsSessionResumptionMode(TlsSessionResumptionMode::NOT_SET),
    m_tlsSessionResumptionModeHasBeenSet(false),
    m_setStatOption(SetStatOption::NOT_SET),
    m_setStatOptionHasBeenSet(false)
{
  *this = jsonValue;
}

ProtocolDetails& ProtocolDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PassiveIp"))
  {
    m_passiveIp = jsonValue.GetString("PassiveIp");

    m_passiveIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TlsSessionResumptionMode"))
  {
    m_tlsSessionResumptionMode = TlsSessionResumptionModeMapper::GetTlsSessionResumptionModeForName(jsonValue.GetString("TlsSessionResumptionMode"));

    m_tlsSessionResumptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetStatOption"))
  {
    m_setStatOption = SetStatOptionMapper::GetSetStatOptionForName(jsonValue.GetString("SetStatOption"));

    m_setStatOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtocolDetails::Jsonize() const
{
  JsonValue payload;

  if(m_passiveIpHasBeenSet)
  {
   payload.WithString("PassiveIp", m_passiveIp);

  }

  if(m_tlsSessionResumptionModeHasBeenSet)
  {
   payload.WithString("TlsSessionResumptionMode", TlsSessionResumptionModeMapper::GetNameForTlsSessionResumptionMode(m_tlsSessionResumptionMode));
  }

  if(m_setStatOptionHasBeenSet)
  {
   payload.WithString("SetStatOption", SetStatOptionMapper::GetNameForSetStatOption(m_setStatOption));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
