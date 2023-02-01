/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/InvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

InvalidParameterException::InvalidParameterException() : 
    m_messageHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
}

InvalidParameterException::InvalidParameterException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidParameterException& InvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");

    m_parameterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
