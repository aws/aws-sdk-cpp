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
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ActionTypeId::ActionTypeId() : 
    m_category(ActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_owner(ActionOwner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

ActionTypeId::ActionTypeId(const JsonValue& jsonValue) : 
    m_category(ActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_owner(ActionOwner::NOT_SET),
    m_ownerHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ActionTypeId& ActionTypeId::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("category"))
  {
    m_category = ActionCategoryMapper::GetActionCategoryForName(jsonValue.GetString("category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = ActionOwnerMapper::GetActionOwnerForName(jsonValue.GetString("owner"));

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionTypeId::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", ActionCategoryMapper::GetNameForActionCategory(m_category));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", ActionOwnerMapper::GetNameForActionOwner(m_owner));
  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws