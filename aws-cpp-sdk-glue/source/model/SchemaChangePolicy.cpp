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

#include <aws/glue/model/SchemaChangePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SchemaChangePolicy::SchemaChangePolicy() : 
    m_updateBehavior(UpdateBehavior::NOT_SET),
    m_updateBehaviorHasBeenSet(false),
    m_deleteBehavior(DeleteBehavior::NOT_SET),
    m_deleteBehaviorHasBeenSet(false)
{
}

SchemaChangePolicy::SchemaChangePolicy(const JsonValue& jsonValue) : 
    m_updateBehavior(UpdateBehavior::NOT_SET),
    m_updateBehaviorHasBeenSet(false),
    m_deleteBehavior(DeleteBehavior::NOT_SET),
    m_deleteBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaChangePolicy& SchemaChangePolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UpdateBehavior"))
  {
    m_updateBehavior = UpdateBehaviorMapper::GetUpdateBehaviorForName(jsonValue.GetString("UpdateBehavior"));

    m_updateBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteBehavior"))
  {
    m_deleteBehavior = DeleteBehaviorMapper::GetDeleteBehaviorForName(jsonValue.GetString("DeleteBehavior"));

    m_deleteBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaChangePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_updateBehaviorHasBeenSet)
  {
   payload.WithString("UpdateBehavior", UpdateBehaviorMapper::GetNameForUpdateBehavior(m_updateBehavior));
  }

  if(m_deleteBehaviorHasBeenSet)
  {
   payload.WithString("DeleteBehavior", DeleteBehaviorMapper::GetNameForDeleteBehavior(m_deleteBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
