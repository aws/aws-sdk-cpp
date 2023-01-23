/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ContainerDistributionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ContainerDistributionConfiguration::ContainerDistributionConfiguration() : 
    m_descriptionHasBeenSet(false),
    m_containerTagsHasBeenSet(false),
    m_targetRepositoryHasBeenSet(false)
{
}

ContainerDistributionConfiguration::ContainerDistributionConfiguration(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_containerTagsHasBeenSet(false),
    m_targetRepositoryHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDistributionConfiguration& ContainerDistributionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerTags"))
  {
    Aws::Utils::Array<JsonView> containerTagsJsonList = jsonValue.GetArray("containerTags");
    for(unsigned containerTagsIndex = 0; containerTagsIndex < containerTagsJsonList.GetLength(); ++containerTagsIndex)
    {
      m_containerTags.push_back(containerTagsJsonList[containerTagsIndex].AsString());
    }
    m_containerTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRepository"))
  {
    m_targetRepository = jsonValue.GetObject("targetRepository");

    m_targetRepositoryHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDistributionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_containerTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerTagsJsonList(m_containerTags.size());
   for(unsigned containerTagsIndex = 0; containerTagsIndex < containerTagsJsonList.GetLength(); ++containerTagsIndex)
   {
     containerTagsJsonList[containerTagsIndex].AsString(m_containerTags[containerTagsIndex]);
   }
   payload.WithArray("containerTags", std::move(containerTagsJsonList));

  }

  if(m_targetRepositoryHasBeenSet)
  {
   payload.WithObject("targetRepository", m_targetRepository.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
