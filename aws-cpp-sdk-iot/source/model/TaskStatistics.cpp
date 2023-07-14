/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TaskStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TaskStatistics::TaskStatistics() : 
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false),
    m_inProgressChecks(0),
    m_inProgressChecksHasBeenSet(false),
    m_waitingForDataCollectionChecks(0),
    m_waitingForDataCollectionChecksHasBeenSet(false),
    m_compliantChecks(0),
    m_compliantChecksHasBeenSet(false),
    m_nonCompliantChecks(0),
    m_nonCompliantChecksHasBeenSet(false),
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_canceledChecks(0),
    m_canceledChecksHasBeenSet(false)
{
}

TaskStatistics::TaskStatistics(JsonView jsonValue) : 
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false),
    m_inProgressChecks(0),
    m_inProgressChecksHasBeenSet(false),
    m_waitingForDataCollectionChecks(0),
    m_waitingForDataCollectionChecksHasBeenSet(false),
    m_compliantChecks(0),
    m_compliantChecksHasBeenSet(false),
    m_nonCompliantChecks(0),
    m_nonCompliantChecksHasBeenSet(false),
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_canceledChecks(0),
    m_canceledChecksHasBeenSet(false)
{
  *this = jsonValue;
}

TaskStatistics& TaskStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalChecks"))
  {
    m_totalChecks = jsonValue.GetInteger("totalChecks");

    m_totalChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inProgressChecks"))
  {
    m_inProgressChecks = jsonValue.GetInteger("inProgressChecks");

    m_inProgressChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waitingForDataCollectionChecks"))
  {
    m_waitingForDataCollectionChecks = jsonValue.GetInteger("waitingForDataCollectionChecks");

    m_waitingForDataCollectionChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compliantChecks"))
  {
    m_compliantChecks = jsonValue.GetInteger("compliantChecks");

    m_compliantChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonCompliantChecks"))
  {
    m_nonCompliantChecks = jsonValue.GetInteger("nonCompliantChecks");

    m_nonCompliantChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedChecks"))
  {
    m_failedChecks = jsonValue.GetInteger("failedChecks");

    m_failedChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canceledChecks"))
  {
    m_canceledChecks = jsonValue.GetInteger("canceledChecks");

    m_canceledChecksHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_totalChecksHasBeenSet)
  {
   payload.WithInteger("totalChecks", m_totalChecks);

  }

  if(m_inProgressChecksHasBeenSet)
  {
   payload.WithInteger("inProgressChecks", m_inProgressChecks);

  }

  if(m_waitingForDataCollectionChecksHasBeenSet)
  {
   payload.WithInteger("waitingForDataCollectionChecks", m_waitingForDataCollectionChecks);

  }

  if(m_compliantChecksHasBeenSet)
  {
   payload.WithInteger("compliantChecks", m_compliantChecks);

  }

  if(m_nonCompliantChecksHasBeenSet)
  {
   payload.WithInteger("nonCompliantChecks", m_nonCompliantChecks);

  }

  if(m_failedChecksHasBeenSet)
  {
   payload.WithInteger("failedChecks", m_failedChecks);

  }

  if(m_canceledChecksHasBeenSet)
  {
   payload.WithInteger("canceledChecks", m_canceledChecks);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
