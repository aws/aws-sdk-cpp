/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncInferenceNotificationConfig.h>
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

AsyncInferenceNotificationConfig::AsyncInferenceNotificationConfig() : 
    m_successTopicHasBeenSet(false),
    m_errorTopicHasBeenSet(false)
{
}

AsyncInferenceNotificationConfig::AsyncInferenceNotificationConfig(JsonView jsonValue) : 
    m_successTopicHasBeenSet(false),
    m_errorTopicHasBeenSet(false)
{
  *this = jsonValue;
}

AsyncInferenceNotificationConfig& AsyncInferenceNotificationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessTopic"))
  {
    m_successTopic = jsonValue.GetString("SuccessTopic");

    m_successTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorTopic"))
  {
    m_errorTopic = jsonValue.GetString("ErrorTopic");

    m_errorTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue AsyncInferenceNotificationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_successTopicHasBeenSet)
  {
   payload.WithString("SuccessTopic", m_successTopic);

  }

  if(m_errorTopicHasBeenSet)
  {
   payload.WithString("ErrorTopic", m_errorTopic);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
