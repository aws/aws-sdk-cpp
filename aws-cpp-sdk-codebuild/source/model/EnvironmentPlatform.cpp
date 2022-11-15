/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

EnvironmentPlatform::EnvironmentPlatform(JsonView jsonValue) : 
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_languagesHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentPlatform& EnvironmentPlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languages"))
  {
    Aws::Utils::Array<JsonView> languagesJsonList = jsonValue.GetArray("languages");
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
   Aws::Utils::Array<JsonValue> languagesJsonList(m_languages.size());
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
