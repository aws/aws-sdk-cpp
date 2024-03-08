/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipPaymentConfiguration.h>
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

MembershipPaymentConfiguration::MembershipPaymentConfiguration() : 
    m_queryComputeHasBeenSet(false)
{
}

MembershipPaymentConfiguration::MembershipPaymentConfiguration(JsonView jsonValue) : 
    m_queryComputeHasBeenSet(false)
{
  *this = jsonValue;
}

MembershipPaymentConfiguration& MembershipPaymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryCompute"))
  {
    m_queryCompute = jsonValue.GetObject("queryCompute");

    m_queryComputeHasBeenSet = true;
  }

  return *this;
}

JsonValue MembershipPaymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queryComputeHasBeenSet)
  {
   payload.WithObject("queryCompute", m_queryCompute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
