/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/RepositoryExternalConnectionInfo.h>
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

RepositoryExternalConnectionInfo::RepositoryExternalConnectionInfo() : 
    m_externalConnectionNameHasBeenSet(false),
    m_packageFormat(PackageFormat::NOT_SET),
    m_packageFormatHasBeenSet(false),
    m_status(ExternalConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RepositoryExternalConnectionInfo::RepositoryExternalConnectionInfo(JsonView jsonValue) : 
    m_externalConnectionNameHasBeenSet(false),
    m_packageFormat(PackageFormat::NOT_SET),
    m_packageFormatHasBeenSet(false),
    m_status(ExternalConnectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryExternalConnectionInfo& RepositoryExternalConnectionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalConnectionName"))
  {
    m_externalConnectionName = jsonValue.GetString("externalConnectionName");

    m_externalConnectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageFormat"))
  {
    m_packageFormat = PackageFormatMapper::GetPackageFormatForName(jsonValue.GetString("packageFormat"));

    m_packageFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExternalConnectionStatusMapper::GetExternalConnectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryExternalConnectionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_externalConnectionNameHasBeenSet)
  {
   payload.WithString("externalConnectionName", m_externalConnectionName);

  }

  if(m_packageFormatHasBeenSet)
  {
   payload.WithString("packageFormat", PackageFormatMapper::GetNameForPackageFormat(m_packageFormat));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExternalConnectionStatusMapper::GetNameForExternalConnectionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
