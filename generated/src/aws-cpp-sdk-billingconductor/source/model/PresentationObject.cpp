/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/PresentationObject.h>
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

PresentationObject::PresentationObject(JsonView jsonValue)
{
  *this = jsonValue;
}

PresentationObject& PresentationObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  return *this;
}

JsonValue PresentationObject::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", m_service);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
