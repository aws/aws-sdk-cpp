/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/EnvironmentImage.h>
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

EnvironmentImage::EnvironmentImage() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

EnvironmentImage::EnvironmentImage(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentImage& EnvironmentImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versions"))
  {
    Aws::Utils::Array<JsonView> versionsJsonList = jsonValue.GetArray("versions");
    for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
    {
      m_versions.push_back(versionsJsonList[versionsIndex].AsString());
    }
    m_versionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentImage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_versionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionsJsonList(m_versions.size());
   for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
   {
     versionsJsonList[versionsIndex].AsString(m_versions[versionsIndex]);
   }
   payload.WithArray("versions", std::move(versionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
