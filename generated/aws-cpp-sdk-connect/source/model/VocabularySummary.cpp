﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VocabularySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

VocabularySummary::VocabularySummary() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_state(VocabularyState::NOT_SET),
    m_stateHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

VocabularySummary::VocabularySummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_state(VocabularyState::NOT_SET),
    m_stateHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

VocabularySummary& VocabularySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = VocabularyLanguageCodeMapper::GetVocabularyLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue VocabularySummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(m_languageCode));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", VocabularyStateMapper::GetNameForVocabularyState(m_state));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
