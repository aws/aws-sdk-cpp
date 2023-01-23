/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipMediaApplicationEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

SipMediaApplicationEndpoint::SipMediaApplicationEndpoint() : 
    m_lambdaArnHasBeenSet(false)
{
}

SipMediaApplicationEndpoint::SipMediaApplicationEndpoint(JsonView jsonValue) : 
    m_lambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

SipMediaApplicationEndpoint& SipMediaApplicationEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SipMediaApplicationEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
