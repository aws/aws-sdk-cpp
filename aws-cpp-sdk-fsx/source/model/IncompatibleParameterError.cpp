/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/IncompatibleParameterError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

IncompatibleParameterError::IncompatibleParameterError() : 
    m_parameterHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

IncompatibleParameterError::IncompatibleParameterError(JsonView jsonValue) : 
    m_parameterHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

IncompatibleParameterError& IncompatibleParameterError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Parameter"))
  {
    m_parameter = jsonValue.GetString("Parameter");

    m_parameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue IncompatibleParameterError::Jsonize() const
{
  JsonValue payload;

  if(m_parameterHasBeenSet)
  {
   payload.WithString("Parameter", m_parameter);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
