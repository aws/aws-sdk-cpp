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

#include <aws/mq/model/NotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

NotFoundException::NotFoundException() : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

NotFoundException::NotFoundException(JsonView jsonValue) : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

NotFoundException& NotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorAttribute"))
  {
    m_errorAttribute = jsonValue.GetString("errorAttribute");

    m_errorAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue NotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_errorAttributeHasBeenSet)
  {
   payload.WithString("errorAttribute", m_errorAttribute);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
