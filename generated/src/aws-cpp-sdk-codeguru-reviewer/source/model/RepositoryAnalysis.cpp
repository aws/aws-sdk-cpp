/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RepositoryAnalysis.h>
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

RepositoryAnalysis::RepositoryAnalysis() : 
    m_repositoryHeadHasBeenSet(false),
    m_sourceCodeTypeHasBeenSet(false)
{
}

RepositoryAnalysis::RepositoryAnalysis(JsonView jsonValue) : 
    m_repositoryHeadHasBeenSet(false),
    m_sourceCodeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryAnalysis& RepositoryAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryHead"))
  {
    m_repositoryHead = jsonValue.GetObject("RepositoryHead");

    m_repositoryHeadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceCodeType"))
  {
    m_sourceCodeType = jsonValue.GetObject("SourceCodeType");

    m_sourceCodeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryHeadHasBeenSet)
  {
   payload.WithObject("RepositoryHead", m_repositoryHead.Jsonize());

  }

  if(m_sourceCodeTypeHasBeenSet)
  {
   payload.WithObject("SourceCodeType", m_sourceCodeType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
