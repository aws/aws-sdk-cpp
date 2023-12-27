/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ModelErrorException.h>
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

ModelErrorException::ModelErrorException() : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

ModelErrorException::ModelErrorException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ModelErrorException& ModelErrorException::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelErrorException::Jsonize() const
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

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
