/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/sagemaker-runtime/model/ModelError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

ModelError::ModelError() : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_originalMessageHasBeenSet(false),
    m_logStreamArnHasBeenSet(false)
{
}

ModelError::ModelError(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_originalStatusCode(0),
    m_originalStatusCodeHasBeenSet(false),
    m_originalMessageHasBeenSet(false),
    m_logStreamArnHasBeenSet(false)
{
  *this = jsonValue;
}

ModelError& ModelError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalStatusCode"))
  {
    m_originalStatusCode = jsonValue.GetInteger("OriginalStatusCode");

    m_originalStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalMessage"))
  {
    m_originalMessage = jsonValue.GetString("OriginalMessage");

    m_originalMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStreamArn"))
  {
    m_logStreamArn = jsonValue.GetString("LogStreamArn");

    m_logStreamArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelError::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_originalStatusCodeHasBeenSet)
  {
   payload.WithInteger("OriginalStatusCode", m_originalStatusCode);

  }

  if(m_originalMessageHasBeenSet)
  {
   payload.WithString("OriginalMessage", m_originalMessage);

  }

  if(m_logStreamArnHasBeenSet)
  {
   payload.WithString("LogStreamArn", m_logStreamArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
