/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/CallDetails.h>
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

CallDetails::CallDetails() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_isCaller(false),
    m_isCallerHasBeenSet(false)
{
}

CallDetails::CallDetails(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_isCaller(false),
    m_isCallerHasBeenSet(false)
{
  *this = jsonValue;
}

CallDetails& CallDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsCaller"))
  {
    m_isCaller = jsonValue.GetBool("IsCaller");

    m_isCallerHasBeenSet = true;
  }

  return *this;
}

JsonValue CallDetails::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_isCallerHasBeenSet)
  {
   payload.WithBool("IsCaller", m_isCaller);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
