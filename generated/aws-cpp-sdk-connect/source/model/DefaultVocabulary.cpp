/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DefaultVocabulary.h>
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

DefaultVocabulary::DefaultVocabulary() : 
    m_instanceIdHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyIdHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false)
{
}

DefaultVocabulary::DefaultVocabulary(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_languageCode(VocabularyLanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyIdHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultVocabulary& DefaultVocabulary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = VocabularyLanguageCodeMapper::GetVocabularyLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyId"))
  {
    m_vocabularyId = jsonValue.GetString("VocabularyId");

    m_vocabularyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultVocabulary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(m_languageCode));
  }

  if(m_vocabularyIdHasBeenSet)
  {
   payload.WithString("VocabularyId", m_vocabularyId);

  }

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
