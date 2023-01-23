/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ProcessorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ProcessorConfiguration::ProcessorConfiguration() : 
    m_lambdaHasBeenSet(false)
{
}

ProcessorConfiguration::ProcessorConfiguration(JsonView jsonValue) : 
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessorConfiguration& ProcessorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lambda"))
  {
    m_lambda = jsonValue.GetObject("Lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("Lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
