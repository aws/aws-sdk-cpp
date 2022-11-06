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
    m_repositoryAnalysisHasBeenSet(false),
    m_analysisTypesHasBeenSet(false)
{
}

CodeReviewType::CodeReviewType(JsonView jsonValue) : 
    m_repositoryAnalysisHasBeenSet(false),
    m_analysisTypesHasBeenSet(false)
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

  if(jsonValue.ValueExists("AnalysisTypes"))
  {
    Aws::Utils::Array<JsonView> analysisTypesJsonList = jsonValue.GetArray("AnalysisTypes");
    for(unsigned analysisTypesIndex = 0; analysisTypesIndex < analysisTypesJsonList.GetLength(); ++analysisTypesIndex)
    {
      m_analysisTypes.push_back(AnalysisTypeMapper::GetAnalysisTypeForName(analysisTypesJsonList[analysisTypesIndex].AsString()));
    }
    m_analysisTypesHasBeenSet = true;
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

  if(m_analysisTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisTypesJsonList(m_analysisTypes.size());
   for(unsigned analysisTypesIndex = 0; analysisTypesIndex < analysisTypesJsonList.GetLength(); ++analysisTypesIndex)
   {
     analysisTypesJsonList[analysisTypesIndex].AsString(AnalysisTypeMapper::GetNameForAnalysisType(m_analysisTypes[analysisTypesIndex]));
   }
   payload.WithArray("AnalysisTypes", std::move(analysisTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
