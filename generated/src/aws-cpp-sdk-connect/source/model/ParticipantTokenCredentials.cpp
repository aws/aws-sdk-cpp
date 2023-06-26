/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantTokenCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ParticipantTokenCredentials::ParticipantTokenCredentials() : 
    m_participantTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
}

ParticipantTokenCredentials::ParticipantTokenCredentials(JsonView jsonValue) : 
    m_participantTokenHasBeenSet(false),
    m_expiryHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipantTokenCredentials& ParticipantTokenCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantToken"))
  {
    m_participantToken = jsonValue.GetString("ParticipantToken");

    m_participantTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expiry"))
  {
    m_expiry = jsonValue.GetString("Expiry");

    m_expiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipantTokenCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_participantTokenHasBeenSet)
  {
   payload.WithString("ParticipantToken", m_participantToken);

  }

  if(m_expiryHasBeenSet)
  {
   payload.WithString("Expiry", m_expiry);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
