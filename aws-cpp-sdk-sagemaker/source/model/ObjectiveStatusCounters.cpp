/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ObjectiveStatusCounters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ObjectiveStatusCounters::ObjectiveStatusCounters() : 
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false)
{
}

ObjectiveStatusCounters::ObjectiveStatusCounters(JsonView jsonValue) : 
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectiveStatusCounters& ObjectiveStatusCounters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Succeeded"))
  {
    m_succeeded = jsonValue.GetInteger("Succeeded");

    m_succeededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pending"))
  {
    m_pending = jsonValue.GetInteger("Pending");

    m_pendingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetInteger("Failed");

    m_failedHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectiveStatusCounters::Jsonize() const
{
  JsonValue payload;

  if(m_succeededHasBeenSet)
  {
   payload.WithInteger("Succeeded", m_succeeded);

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithInteger("Pending", m_pending);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("Failed", m_failed);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
