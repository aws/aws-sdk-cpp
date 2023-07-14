/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ProjectBadge::ProjectBadge(JsonView jsonValue) : 
    m_badgeEnabled(false),
    m_badgeEnabledHasBeenSet(false),
    m_badgeRequestUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectBadge& ProjectBadge::operator =(JsonView jsonValue)
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
