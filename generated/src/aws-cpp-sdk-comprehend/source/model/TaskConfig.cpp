/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/TaskConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

TaskConfig::TaskConfig() : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_documentClassificationConfigHasBeenSet(false),
    m_entityRecognitionConfigHasBeenSet(false)
{
}

TaskConfig::TaskConfig(JsonView jsonValue) : 
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_documentClassificationConfigHasBeenSet(false),
    m_entityRecognitionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

TaskConfig& TaskConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("LanguageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentClassificationConfig"))
  {
    m_documentClassificationConfig = jsonValue.GetObject("DocumentClassificationConfig");

    m_documentClassificationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityRecognitionConfig"))
  {
    m_entityRecognitionConfig = jsonValue.GetObject("EntityRecognitionConfig");

    m_entityRecognitionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskConfig::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_documentClassificationConfigHasBeenSet)
  {
   payload.WithObject("DocumentClassificationConfig", m_documentClassificationConfig.Jsonize());

  }

  if(m_entityRecognitionConfigHasBeenSet)
  {
   payload.WithObject("EntityRecognitionConfig", m_entityRecognitionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
