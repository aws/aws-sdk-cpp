/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SSOIdentity.h>
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

SSOIdentity::SSOIdentity() : 
    m_identityStoreIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

SSOIdentity::SSOIdentity(JsonView jsonValue) : 
    m_identityStoreIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

SSOIdentity& SSOIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("identityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SSOIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("identityStoreId", m_identityStoreId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
