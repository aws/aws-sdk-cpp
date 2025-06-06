﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionSummary.h>
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

PackageVersionSummary::PackageVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageVersionSummary& PackageVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("origin"))
  {
    m_origin = jsonValue.GetObject("origin");
    m_originHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_status));
  }

  if(m_originHasBeenSet)
  {
   payload.WithObject("origin", m_origin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
