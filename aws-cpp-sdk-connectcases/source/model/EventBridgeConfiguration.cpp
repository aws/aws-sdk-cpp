/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/EventBridgeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

EventBridgeConfiguration::EventBridgeConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includedDataHasBeenSet(false)
{
}

EventBridgeConfiguration::EventBridgeConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includedDataHasBeenSet(false)
{
  *this = jsonValue;
}

EventBridgeConfiguration& EventBridgeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includedData"))
  {
    m_includedData = jsonValue.GetObject("includedData");

    m_includedDataHasBeenSet = true;
  }

  return *this;
}

JsonValue EventBridgeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_includedDataHasBeenSet)
  {
   payload.WithObject("includedData", m_includedData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
