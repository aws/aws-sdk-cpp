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

#include <aws/eks/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_resourcesHasBeenSet(false),
    m_providerHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(JsonView jsonValue) : 
    m_resourcesHasBeenSet(false),
    m_providerHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resources"))
  {
    Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetObject("provider");

    m_providerHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_providerHasBeenSet)
  {
   payload.WithObject("provider", m_provider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
