/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/CloudHsmServiceException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

CloudHsmServiceException::CloudHsmServiceException() : 
    m_messageHasBeenSet(false),
    m_retryable(false),
    m_retryableHasBeenSet(false)
{
}

CloudHsmServiceException::CloudHsmServiceException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_retryable(false),
    m_retryableHasBeenSet(false)
{
  *this = jsonValue;
}

CloudHsmServiceException& CloudHsmServiceException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryable"))
  {
    m_retryable = jsonValue.GetBool("retryable");

    m_retryableHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudHsmServiceException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_retryableHasBeenSet)
  {
   payload.WithBool("retryable", m_retryable);

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
