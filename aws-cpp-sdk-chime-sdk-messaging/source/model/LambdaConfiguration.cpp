/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/LambdaConfiguration.h>
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

LambdaConfiguration::LambdaConfiguration() : 
    m_resourceArnHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
}

LambdaConfiguration::LambdaConfiguration(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaConfiguration& LambdaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationType"))
  {
    m_invocationType = InvocationTypeMapper::GetInvocationTypeForName(jsonValue.GetString("InvocationType"));

    m_invocationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_invocationTypeHasBeenSet)
  {
   payload.WithString("InvocationType", InvocationTypeMapper::GetNameForInvocationType(m_invocationType));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
