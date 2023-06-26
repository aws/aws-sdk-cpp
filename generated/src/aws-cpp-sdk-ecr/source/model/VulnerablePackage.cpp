/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/VulnerablePackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

VulnerablePackage::VulnerablePackage() : 
    m_archHasBeenSet(false),
    m_epoch(0),
    m_epochHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packageManagerHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

VulnerablePackage::VulnerablePackage(JsonView jsonValue) : 
    m_archHasBeenSet(false),
    m_epoch(0),
    m_epochHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packageManagerHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

VulnerablePackage& VulnerablePackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arch"))
  {
    m_arch = jsonValue.GetString("arch");

    m_archHasBeenSet = true;
  }

  if(jsonValue.ValueExists("epoch"))
  {
    m_epoch = jsonValue.GetInteger("epoch");

    m_epochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageManager"))
  {
    m_packageManager = jsonValue.GetString("packageManager");

    m_packageManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("release"))
  {
    m_release = jsonValue.GetString("release");

    m_releaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceLayerHash"))
  {
    m_sourceLayerHash = jsonValue.GetString("sourceLayerHash");

    m_sourceLayerHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue VulnerablePackage::Jsonize() const
{
  JsonValue payload;

  if(m_archHasBeenSet)
  {
   payload.WithString("arch", m_arch);

  }

  if(m_epochHasBeenSet)
  {
   payload.WithInteger("epoch", m_epoch);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_packageManagerHasBeenSet)
  {
   payload.WithString("packageManager", m_packageManager);

  }

  if(m_releaseHasBeenSet)
  {
   payload.WithString("release", m_release);

  }

  if(m_sourceLayerHashHasBeenSet)
  {
   payload.WithString("sourceLayerHash", m_sourceLayerHash);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
