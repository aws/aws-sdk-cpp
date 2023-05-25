/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/AssociateResourceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

AssociateResourceError::AssociateResourceError() : 
    m_messageHasBeenSet(false),
    m_reason(AssociateResourceErrorReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

AssociateResourceError::AssociateResourceError(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(AssociateResourceErrorReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

AssociateResourceError& AssociateResourceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = AssociateResourceErrorReasonMapper::GetAssociateResourceErrorReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociateResourceError::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AssociateResourceErrorReasonMapper::GetNameForAssociateResourceErrorReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
