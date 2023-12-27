/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ExceedsLimitException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

ExceedsLimitException::ExceedsLimitException() : 
    m_messageHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_quotaValue(0),
    m_quotaValueHasBeenSet(false)
{
}

ExceedsLimitException::ExceedsLimitException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_quotaValue(0),
    m_quotaValueHasBeenSet(false)
{
  *this = jsonValue;
}

ExceedsLimitException& ExceedsLimitException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quotaName"))
  {
    m_quotaName = jsonValue.GetString("quotaName");

    m_quotaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quotaValue"))
  {
    m_quotaValue = jsonValue.GetInteger("quotaValue");

    m_quotaValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ExceedsLimitException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_quotaNameHasBeenSet)
  {
   payload.WithString("quotaName", m_quotaName);

  }

  if(m_quotaValueHasBeenSet)
  {
   payload.WithInteger("quotaValue", m_quotaValue);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
