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
    m_descriptionHasBeenSet(false)
{
}

RecommendationSummary::RecommendationSummary(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false),
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_descriptionHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
