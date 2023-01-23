/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchReadOperationResponse::BatchReadOperationResponse(JsonView jsonValue) : 
    m_successfulResponseHasBeenSet(false),
    m_exceptionResponseHasBeenSet(false)
{
  *this = jsonValue;
}

BatchReadOperationResponse& BatchReadOperationResponse::operator =(JsonView jsonValue)
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
