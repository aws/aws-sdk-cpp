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

#include <aws/imagebuilder/model/AmiDistributionConfiguration.h>
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

AmiDistributionConfiguration::AmiDistributionConfiguration() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_amiTagsHasBeenSet(false),
    m_launchPermissionHasBeenSet(false)
{
}

AmiDistributionConfiguration::AmiDistributionConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_amiTagsHasBeenSet(false),
    m_launchPermissionHasBeenSet(false)
{
  *this = jsonValue;
}

AmiDistributionConfiguration& AmiDistributionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiTags"))
  {
    Aws::Map<Aws::String, JsonView> amiTagsJsonMap = jsonValue.GetObject("amiTags").GetAllObjects();
    for(auto& amiTagsItem : amiTagsJsonMap)
    {
      m_amiTags[amiTagsItem.first] = amiTagsItem.second.AsString();
    }
    m_amiTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchPermission"))
  {
    m_launchPermission = jsonValue.GetObject("launchPermission");

    m_launchPermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue AmiDistributionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_amiTagsHasBeenSet)
  {
   JsonValue amiTagsJsonMap;
   for(auto& amiTagsItem : m_amiTags)
   {
     amiTagsJsonMap.WithString(amiTagsItem.first, amiTagsItem.second);
   }
   payload.WithObject("amiTags", std::move(amiTagsJsonMap));

  }

  if(m_launchPermissionHasBeenSet)
  {
   payload.WithObject("launchPermission", m_launchPermission.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
