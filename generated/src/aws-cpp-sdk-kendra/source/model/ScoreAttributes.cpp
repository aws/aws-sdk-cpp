/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ScoreAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ScoreAttributes::ScoreAttributes() : 
    m_scoreConfidence(ScoreConfidence::NOT_SET),
    m_scoreConfidenceHasBeenSet(false)
{
}

ScoreAttributes::ScoreAttributes(JsonView jsonValue) : 
    m_scoreConfidence(ScoreConfidence::NOT_SET),
    m_scoreConfidenceHasBeenSet(false)
{
  *this = jsonValue;
}

ScoreAttributes& ScoreAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScoreConfidence"))
  {
    m_scoreConfidence = ScoreConfidenceMapper::GetScoreConfidenceForName(jsonValue.GetString("ScoreConfidence"));

    m_scoreConfidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ScoreAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scoreConfidenceHasBeenSet)
  {
   payload.WithString("ScoreConfidence", ScoreConfidenceMapper::GetNameForScoreConfidence(m_scoreConfidence));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
