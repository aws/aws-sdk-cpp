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
