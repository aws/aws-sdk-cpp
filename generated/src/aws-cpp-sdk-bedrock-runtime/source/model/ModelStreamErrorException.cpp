/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ModelStreamErrorException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

ModelStreamErrorException::ModelStreamErrorException() : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_originalMessageHasBeenSet(false)
{
}

ModelStreamErrorException::ModelStreamErrorException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_originalMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ModelStreamErrorException& ModelStreamErrorException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originalStatusCode"))
  {
    m_originalStatusCode = jsonValue.GetInteger("originalStatusCode");

    m_originalStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originalMessage"))
  {
    m_originalMessage = jsonValue.GetString("originalMessage");

    m_originalMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelStreamErrorException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_originalStatusCodeHasBeenSet)
  {
   payload.WithInteger("originalStatusCode", m_originalStatusCode);

  }

  if(m_originalMessageHasBeenSet)
  {
   payload.WithString("originalMessage", m_originalMessage);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
