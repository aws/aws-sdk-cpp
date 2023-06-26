/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RecommendationSummary.h>
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

RecommendationSummary::RecommendationSummary() : 
    m_filePathHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationCategory(RecommendationCategory::NOT_SET),
    m_recommendationCategoryHasBeenSet(false),
    m_ruleMetadataHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false)
{
}

RecommendationSummary::RecommendationSummary(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationCategory(RecommendationCategory::NOT_SET),
    m_recommendationCategoryHasBeenSet(false),
    m_ruleMetadataHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSummary& RecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationId"))
  {
    m_recommendationId = jsonValue.GetString("RecommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartLine"))
  {
    m_startLine = jsonValue.GetInteger("StartLine");

    m_startLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndLine"))
  {
    m_endLine = jsonValue.GetInteger("EndLine");

    m_endLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationCategory"))
  {
    m_recommendationCategory = RecommendationCategoryMapper::GetRecommendationCategoryForName(jsonValue.GetString("RecommendationCategory"));

    m_recommendationCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleMetadata"))
  {
    m_ruleMetadata = jsonValue.GetObject("RuleMetadata");

    m_ruleMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("RecommendationId", m_recommendationId);

  }

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("StartLine", m_startLine);

  }

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("EndLine", m_endLine);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_recommendationCategoryHasBeenSet)
  {
   payload.WithString("RecommendationCategory", RecommendationCategoryMapper::GetNameForRecommendationCategory(m_recommendationCategory));
  }

  if(m_ruleMetadataHasBeenSet)
  {
   payload.WithObject("RuleMetadata", m_ruleMetadata.Jsonize());

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
