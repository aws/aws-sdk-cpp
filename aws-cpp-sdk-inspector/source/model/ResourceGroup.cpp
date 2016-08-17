/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/ResourceGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

ResourceGroup::ResourceGroup() : 
    m_resourceGroupArnHasBeenSet(false),
    m_resourceGroupTagsHasBeenSet(false)
{
}

ResourceGroup::ResourceGroup(const JsonValue& jsonValue) : 
    m_resourceGroupArnHasBeenSet(false),
    m_resourceGroupTagsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceGroup& ResourceGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("resourceGroupArn"))
  {
    m_resourceGroupArn = jsonValue.GetString("resourceGroupArn");

    m_resourceGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceGroupTags"))
  {
    m_resourceGroupTags = jsonValue.GetString("resourceGroupTags");

    m_resourceGroupTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceGroup::Jsonize() const
{
  JsonValue payload;

  if(m_resourceGroupArnHasBeenSet)
  {
   payload.WithString("resourceGroupArn", m_resourceGroupArn);

  }

  if(m_resourceGroupTagsHasBeenSet)
  {
   payload.WithString("resourceGroupTags", m_resourceGroupTags);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws