/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InvocationConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

InvocationConfigurationInput::InvocationConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

InvocationConfigurationInput& InvocationConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicArn"))
  {
    m_topicArn = jsonValue.GetString("topicArn");
    m_topicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("payloadDeliveryBucketName"))
  {
    m_payloadDeliveryBucketName = jsonValue.GetString("payloadDeliveryBucketName");
    m_payloadDeliveryBucketNameHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("topicArn", m_topicArn);

  }

  if(m_payloadDeliveryBucketNameHasBeenSet)
  {
   payload.WithString("payloadDeliveryBucketName", m_payloadDeliveryBucketName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
