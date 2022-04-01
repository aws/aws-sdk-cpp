/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/LanguageWithScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

LanguageWithScore::LanguageWithScore() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

LanguageWithScore::LanguageWithScore(JsonView jsonValue) : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

LanguageWithScore& LanguageWithScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue LanguageWithScore::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
