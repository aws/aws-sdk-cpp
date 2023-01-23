/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SchemaChangePolicy::SchemaChangePolicy(JsonView jsonValue) : 
    m_updateBehavior(UpdateBehavior::NOT_SET),
    m_updateBehaviorHasBeenSet(false),
    m_deleteBehavior(DeleteBehavior::NOT_SET),
    m_deleteBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaChangePolicy& SchemaChangePolicy::operator =(JsonView jsonValue)
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
