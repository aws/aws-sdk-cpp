/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ErrorInfo::ErrorInfo() : 
    m_errorCodeHasBeenSet(false),
    m_errorStringHasBeenSet(false)
{
}

ErrorInfo::ErrorInfo(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorStringHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorInfo& ErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorString"))
  {
    m_errorString = jsonValue.GetString("errorString");

    m_errorStringHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorStringHasBeenSet)
  {
   payload.WithString("errorString", m_errorString);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
