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
#include <aws/clouddirectory/model/BatchReadOperationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchReadOperationResponse::BatchReadOperationResponse() : 
    m_successfulResponseHasBeenSet(false),
    m_exceptionResponseHasBeenSet(false)
{
}

BatchReadOperationResponse::BatchReadOperationResponse(const JsonValue& jsonValue) : 
    m_successfulResponseHasBeenSet(false),
    m_exceptionResponseHasBeenSet(false)
{
  *this = jsonValue;
}

BatchReadOperationResponse& BatchReadOperationResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SuccessfulResponse"))
  {
    m_successfulResponse = jsonValue.GetObject("SuccessfulResponse");

    m_successfulResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExceptionResponse"))
  {
    m_exceptionResponse = jsonValue.GetObject("ExceptionResponse");

    m_exceptionResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchReadOperationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_successfulResponseHasBeenSet)
  {
   payload.WithObject("SuccessfulResponse", m_successfulResponse.Jsonize());

  }

  if(m_exceptionResponseHasBeenSet)
  {
   payload.WithObject("ExceptionResponse", m_exceptionResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws