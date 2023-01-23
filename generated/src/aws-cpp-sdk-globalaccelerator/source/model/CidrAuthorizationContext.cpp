/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CidrAuthorizationContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

CidrAuthorizationContext::CidrAuthorizationContext() : 
    m_messageHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
}

CidrAuthorizationContext::CidrAuthorizationContext(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_signatureHasBeenSet(false)
{
  *this = jsonValue;
}

CidrAuthorizationContext& CidrAuthorizationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signature"))
  {
    m_signature = jsonValue.GetString("Signature");

    m_signatureHasBeenSet = true;
  }

  return *this;
}

JsonValue CidrAuthorizationContext::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("Signature", m_signature);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
