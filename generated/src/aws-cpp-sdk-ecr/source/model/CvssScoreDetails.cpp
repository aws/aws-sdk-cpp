/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/CvssScoreDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

CvssScoreDetails::CvssScoreDetails() : 
    m_adjustmentsHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_scoreSourceHasBeenSet(false),
    m_scoringVectorHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CvssScoreDetails::CvssScoreDetails(JsonView jsonValue) : 
    m_adjustmentsHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_scoreSourceHasBeenSet(false),
    m_scoringVectorHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

CvssScoreDetails& CvssScoreDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adjustments"))
  {
    Aws::Utils::Array<JsonView> adjustmentsJsonList = jsonValue.GetArray("adjustments");
    for(unsigned adjustmentsIndex = 0; adjustmentsIndex < adjustmentsJsonList.GetLength(); ++adjustmentsIndex)
    {
      m_adjustments.push_back(adjustmentsJsonList[adjustmentsIndex].AsObject());
    }
    m_adjustmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scoreSource"))
  {
    m_scoreSource = jsonValue.GetString("scoreSource");

    m_scoreSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scoringVector"))
  {
    m_scoringVector = jsonValue.GetString("scoringVector");

    m_scoringVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue CvssScoreDetails::Jsonize() const
{
  JsonValue payload;

  if(m_adjustmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adjustmentsJsonList(m_adjustments.size());
   for(unsigned adjustmentsIndex = 0; adjustmentsIndex < adjustmentsJsonList.GetLength(); ++adjustmentsIndex)
   {
     adjustmentsJsonList[adjustmentsIndex].AsObject(m_adjustments[adjustmentsIndex].Jsonize());
   }
   payload.WithArray("adjustments", std::move(adjustmentsJsonList));

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  if(m_scoreSourceHasBeenSet)
  {
   payload.WithString("scoreSource", m_scoreSource);

  }

  if(m_scoringVectorHasBeenSet)
  {
   payload.WithString("scoringVector", m_scoringVector);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
