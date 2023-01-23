/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ConnectorDefinitionVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

ConnectorDefinitionVersion::ConnectorDefinitionVersion() : 
    m_connectorsHasBeenSet(false)
{
}

ConnectorDefinitionVersion::ConnectorDefinitionVersion(JsonView jsonValue) : 
    m_connectorsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorDefinitionVersion& ConnectorDefinitionVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Connectors"))
  {
    Aws::Utils::Array<JsonView> connectorsJsonList = jsonValue.GetArray("Connectors");
    for(unsigned connectorsIndex = 0; connectorsIndex < connectorsJsonList.GetLength(); ++connectorsIndex)
    {
      m_connectors.push_back(connectorsJsonList[connectorsIndex].AsObject());
    }
    m_connectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorDefinitionVersion::Jsonize() const
{
  JsonValue payload;

  if(m_connectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorsJsonList(m_connectors.size());
   for(unsigned connectorsIndex = 0; connectorsIndex < connectorsJsonList.GetLength(); ++connectorsIndex)
   {
     connectorsJsonList[connectorsIndex].AsObject(m_connectors[connectorsIndex].Jsonize());
   }
   payload.WithArray("Connectors", std::move(connectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
