/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/InitializationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

InitializationConfiguration::InitializationConfiguration() : 
    m_disabledOnInitialization(false),
    m_disabledOnInitializationHasBeenSet(false)
{
}

InitializationConfiguration::InitializationConfiguration(JsonView jsonValue) : 
    m_disabledOnInitialization(false),
    m_disabledOnInitializationHasBeenSet(false)
{
  *this = jsonValue;
}

InitializationConfiguration& InitializationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("disabledOnInitialization"))
  {
    m_disabledOnInitialization = jsonValue.GetBool("disabledOnInitialization");

    m_disabledOnInitializationHasBeenSet = true;
  }

  return *this;
}

JsonValue InitializationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_disabledOnInitializationHasBeenSet)
  {
   payload.WithBool("disabledOnInitialization", m_disabledOnInitialization);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
