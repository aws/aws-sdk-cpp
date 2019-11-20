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

#include <aws/migrationhub-config/model/Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

Target::Target() : 
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TargetTypeMapper::GetNameForTargetType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
