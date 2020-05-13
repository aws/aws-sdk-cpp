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
