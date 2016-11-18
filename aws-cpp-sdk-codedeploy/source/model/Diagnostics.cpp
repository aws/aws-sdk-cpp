/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Diagnostics::Diagnostics(const JsonValue& jsonValue) : 
    m_errorCode(LifecycleErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_logTailHasBeenSet(false)
{
  *this = jsonValue;
}

Diagnostics& Diagnostics::operator =(const JsonValue& jsonValue)
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