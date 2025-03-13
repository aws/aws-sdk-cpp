/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/IngestConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

IngestConfigurationSummary::IngestConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

IngestConfigurationSummary& IngestConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ingestProtocol"))
  {
    m_ingestProtocol = IngestProtocolMapper::GetIngestProtocolForName(jsonValue.GetString("ingestProtocol"));
    m_ingestProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stageArn"))
  {
    m_stageArn = jsonValue.GetString("stageArn");
    m_stageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("participantId"))
  {
    m_participantId = jsonValue.GetString("participantId");
    m_participantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = IngestConfigurationStateMapper::GetIngestConfigurationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_ingestProtocolHasBeenSet)
  {
   payload.WithString("ingestProtocol", IngestProtocolMapper::GetNameForIngestProtocol(m_ingestProtocol));
  }

  if(m_stageArnHasBeenSet)
  {
   payload.WithString("stageArn", m_stageArn);

  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", IngestConfigurationStateMapper::GetNameForIngestConfigurationState(m_state));
  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
