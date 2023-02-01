/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSNfsExport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSNfsExport::OpenZFSNfsExport() : 
    m_clientConfigurationsHasBeenSet(false)
{
}

OpenZFSNfsExport::OpenZFSNfsExport(JsonView jsonValue) : 
    m_clientConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

OpenZFSNfsExport& OpenZFSNfsExport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientConfigurations"))
  {
    Aws::Utils::Array<JsonView> clientConfigurationsJsonList = jsonValue.GetArray("ClientConfigurations");
    for(unsigned clientConfigurationsIndex = 0; clientConfigurationsIndex < clientConfigurationsJsonList.GetLength(); ++clientConfigurationsIndex)
    {
      m_clientConfigurations.push_back(clientConfigurationsJsonList[clientConfigurationsIndex].AsObject());
    }
    m_clientConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenZFSNfsExport::Jsonize() const
{
  JsonValue payload;

  if(m_clientConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientConfigurationsJsonList(m_clientConfigurations.size());
   for(unsigned clientConfigurationsIndex = 0; clientConfigurationsIndex < clientConfigurationsJsonList.GetLength(); ++clientConfigurationsIndex)
   {
     clientConfigurationsJsonList[clientConfigurationsIndex].AsObject(m_clientConfigurations[clientConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ClientConfigurations", std::move(clientConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
