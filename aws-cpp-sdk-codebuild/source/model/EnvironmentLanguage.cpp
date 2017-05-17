/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

EnvironmentLanguage::EnvironmentLanguage(const JsonValue& jsonValue) : 
    m_language(LanguageType::NOT_SET),
    m_languageHasBeenSet(false),
    m_imagesHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentLanguage& EnvironmentLanguage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("language"))
  {
    m_language = LanguageTypeMapper::GetLanguageTypeForName(jsonValue.GetString("language"));

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("images"))
  {
    Array<JsonValue> imagesJsonList = jsonValue.GetArray("images");
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
   Array<JsonValue> imagesJsonList(m_images.size());
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