﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/CvssScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

CvssScore::CvssScore() : 
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_scoringVectorHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CvssScore::CvssScore(JsonView jsonValue) : 
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_scoringVectorHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

CvssScore& CvssScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseScore"))
  {
    m_baseScore = jsonValue.GetDouble("baseScore");

    m_baseScoreHasBeenSet = true;
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

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue CvssScore::Jsonize() const
{
  JsonValue payload;

  if(m_baseScoreHasBeenSet)
  {
   payload.WithDouble("baseScore", m_baseScore);

  }

  if(m_scoringVectorHasBeenSet)
  {
   payload.WithString("scoringVector", m_scoringVector);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
