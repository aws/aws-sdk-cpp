/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/InternalServerException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

InternalServerException::InternalServerException() : 
    m_messageHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
}

InternalServerException::InternalServerException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

InternalServerException& InternalServerException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalServerException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
