/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ShareTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

ShareTarget::ShareTarget() : 
    m_idHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ShareTarget::ShareTarget(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ShareTarget& ShareTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareTarget::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TargetTypeMapper::GetNameForTargetType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
