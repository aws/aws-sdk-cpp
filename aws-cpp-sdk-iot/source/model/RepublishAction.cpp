/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RepublishAction.h>
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

RepublishAction::RepublishAction() : 
    m_roleArnHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false)
{
}

RepublishAction::RepublishAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false)
{
  *this = jsonValue;
}

RepublishAction& RepublishAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qos"))
  {
    m_qos = jsonValue.GetInteger("qos");

    m_qosHasBeenSet = true;
  }

  return *this;
}

JsonValue RepublishAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithString("topic", m_topic);

  }

  if(m_qosHasBeenSet)
  {
   payload.WithInteger("qos", m_qos);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
