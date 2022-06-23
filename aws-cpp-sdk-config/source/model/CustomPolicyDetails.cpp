/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/CustomPolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

CustomPolicyDetails::CustomPolicyDetails() : 
    m_policyRuntimeHasBeenSet(false),
    m_policyTextHasBeenSet(false),
    m_enableDebugLogDelivery(false),
    m_enableDebugLogDeliveryHasBeenSet(false)
{
}

CustomPolicyDetails::CustomPolicyDetails(JsonView jsonValue) : 
    m_policyRuntimeHasBeenSet(false),
    m_policyTextHasBeenSet(false),
    m_enableDebugLogDelivery(false),
    m_enableDebugLogDeliveryHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPolicyDetails& CustomPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyRuntime"))
  {
    m_policyRuntime = jsonValue.GetString("PolicyRuntime");

    m_policyRuntimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyText"))
  {
    m_policyText = jsonValue.GetString("PolicyText");

    m_policyTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDebugLogDelivery"))
  {
    m_enableDebugLogDelivery = jsonValue.GetBool("EnableDebugLogDelivery");

    m_enableDebugLogDeliveryHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_policyRuntimeHasBeenSet)
  {
   payload.WithString("PolicyRuntime", m_policyRuntime);

  }

  if(m_policyTextHasBeenSet)
  {
   payload.WithString("PolicyText", m_policyText);

  }

  if(m_enableDebugLogDeliveryHasBeenSet)
  {
   payload.WithBool("EnableDebugLogDelivery", m_enableDebugLogDelivery);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
