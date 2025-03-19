/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupAllowedRepository.h>
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

PackageGroupAllowedRepository::PackageGroupAllowedRepository(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageGroupAllowedRepository& PackageGroupAllowedRepository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");
    m_repositoryNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("originRestrictionType"))
  {
    m_originRestrictionType = PackageGroupOriginRestrictionTypeMapper::GetPackageGroupOriginRestrictionTypeForName(jsonValue.GetString("originRestrictionType"));
    m_originRestrictionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageGroupAllowedRepository::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_originRestrictionTypeHasBeenSet)
  {
   payload.WithString("originRestrictionType", PackageGroupOriginRestrictionTypeMapper::GetNameForPackageGroupOriginRestrictionType(m_originRestrictionType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
