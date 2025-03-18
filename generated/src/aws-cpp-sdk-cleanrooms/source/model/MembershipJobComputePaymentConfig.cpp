/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipJobComputePaymentConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

MembershipJobComputePaymentConfig::MembershipJobComputePaymentConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

MembershipJobComputePaymentConfig& MembershipJobComputePaymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isResponsible"))
  {
    m_isResponsible = jsonValue.GetBool("isResponsible");
    m_isResponsibleHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipJobComputePaymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_isResponsibleHasBeenSet)
  {
   payload.WithBool("isResponsible", m_isResponsible);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
