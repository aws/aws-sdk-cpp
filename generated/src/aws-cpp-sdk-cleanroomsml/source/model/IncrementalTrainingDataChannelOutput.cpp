/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/IncrementalTrainingDataChannelOutput.h>
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

IncrementalTrainingDataChannelOutput::IncrementalTrainingDataChannelOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

IncrementalTrainingDataChannelOutput& IncrementalTrainingDataChannelOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionIdentifier"))
  {
    m_versionIdentifier = jsonValue.GetString("versionIdentifier");
    m_versionIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");
    m_modelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue IncrementalTrainingDataChannelOutput::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_versionIdentifierHasBeenSet)
  {
   payload.WithString("versionIdentifier", m_versionIdentifier);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
