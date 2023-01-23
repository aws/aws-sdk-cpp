/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ConnectionCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

ConnectionCredentials::ConnectionCredentials() : 
    m_connectionTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
}

ConnectionCredentials::ConnectionCredentials(JsonView jsonValue) : 
    m_connectionTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionCredentials& ConnectionCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionToken"))
  {
    m_connectionToken = jsonValue.GetString("ConnectionToken");

    m_connectionTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expiry"))
  {
    m_expiry = jsonValue.GetString("Expiry");

    m_expiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTokenHasBeenSet)
  {
   payload.WithString("ConnectionToken", m_connectionToken);

  }

  if(m_expiryHasBeenSet)
  {
   payload.WithString("Expiry", m_expiry);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
