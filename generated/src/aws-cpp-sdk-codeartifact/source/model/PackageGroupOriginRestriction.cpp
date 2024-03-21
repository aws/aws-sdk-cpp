/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupOriginRestriction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

PackageGroupOriginRestriction::PackageGroupOriginRestriction() : 
    m_mode(PackageGroupOriginRestrictionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_effectiveMode(PackageGroupOriginRestrictionMode::NOT_SET),
    m_effectiveModeHasBeenSet(false),
    m_inheritedFromHasBeenSet(false),
    m_repositoriesCount(0),
    m_repositoriesCountHasBeenSet(false)
{
}

PackageGroupOriginRestriction::PackageGroupOriginRestriction(JsonView jsonValue) : 
    m_mode(PackageGroupOriginRestrictionMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_effectiveMode(PackageGroupOriginRestrictionMode::NOT_SET),
    m_effectiveModeHasBeenSet(false),
    m_inheritedFromHasBeenSet(false),
    m_repositoriesCount(0),
    m_repositoriesCountHasBeenSet(false)
{
  *this = jsonValue;
}

PackageGroupOriginRestriction& PackageGroupOriginRestriction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = PackageGroupOriginRestrictionModeMapper::GetPackageGroupOriginRestrictionModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectiveMode"))
  {
    m_effectiveMode = PackageGroupOriginRestrictionModeMapper::GetPackageGroupOriginRestrictionModeForName(jsonValue.GetString("effectiveMode"));

    m_effectiveModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inheritedFrom"))
  {
    m_inheritedFrom = jsonValue.GetObject("inheritedFrom");

    m_inheritedFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoriesCount"))
  {
    m_repositoriesCount = jsonValue.GetInt64("repositoriesCount");

    m_repositoriesCountHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageGroupOriginRestriction::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", PackageGroupOriginRestrictionModeMapper::GetNameForPackageGroupOriginRestrictionMode(m_mode));
  }

  if(m_effectiveModeHasBeenSet)
  {
   payload.WithString("effectiveMode", PackageGroupOriginRestrictionModeMapper::GetNameForPackageGroupOriginRestrictionMode(m_effectiveMode));
  }

  if(m_inheritedFromHasBeenSet)
  {
   payload.WithObject("inheritedFrom", m_inheritedFrom.Jsonize());

  }

  if(m_repositoriesCountHasBeenSet)
  {
   payload.WithInt64("repositoriesCount", m_repositoriesCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
