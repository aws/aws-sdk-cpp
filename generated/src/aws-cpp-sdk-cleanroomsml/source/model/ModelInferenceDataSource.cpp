/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ModelInferenceDataSource.h>
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

ModelInferenceDataSource::ModelInferenceDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelInferenceDataSource& ModelInferenceDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mlInputChannelArn"))
  {
    m_mlInputChannelArn = jsonValue.GetString("mlInputChannelArn");
    m_mlInputChannelArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInferenceDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_mlInputChannelArnHasBeenSet)
  {
   payload.WithString("mlInputChannelArn", m_mlInputChannelArn);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
