/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitPushFilter.h>
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

GitPushFilter::GitPushFilter() : 
    m_tagsHasBeenSet(false)
{
}

GitPushFilter::GitPushFilter(JsonView jsonValue) : 
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

GitPushFilter& GitPushFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tags"))
  {
    m_tags = jsonValue.GetObject("tags");

    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue GitPushFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagsHasBeenSet)
  {
   payload.WithObject("tags", m_tags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
