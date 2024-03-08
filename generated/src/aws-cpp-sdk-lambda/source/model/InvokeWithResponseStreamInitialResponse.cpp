/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/InvokeWithResponseStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

InvokeWithResponseStreamInitialResponse::InvokeWithResponseStreamInitialResponse() : 
    m_responseStreamContentTypeHasBeenSet(false),
    m_executedVersionHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
}

InvokeWithResponseStreamInitialResponse::InvokeWithResponseStreamInitialResponse(JsonView jsonValue) : 
    m_responseStreamContentTypeHasBeenSet(false),
    m_executedVersionHasBeenSet(false),
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

InvokeWithResponseStreamInitialResponse& InvokeWithResponseStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue InvokeWithResponseStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
