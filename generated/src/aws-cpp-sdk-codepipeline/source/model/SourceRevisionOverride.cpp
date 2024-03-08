/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/SourceRevisionOverride.h>
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

SourceRevisionOverride::SourceRevisionOverride() : 
    m_actionNameHasBeenSet(false),
    m_revisionType(SourceRevisionType::NOT_SET),
    m_revisionTypeHasBeenSet(false),
    m_revisionValueHasBeenSet(false)
{
}

SourceRevisionOverride::SourceRevisionOverride(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_revisionType(SourceRevisionType::NOT_SET),
    m_revisionTypeHasBeenSet(false),
    m_revisionValueHasBeenSet(false)
{
  *this = jsonValue;
}

SourceRevisionOverride& SourceRevisionOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionType"))
  {
    m_revisionType = SourceRevisionTypeMapper::GetSourceRevisionTypeForName(jsonValue.GetString("revisionType"));

    m_revisionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionValue"))
  {
    m_revisionValue = jsonValue.GetString("revisionValue");

    m_revisionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceRevisionOverride::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_revisionTypeHasBeenSet)
  {
   payload.WithString("revisionType", SourceRevisionTypeMapper::GetNameForSourceRevisionType(m_revisionType));
  }

  if(m_revisionValueHasBeenSet)
  {
   payload.WithString("revisionValue", m_revisionValue);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
