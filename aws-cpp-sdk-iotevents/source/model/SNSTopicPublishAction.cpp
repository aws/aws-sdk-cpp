/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/SNSTopicPublishAction.h>
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

SNSTopicPublishAction::SNSTopicPublishAction() : 
    m_targetArnHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

SNSTopicPublishAction::SNSTopicPublishAction(JsonView jsonValue) : 
    m_targetArnHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

SNSTopicPublishAction& SNSTopicPublishAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue SNSTopicPublishAction::Jsonize() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

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
