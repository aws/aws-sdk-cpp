/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/VpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

VpcConfiguration::VpcConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcConfiguration& VpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceConfigurationArns"))
  {
    Aws::Utils::Array<JsonView> resourceConfigurationArnsJsonList = jsonValue.GetArray("resourceConfigurationArns");
    for(unsigned resourceConfigurationArnsIndex = 0; resourceConfigurationArnsIndex < resourceConfigurationArnsJsonList.GetLength(); ++resourceConfigurationArnsIndex)
    {
      m_resourceConfigurationArns.push_back(resourceConfigurationArnsJsonList[resourceConfigurationArnsIndex].AsString());
    }
    m_resourceConfigurationArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resourceConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceConfigurationArnsJsonList(m_resourceConfigurationArns.size());
   for(unsigned resourceConfigurationArnsIndex = 0; resourceConfigurationArnsIndex < resourceConfigurationArnsJsonList.GetLength(); ++resourceConfigurationArnsIndex)
   {
     resourceConfigurationArnsJsonList[resourceConfigurationArnsIndex].AsString(m_resourceConfigurationArns[resourceConfigurationArnsIndex]);
   }
   payload.WithArray("resourceConfigurationArns", std::move(resourceConfigurationArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
