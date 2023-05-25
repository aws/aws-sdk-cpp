/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/LambdaAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

LambdaAction::LambdaAction() : 
    m_functionArnHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

LambdaAction::LambdaAction(JsonView jsonValue) : 
    m_functionArnHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaAction& LambdaAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functionArn"))
  {
    m_functionArn = jsonValue.GetString("functionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaAction::Jsonize() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("functionArn", m_functionArn);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("payload", m_payload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
