/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/SourceCodeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

SourceCodeType::SourceCodeType() : 
    m_commitDiffHasBeenSet(false),
    m_repositoryHeadHasBeenSet(false)
{
}

SourceCodeType::SourceCodeType(JsonView jsonValue) : 
    m_commitDiffHasBeenSet(false),
    m_repositoryHeadHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCodeType& SourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommitDiff"))
  {
    m_commitDiff = jsonValue.GetObject("CommitDiff");

    m_commitDiffHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryHead"))
  {
    m_repositoryHead = jsonValue.GetObject("RepositoryHead");

    m_repositoryHeadHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_commitDiffHasBeenSet)
  {
   payload.WithObject("CommitDiff", m_commitDiff.Jsonize());

  }

  if(m_repositoryHeadHasBeenSet)
  {
   payload.WithObject("RepositoryHead", m_repositoryHead.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
