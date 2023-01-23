/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/AvailabilityZonesMismatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

AvailabilityZonesMismatch::AvailabilityZonesMismatch() : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

AvailabilityZonesMismatch::AvailabilityZonesMismatch(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityZonesMismatch& AvailabilityZonesMismatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityZonesMismatch::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
