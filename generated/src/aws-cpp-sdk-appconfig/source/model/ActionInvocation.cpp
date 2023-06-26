/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ActionInvocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

ActionInvocation::ActionInvocation() : 
    m_extensionIdentifierHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_invocationIdHasBeenSet(false)
{
}

ActionInvocation::ActionInvocation(JsonView jsonValue) : 
    m_extensionIdentifierHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_invocationIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionInvocation& ActionInvocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExtensionIdentifier"))
  {
    m_extensionIdentifier = jsonValue.GetString("ExtensionIdentifier");

    m_extensionIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationId"))
  {
    m_invocationId = jsonValue.GetString("InvocationId");

    m_invocationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionInvocation::Jsonize() const
{
  JsonValue payload;

  if(m_extensionIdentifierHasBeenSet)
  {
   payload.WithString("ExtensionIdentifier", m_extensionIdentifier);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_invocationIdHasBeenSet)
  {
   payload.WithString("InvocationId", m_invocationId);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
