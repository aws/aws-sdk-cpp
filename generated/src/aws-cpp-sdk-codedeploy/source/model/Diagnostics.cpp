/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/Diagnostics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

Diagnostics::Diagnostics() : 
    m_errorCode(LifecycleErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logTailHasBeenSet(false)
{
}

Diagnostics::Diagnostics(JsonView jsonValue) : 
    m_errorCode(LifecycleErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logTailHasBeenSet(false)
{
  *this = jsonValue;
}

Diagnostics& Diagnostics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = LifecycleErrorCodeMapper::GetLifecycleErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptName"))
  {
    m_scriptName = jsonValue.GetString("scriptName");

    m_scriptNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logTail"))
  {
    m_logTail = jsonValue.GetString("logTail");

    m_logTailHasBeenSet = true;
  }

  return *this;
}

JsonValue Diagnostics::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", LifecycleErrorCodeMapper::GetNameForLifecycleErrorCode(m_errorCode));
  }

  if(m_scriptNameHasBeenSet)
  {
   payload.WithString("scriptName", m_scriptName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_logTailHasBeenSet)
  {
   payload.WithString("logTail", m_logTail);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
