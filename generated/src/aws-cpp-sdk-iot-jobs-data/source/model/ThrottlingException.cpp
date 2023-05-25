/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_messageHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = HashingUtils::Base64Decode(jsonValue.GetString("payload"));
    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", HashingUtils::Base64Encode(m_payload));
  }

  return payload;
}

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
