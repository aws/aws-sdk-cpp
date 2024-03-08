/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/IotTwinMakerDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

IotTwinMakerDestinationConfiguration::IotTwinMakerDestinationConfiguration() : 
    m_workspaceHasBeenSet(false)
{
}

IotTwinMakerDestinationConfiguration::IotTwinMakerDestinationConfiguration(JsonView jsonValue) : 
    m_workspaceHasBeenSet(false)
{
  *this = jsonValue;
}

IotTwinMakerDestinationConfiguration& IotTwinMakerDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workspace"))
  {
    m_workspace = jsonValue.GetString("workspace");

    m_workspaceHasBeenSet = true;
  }

  return *this;
}

JsonValue IotTwinMakerDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceHasBeenSet)
  {
   payload.WithString("workspace", m_workspace);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
