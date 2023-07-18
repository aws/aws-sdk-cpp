/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ForwardingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ForwardingConfig::ForwardingConfig() : 
    m_state(ForwardingConfigState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ForwardingConfig::ForwardingConfig(JsonView jsonValue) : 
    m_state(ForwardingConfigState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ForwardingConfig& ForwardingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = ForwardingConfigStateMapper::GetForwardingConfigStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ForwardingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ForwardingConfigStateMapper::GetNameForForwardingConfigState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
