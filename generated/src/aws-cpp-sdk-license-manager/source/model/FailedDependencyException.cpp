/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/FailedDependencyException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

FailedDependencyException::FailedDependencyException() : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
}

FailedDependencyException::FailedDependencyException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FailedDependencyException& FailedDependencyException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedDependencyException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
