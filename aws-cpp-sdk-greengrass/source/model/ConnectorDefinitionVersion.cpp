/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> connectorsJsonList = jsonValue.GetArray("Connectors");
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
   Array<JsonValue> connectorsJsonList(m_connectors.size());
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
