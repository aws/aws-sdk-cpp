/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CodeError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

CodeError::CodeError() : 
    m_errorTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CodeError::CodeError(JsonView jsonValue) : 
    m_errorTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

CodeError& CodeError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = jsonValue.GetString("errorType");

    m_errorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeError::Jsonize() const
{
  JsonValue payload;

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", m_errorType);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
