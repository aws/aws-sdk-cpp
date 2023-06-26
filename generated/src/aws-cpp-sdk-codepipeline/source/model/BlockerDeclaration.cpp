/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/BlockerDeclaration.h>
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

BlockerDeclaration::BlockerDeclaration() : 
    m_nameHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

BlockerDeclaration::BlockerDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BlockerDeclaration& BlockerDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = BlockerTypeMapper::GetBlockerTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockerDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", BlockerTypeMapper::GetNameForBlockerType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
