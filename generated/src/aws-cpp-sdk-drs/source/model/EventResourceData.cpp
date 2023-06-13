/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/EventResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

EventResourceData::EventResourceData() : 
    m_sourceNetworkDataHasBeenSet(false)
{
}

EventResourceData::EventResourceData(JsonView jsonValue) : 
    m_sourceNetworkDataHasBeenSet(false)
{
  *this = jsonValue;
}

EventResourceData& EventResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceNetworkData"))
  {
    m_sourceNetworkData = jsonValue.GetObject("sourceNetworkData");

    m_sourceNetworkDataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNetworkDataHasBeenSet)
  {
   payload.WithObject("sourceNetworkData", m_sourceNetworkData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
