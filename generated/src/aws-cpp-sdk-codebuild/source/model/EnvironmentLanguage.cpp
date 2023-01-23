/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/EnvironmentLanguage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

EnvironmentLanguage::EnvironmentLanguage() : 
    m_language(LanguageType::NOT_SET),
    m_languageHasBeenSet(false),
    m_imagesHasBeenSet(false)
{
}

EnvironmentLanguage::EnvironmentLanguage(JsonView jsonValue) : 
    m_language(LanguageType::NOT_SET),
    m_languageHasBeenSet(false),
    m_imagesHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentLanguage& EnvironmentLanguage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("language"))
  {
    m_language = LanguageTypeMapper::GetLanguageTypeForName(jsonValue.GetString("language"));

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("images"))
  {
    Aws::Utils::Array<JsonView> imagesJsonList = jsonValue.GetArray("images");
    for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
    {
      m_images.push_back(imagesJsonList[imagesIndex].AsObject());
    }
    m_imagesHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentLanguage::Jsonize() const
{
  JsonValue payload;

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", LanguageTypeMapper::GetNameForLanguageType(m_language));
  }

  if(m_imagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imagesJsonList(m_images.size());
   for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
   {
     imagesJsonList[imagesIndex].AsObject(m_images[imagesIndex].Jsonize());
   }
   payload.WithArray("images", std::move(imagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
