/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/EmailAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

EmailAddress::EmailAddress() : 
    m_emailHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false)
{
}

EmailAddress::EmailAddress(JsonView jsonValue) : 
    m_emailHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false)
{
  *this = jsonValue;
}

EmailAddress& EmailAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verified"))
  {
    m_verified = jsonValue.GetBool("verified");

    m_verifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailAddress::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_verifiedHasBeenSet)
  {
   payload.WithBool("verified", m_verified);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
