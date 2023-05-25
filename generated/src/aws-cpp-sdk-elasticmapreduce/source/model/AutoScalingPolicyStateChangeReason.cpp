/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AutoScalingPolicyStateChangeReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

AutoScalingPolicyStateChangeReason::AutoScalingPolicyStateChangeReason() : 
    m_code(AutoScalingPolicyStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AutoScalingPolicyStateChangeReason::AutoScalingPolicyStateChangeReason(JsonView jsonValue) : 
    m_code(AutoScalingPolicyStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingPolicyStateChangeReason& AutoScalingPolicyStateChangeReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = AutoScalingPolicyStateChangeReasonCodeMapper::GetAutoScalingPolicyStateChangeReasonCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingPolicyStateChangeReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", AutoScalingPolicyStateChangeReasonCodeMapper::GetNameForAutoScalingPolicyStateChangeReasonCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
