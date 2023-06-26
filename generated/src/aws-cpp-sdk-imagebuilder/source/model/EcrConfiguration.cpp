/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/EcrConfiguration.h>
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

EcrConfiguration::EcrConfiguration() : 
    m_repositoryNameHasBeenSet(false),
    m_containerTagsHasBeenSet(false)
{
}

EcrConfiguration::EcrConfiguration(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_containerTagsHasBeenSet(false)
{
  *this = jsonValue;
}

EcrConfiguration& EcrConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
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

  return *this;
}

JsonValue EcrConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

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

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
