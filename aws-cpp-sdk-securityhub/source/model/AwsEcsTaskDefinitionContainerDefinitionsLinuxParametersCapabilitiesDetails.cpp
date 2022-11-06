/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails() : 
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails::AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails(JsonView jsonValue) : 
    m_addHasBeenSet(false),
    m_dropHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Add"))
  {
    Aws::Utils::Array<JsonView> addJsonList = jsonValue.GetArray("Add");
    for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
    {
      m_add.push_back(addJsonList[addIndex].AsString());
    }
    m_addHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Drop"))
  {
    Aws::Utils::Array<JsonView> dropJsonList = jsonValue.GetArray("Drop");
    for(unsigned dropIndex = 0; dropIndex < dropJsonList.GetLength(); ++dropIndex)
    {
      m_drop.push_back(dropJsonList[dropIndex].AsString());
    }
    m_dropHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_addHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addJsonList(m_add.size());
   for(unsigned addIndex = 0; addIndex < addJsonList.GetLength(); ++addIndex)
   {
     addJsonList[addIndex].AsString(m_add[addIndex]);
   }
   payload.WithArray("Add", std::move(addJsonList));

  }

  if(m_dropHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dropJsonList(m_drop.size());
   for(unsigned dropIndex = 0; dropIndex < dropJsonList.GetLength(); ++dropIndex)
   {
     dropJsonList[dropIndex].AsString(m_drop[dropIndex]);
   }
   payload.WithArray("Drop", std::move(dropJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
