/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AntennaDemodDecodeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

AntennaDemodDecodeDetails::AntennaDemodDecodeDetails() : 
    m_outputNodeHasBeenSet(false)
{
}

AntennaDemodDecodeDetails::AntennaDemodDecodeDetails(JsonView jsonValue) : 
    m_outputNodeHasBeenSet(false)
{
  *this = jsonValue;
}

AntennaDemodDecodeDetails& AntennaDemodDecodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputNode"))
  {
    m_outputNode = jsonValue.GetString("outputNode");

    m_outputNodeHasBeenSet = true;
  }

  return *this;
}

JsonValue AntennaDemodDecodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_outputNodeHasBeenSet)
  {
   payload.WithString("outputNode", m_outputNode);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
