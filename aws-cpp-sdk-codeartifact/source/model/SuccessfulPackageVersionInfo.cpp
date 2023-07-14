/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/SuccessfulPackageVersionInfo.h>
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

SuccessfulPackageVersionInfo::SuccessfulPackageVersionInfo() : 
    m_revisionHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SuccessfulPackageVersionInfo::SuccessfulPackageVersionInfo(JsonView jsonValue) : 
    m_revisionHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SuccessfulPackageVersionInfo& SuccessfulPackageVersionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SuccessfulPackageVersionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
