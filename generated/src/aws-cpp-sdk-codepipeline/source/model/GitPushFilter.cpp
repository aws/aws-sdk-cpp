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
    m_tagsHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
}

GitPushFilter::GitPushFilter(JsonView jsonValue) : 
    m_tagsHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_filePathsHasBeenSet(false)
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

  if(jsonValue.ValueExists("branches"))
  {
    m_branches = jsonValue.GetObject("branches");

    m_branchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filePaths"))
  {
    m_filePaths = jsonValue.GetObject("filePaths");

    m_filePathsHasBeenSet = true;
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

  if(m_branchesHasBeenSet)
  {
   payload.WithObject("branches", m_branches.Jsonize());

  }

  if(m_filePathsHasBeenSet)
  {
   payload.WithObject("filePaths", m_filePaths.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
