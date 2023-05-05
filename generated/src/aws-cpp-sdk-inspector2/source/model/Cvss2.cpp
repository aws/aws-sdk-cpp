/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Cvss2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Cvss2::Cvss2() : 
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_scoringVectorHasBeenSet(false)
{
}

Cvss2::Cvss2(JsonView jsonValue) : 
    m_baseScore(0.0),
    m_baseScoreHasBeenSet(false),
    m_scoringVectorHasBeenSet(false)
{
  *this = jsonValue;
}

Cvss2& Cvss2::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue Cvss2::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
