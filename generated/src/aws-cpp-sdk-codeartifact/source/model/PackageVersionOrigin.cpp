/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionOrigin.h>
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

PackageVersionOrigin::PackageVersionOrigin() : 
    m_domainEntryPointHasBeenSet(false),
    m_originType(PackageVersionOriginType::NOT_SET),
    m_originTypeHasBeenSet(false)
{
}

PackageVersionOrigin::PackageVersionOrigin(JsonView jsonValue) : 
    m_domainEntryPointHasBeenSet(false),
    m_originType(PackageVersionOriginType::NOT_SET),
    m_originTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PackageVersionOrigin& PackageVersionOrigin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainEntryPoint"))
  {
    m_domainEntryPoint = jsonValue.GetObject("domainEntryPoint");

    m_domainEntryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originType"))
  {
    m_originType = PackageVersionOriginTypeMapper::GetPackageVersionOriginTypeForName(jsonValue.GetString("originType"));

    m_originTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageVersionOrigin::Jsonize() const
{
  JsonValue payload;

  if(m_domainEntryPointHasBeenSet)
  {
   payload.WithObject("domainEntryPoint", m_domainEntryPoint.Jsonize());

  }

  if(m_originTypeHasBeenSet)
  {
   payload.WithString("originType", PackageVersionOriginTypeMapper::GetNameForPackageVersionOriginType(m_originType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
