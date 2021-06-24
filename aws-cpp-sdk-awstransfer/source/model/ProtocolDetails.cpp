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
    m_passiveIpHasBeenSet(false)
{
}

ProtocolDetails::ProtocolDetails(JsonView jsonValue) : 
    m_passiveIpHasBeenSet(false)
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

  return *this;
}

JsonValue ProtocolDetails::Jsonize() const
{
  JsonValue payload;

  if(m_passiveIpHasBeenSet)
  {
   payload.WithString("PassiveIp", m_passiveIp);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
