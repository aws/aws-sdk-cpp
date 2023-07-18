/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PostFulfillmentStatusSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

PostFulfillmentStatusSpecification::PostFulfillmentStatusSpecification() : 
    m_successResponseHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_timeoutResponseHasBeenSet(false)
{
}

PostFulfillmentStatusSpecification::PostFulfillmentStatusSpecification(JsonView jsonValue) : 
    m_successResponseHasBeenSet(false),
    m_failureResponseHasBeenSet(false),
    m_timeoutResponseHasBeenSet(false)
{
  *this = jsonValue;
}

PostFulfillmentStatusSpecification& PostFulfillmentStatusSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("successResponse"))
  {
    m_successResponse = jsonValue.GetObject("successResponse");

    m_successResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureResponse"))
  {
    m_failureResponse = jsonValue.GetObject("failureResponse");

    m_failureResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutResponse"))
  {
    m_timeoutResponse = jsonValue.GetObject("timeoutResponse");

    m_timeoutResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue PostFulfillmentStatusSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_successResponseHasBeenSet)
  {
   payload.WithObject("successResponse", m_successResponse.Jsonize());

  }

  if(m_failureResponseHasBeenSet)
  {
   payload.WithObject("failureResponse", m_failureResponse.Jsonize());

  }

  if(m_timeoutResponseHasBeenSet)
  {
   payload.WithObject("timeoutResponse", m_timeoutResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
