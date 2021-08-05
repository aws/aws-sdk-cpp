/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/WaitAndContinueSpecification.h>
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

WaitAndContinueSpecification::WaitAndContinueSpecification() : 
    m_waitingResponseHasBeenSet(false),
    m_continueResponseHasBeenSet(false),
    m_stillWaitingResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
}

WaitAndContinueSpecification::WaitAndContinueSpecification(JsonView jsonValue) : 
    m_waitingResponseHasBeenSet(false),
    m_continueResponseHasBeenSet(false),
    m_stillWaitingResponseHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false)
{
  *this = jsonValue;
}

WaitAndContinueSpecification& WaitAndContinueSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("waitingResponse"))
  {
    m_waitingResponse = jsonValue.GetObject("waitingResponse");

    m_waitingResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continueResponse"))
  {
    m_continueResponse = jsonValue.GetObject("continueResponse");

    m_continueResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stillWaitingResponse"))
  {
    m_stillWaitingResponse = jsonValue.GetObject("stillWaitingResponse");

    m_stillWaitingResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  return *this;
}

JsonValue WaitAndContinueSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_waitingResponseHasBeenSet)
  {
   payload.WithObject("waitingResponse", m_waitingResponse.Jsonize());

  }

  if(m_continueResponseHasBeenSet)
  {
   payload.WithObject("continueResponse", m_continueResponse.Jsonize());

  }

  if(m_stillWaitingResponseHasBeenSet)
  {
   payload.WithObject("stillWaitingResponse", m_stillWaitingResponse.Jsonize());

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
