/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/SuggestionMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

SuggestionMatch::SuggestionMatch() : 
    m_suggestionHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

SuggestionMatch::SuggestionMatch(JsonView jsonValue) : 
    m_suggestionHasBeenSet(false),
    m_score(0),
    m_scoreHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestionMatch& SuggestionMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("suggestion"))
  {
    m_suggestion = jsonValue.GetString("suggestion");

    m_suggestionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetInt64("score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestionMatch::Jsonize() const
{
  JsonValue payload;

  if(m_suggestionHasBeenSet)
  {
   payload.WithString("suggestion", m_suggestion);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithInt64("score", m_score);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
