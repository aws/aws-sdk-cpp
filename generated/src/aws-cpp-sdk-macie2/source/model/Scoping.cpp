/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Scoping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Scoping::Scoping() : 
    m_excludesHasBeenSet(false),
    m_includesHasBeenSet(false)
{
}

Scoping::Scoping(JsonView jsonValue) : 
    m_excludesHasBeenSet(false),
    m_includesHasBeenSet(false)
{
  *this = jsonValue;
}

Scoping& Scoping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludes"))
  {
    m_excludes = jsonValue.GetObject("excludes");

    m_excludesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includes"))
  {
    m_includes = jsonValue.GetObject("includes");

    m_includesHasBeenSet = true;
  }

  return *this;
}

JsonValue Scoping::Jsonize() const
{
  JsonValue payload;

  if(m_excludesHasBeenSet)
  {
   payload.WithObject("excludes", m_excludes.Jsonize());

  }

  if(m_includesHasBeenSet)
  {
   payload.WithObject("includes", m_includes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
