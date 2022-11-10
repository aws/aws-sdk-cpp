/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/EventBridgeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Scheduler
{
namespace Model
{

EventBridgeParameters::EventBridgeParameters() : 
    m_detailTypeHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

EventBridgeParameters::EventBridgeParameters(JsonView jsonValue) : 
    m_detailTypeHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

EventBridgeParameters& EventBridgeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailType"))
  {
    m_detailType = jsonValue.GetString("DetailType");

    m_detailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EventBridgeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", m_detailType);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace Scheduler
} // namespace Aws
