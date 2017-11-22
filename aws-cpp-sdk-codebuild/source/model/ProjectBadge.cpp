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

#include <aws/codebuild/model/ProjectBadge.h>
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

ProjectBadge::ProjectBadge() : 
    m_badgeEnabled(false),
    m_badgeEnabledHasBeenSet(false),
    m_badgeRequestUrlHasBeenSet(false)
{
}

ProjectBadge::ProjectBadge(const JsonValue& jsonValue) : 
    m_badgeEnabled(false),
    m_badgeEnabledHasBeenSet(false),
    m_badgeRequestUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectBadge& ProjectBadge::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("badgeEnabled"))
  {
    m_badgeEnabled = jsonValue.GetBool("badgeEnabled");

    m_badgeEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("badgeRequestUrl"))
  {
    m_badgeRequestUrl = jsonValue.GetString("badgeRequestUrl");

    m_badgeRequestUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectBadge::Jsonize() const
{
  JsonValue payload;

  if(m_badgeEnabledHasBeenSet)
  {
   payload.WithBool("badgeEnabled", m_badgeEnabled);

  }

  if(m_badgeRequestUrlHasBeenSet)
  {
   payload.WithString("badgeRequestUrl", m_badgeRequestUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
