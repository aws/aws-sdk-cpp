﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/VulnerablePackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

VulnerablePackage::VulnerablePackage(JsonView jsonValue)
{
  *this = jsonValue;
}

VulnerablePackage& VulnerablePackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceLayerHash"))
  {
    m_sourceLayerHash = jsonValue.GetString("sourceLayerHash");
    m_sourceLayerHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("epoch"))
  {
    m_epoch = jsonValue.GetInteger("epoch");
    m_epochHasBeenSet = true;
  }
  if(jsonValue.ValueExists("release"))
  {
    m_release = jsonValue.GetString("release");
    m_releaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arch"))
  {
    m_arch = jsonValue.GetString("arch");
    m_archHasBeenSet = true;
  }
  if(jsonValue.ValueExists("packageManager"))
  {
    m_packageManager = PackageManagerMapper::GetPackageManagerForName(jsonValue.GetString("packageManager"));
    m_packageManagerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixedInVersion"))
  {
    m_fixedInVersion = jsonValue.GetString("fixedInVersion");
    m_fixedInVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remediation"))
  {
    m_remediation = jsonValue.GetString("remediation");
    m_remediationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceLambdaLayerArn"))
  {
    m_sourceLambdaLayerArn = jsonValue.GetString("sourceLambdaLayerArn");
    m_sourceLambdaLayerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue VulnerablePackage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_sourceLayerHashHasBeenSet)
  {
   payload.WithString("sourceLayerHash", m_sourceLayerHash);

  }

  if(m_epochHasBeenSet)
  {
   payload.WithInteger("epoch", m_epoch);

  }

  if(m_releaseHasBeenSet)
  {
   payload.WithString("release", m_release);

  }

  if(m_archHasBeenSet)
  {
   payload.WithString("arch", m_arch);

  }

  if(m_packageManagerHasBeenSet)
  {
   payload.WithString("packageManager", PackageManagerMapper::GetNameForPackageManager(m_packageManager));
  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_fixedInVersionHasBeenSet)
  {
   payload.WithString("fixedInVersion", m_fixedInVersion);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithString("remediation", m_remediation);

  }

  if(m_sourceLambdaLayerArnHasBeenSet)
  {
   payload.WithString("sourceLambdaLayerArn", m_sourceLambdaLayerArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
