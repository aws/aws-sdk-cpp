/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/InferenceContainerExecutionParameters.h>
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

InferenceContainerExecutionParameters::InferenceContainerExecutionParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceContainerExecutionParameters& InferenceContainerExecutionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxPayloadInMB"))
  {
    m_maxPayloadInMB = jsonValue.GetInteger("maxPayloadInMB");
    m_maxPayloadInMBHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceContainerExecutionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_maxPayloadInMBHasBeenSet)
  {
   payload.WithInteger("maxPayloadInMB", m_maxPayloadInMB);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
