/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetStateChangeReason.h>
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

InstanceFleetStateChangeReason::InstanceFleetStateChangeReason() : 
    m_code(InstanceFleetStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InstanceFleetStateChangeReason::InstanceFleetStateChangeReason(JsonView jsonValue) : 
    m_code(InstanceFleetStateChangeReasonCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceFleetStateChangeReason& InstanceFleetStateChangeReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = InstanceFleetStateChangeReasonCodeMapper::GetInstanceFleetStateChangeReasonCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceFleetStateChangeReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", InstanceFleetStateChangeReasonCodeMapper::GetNameForInstanceFleetStateChangeReasonCode(m_code));
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
