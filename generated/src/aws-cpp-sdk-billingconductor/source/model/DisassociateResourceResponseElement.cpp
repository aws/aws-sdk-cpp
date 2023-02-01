/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/DisassociateResourceResponseElement.h>
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

DisassociateResourceResponseElement::DisassociateResourceResponseElement() : 
    m_arnHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

DisassociateResourceResponseElement::DisassociateResourceResponseElement(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

DisassociateResourceResponseElement& DisassociateResourceResponseElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue DisassociateResourceResponseElement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
