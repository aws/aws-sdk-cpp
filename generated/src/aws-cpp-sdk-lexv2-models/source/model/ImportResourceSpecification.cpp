/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImportResourceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ImportResourceSpecification::ImportResourceSpecification() : 
    m_botImportSpecificationHasBeenSet(false),
    m_botLocaleImportSpecificationHasBeenSet(false),
    m_customVocabularyImportSpecificationHasBeenSet(false)
{
}

ImportResourceSpecification::ImportResourceSpecification(JsonView jsonValue) : 
    m_botImportSpecificationHasBeenSet(false),
    m_botLocaleImportSpecificationHasBeenSet(false),
    m_customVocabularyImportSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

ImportResourceSpecification& ImportResourceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botImportSpecification"))
  {
    m_botImportSpecification = jsonValue.GetObject("botImportSpecification");

    m_botImportSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botLocaleImportSpecification"))
  {
    m_botLocaleImportSpecification = jsonValue.GetObject("botLocaleImportSpecification");

    m_botLocaleImportSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customVocabularyImportSpecification"))
  {
    m_customVocabularyImportSpecification = jsonValue.GetObject("customVocabularyImportSpecification");

    m_customVocabularyImportSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportResourceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_botImportSpecificationHasBeenSet)
  {
   payload.WithObject("botImportSpecification", m_botImportSpecification.Jsonize());

  }

  if(m_botLocaleImportSpecificationHasBeenSet)
  {
   payload.WithObject("botLocaleImportSpecification", m_botLocaleImportSpecification.Jsonize());

  }

  if(m_customVocabularyImportSpecificationHasBeenSet)
  {
   payload.WithObject("customVocabularyImportSpecification", m_customVocabularyImportSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
