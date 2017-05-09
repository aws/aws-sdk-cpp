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

#include <aws/codebuild/model/EnvironmentPlatform.h>
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

EnvironmentPlatform::EnvironmentPlatform() : 
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
}

EnvironmentPlatform::EnvironmentPlatform(const JsonValue& jsonValue) : 
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentPlatform& EnvironmentPlatform::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languages"))
  {
    Array<JsonValue> languagesJsonList = jsonValue.GetArray("languages");
    for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
    {
      m_languages.push_back(languagesJsonList[languagesIndex].AsObject());
    }
    m_languagesHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentPlatform::Jsonize() const
{
  JsonValue payload;

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformTypeMapper::GetNameForPlatformType(m_platform));
  }

  if(m_languagesHasBeenSet)
  {
   Array<JsonValue> languagesJsonList(m_languages.size());
   for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
   {
     languagesJsonList[languagesIndex].AsObject(m_languages[languagesIndex].Jsonize());
   }
   payload.WithArray("languages", std::move(languagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws