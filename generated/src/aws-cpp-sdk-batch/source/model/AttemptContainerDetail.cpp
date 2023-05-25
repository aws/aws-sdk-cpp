/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/AttemptContainerDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

AttemptContainerDetail::AttemptContainerDetail() : 
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
}

AttemptContainerDetail::AttemptContainerDetail(JsonView jsonValue) : 
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false)
{
  *this = jsonValue;
}

AttemptContainerDetail& AttemptContainerDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttemptContainerDetail::Jsonize() const
{
  JsonValue payload;

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("networkInterfaces", std::move(networkInterfacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
