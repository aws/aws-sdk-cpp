/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/RecipientDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

RecipientDetail::RecipientDetail() : 
    m_ssoIdentityHasBeenSet(false)
{
}

RecipientDetail::RecipientDetail(JsonView jsonValue) : 
    m_ssoIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

RecipientDetail& RecipientDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssoIdentity"))
  {
    m_ssoIdentity = jsonValue.GetObject("ssoIdentity");

    m_ssoIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue RecipientDetail::Jsonize() const
{
  JsonValue payload;

  if(m_ssoIdentityHasBeenSet)
  {
   payload.WithObject("ssoIdentity", m_ssoIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
