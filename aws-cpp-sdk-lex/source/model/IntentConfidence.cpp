/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/IntentConfidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

IntentConfidence::IntentConfidence() : 
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

IntentConfidence::IntentConfidence(JsonView jsonValue) : 
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

IntentConfidence& IntentConfidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentConfidence::Jsonize() const
{
  JsonValue payload;

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
