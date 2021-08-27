/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/CodeReviewType.h>
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

CodeReviewType::CodeReviewType() : 
    m_repositoryAnalysisHasBeenSet(false)
{
}

CodeReviewType::CodeReviewType(JsonView jsonValue) : 
    m_repositoryAnalysisHasBeenSet(false)
{
  *this = jsonValue;
}

CodeReviewType& CodeReviewType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryAnalysis"))
  {
    m_repositoryAnalysis = jsonValue.GetObject("RepositoryAnalysis");

    m_repositoryAnalysisHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeReviewType::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryAnalysisHasBeenSet)
  {
   payload.WithObject("RepositoryAnalysis", m_repositoryAnalysis.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
