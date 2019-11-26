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

#include <aws/dynamodb/model/FailureException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

FailureException::FailureException() : 
    m_exceptionNameHasBeenSet(false),
    m_exceptionDescriptionHasBeenSet(false)
{
}

FailureException::FailureException(JsonView jsonValue) : 
    m_exceptionNameHasBeenSet(false),
    m_exceptionDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

FailureException& FailureException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExceptionName"))
  {
    m_exceptionName = jsonValue.GetString("ExceptionName");

    m_exceptionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExceptionDescription"))
  {
    m_exceptionDescription = jsonValue.GetString("ExceptionDescription");

    m_exceptionDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureException::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionNameHasBeenSet)
  {
   payload.WithString("ExceptionName", m_exceptionName);

  }

  if(m_exceptionDescriptionHasBeenSet)
  {
   payload.WithString("ExceptionDescription", m_exceptionDescription);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
