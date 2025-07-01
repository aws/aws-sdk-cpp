/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/IncrementalTrainingDataChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

IncrementalTrainingDataChannel::IncrementalTrainingDataChannel(JsonView jsonValue)
{
  *this = jsonValue;
}

IncrementalTrainingDataChannel& IncrementalTrainingDataChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trainedModelArn"))
  {
    m_trainedModelArn = jsonValue.GetString("trainedModelArn");
    m_trainedModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionIdentifier"))
  {
    m_versionIdentifier = jsonValue.GetString("versionIdentifier");
    m_versionIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue IncrementalTrainingDataChannel::Jsonize() const
{
  JsonValue payload;

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("trainedModelArn", m_trainedModelArn);

  }

  if(m_versionIdentifierHasBeenSet)
  {
   payload.WithString("versionIdentifier", m_versionIdentifier);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
