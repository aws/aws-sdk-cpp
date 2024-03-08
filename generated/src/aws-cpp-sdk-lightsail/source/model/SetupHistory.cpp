/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetupHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

SetupHistory::SetupHistory() : 
    m_operationIdHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_executionDetailsHasBeenSet(false),
    m_status(SetupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SetupHistory::SetupHistory(JsonView jsonValue) : 
    m_operationIdHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_executionDetailsHasBeenSet(false),
    m_status(SetupStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SetupHistory& SetupHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operationId"))
  {
    m_operationId = jsonValue.GetString("operationId");

    m_operationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("request"))
  {
    m_request = jsonValue.GetObject("request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionDetails"))
  {
    Aws::Utils::Array<JsonView> executionDetailsJsonList = jsonValue.GetArray("executionDetails");
    for(unsigned executionDetailsIndex = 0; executionDetailsIndex < executionDetailsJsonList.GetLength(); ++executionDetailsIndex)
    {
      m_executionDetails.push_back(executionDetailsJsonList[executionDetailsIndex].AsObject());
    }
    m_executionDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SetupStatusMapper::GetSetupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SetupHistory::Jsonize() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("operationId", m_operationId);

  }

  if(m_requestHasBeenSet)
  {
   payload.WithObject("request", m_request.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_executionDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> executionDetailsJsonList(m_executionDetails.size());
   for(unsigned executionDetailsIndex = 0; executionDetailsIndex < executionDetailsJsonList.GetLength(); ++executionDetailsIndex)
   {
     executionDetailsJsonList[executionDetailsIndex].AsObject(m_executionDetails[executionDetailsIndex].Jsonize());
   }
   payload.WithArray("executionDetails", std::move(executionDetailsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SetupStatusMapper::GetNameForSetupStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
