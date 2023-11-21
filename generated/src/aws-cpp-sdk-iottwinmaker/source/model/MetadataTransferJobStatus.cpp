/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/MetadataTransferJobStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

MetadataTransferJobStatus::MetadataTransferJobStatus() : 
    m_state(MetadataTransferJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_queuedPosition(0),
    m_queuedPositionHasBeenSet(false)
{
}

MetadataTransferJobStatus::MetadataTransferJobStatus(JsonView jsonValue) : 
    m_state(MetadataTransferJobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_queuedPosition(0),
    m_queuedPositionHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataTransferJobStatus& MetadataTransferJobStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = MetadataTransferJobStateMapper::GetMetadataTransferJobStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queuedPosition"))
  {
    m_queuedPosition = jsonValue.GetInteger("queuedPosition");

    m_queuedPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataTransferJobStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", MetadataTransferJobStateMapper::GetNameForMetadataTransferJobState(m_state));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_queuedPositionHasBeenSet)
  {
   payload.WithInteger("queuedPosition", m_queuedPosition);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
